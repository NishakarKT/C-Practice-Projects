#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define maxWords 1000
#define maxWordSize 30
#define maxQandAFile 100
#define maxQandASize 1000
#define maxWordStockSize 20000

char words[maxWords][maxWordSize];
char questions[maxQandAFile][maxQandASize];
char answers[maxQandAFile][maxQandASize];
int wordMatches[maxQandAFile][maxWords];
int totalWords = 0;
int totalQuestions = 0;
int totalAnswers = 0;
char wordsStock[maxWordStockSize][maxWordSize];

// initializes all the elements of an array to 0.
void initializeToZero(int *matches, int len)
{
    for (int i = 0; i < len; i++)
        matches[i] = 0;
}

// Lower cases a string.
void lowerCaser(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
}

// to check if a word is present in the list of words.
int isPresent(char words[][maxWordSize], char *word)
{
    for (int i = 0; i < totalWords; i++)
        if (strcmp(words[i], word) == 0)
            return 1;
    return 0;
}

void readWords()
{
    FILE *fptr = fopen("questions.txt", "r");
    // Storing distinct words.
    for (int i = 0; fscanf(fptr, "%s", words[i]) != EOF; i++)
    {
        if (isPresent(words, words[i]))
        {
            totalWords--;
            i--;
        }
        totalWords++;
    }
    fclose(fptr);

    fptr = fopen("words.txt", "r");
    for (int i = 0; fscanf(fptr, "%s", wordsStock[i]) != EOF; i++)
        ;
    fclose(fptr);
}

void readQuestions()
{
    FILE *fptr = fopen("questions.txt", "r");
    // storing questions
    for (int i = 0; fgets(questions[i], 1000, fptr) != NULL; i++)
        totalQuestions++;
    fclose(fptr);
}

void readAnswers()
{
    FILE *fptr = fopen("answers.txt", "r");
    // Storing answers.
    for (int i = 0; fgets(answers[i], 1000, fptr) != NULL; i++)
        totalAnswers++;
    fclose(fptr);
}

void checkMatches(char words[][maxWordSize], char *text, int *textMatches)
{
    for (int i = 0; i < totalWords; i++)
        if (strstr(text, words[i]))
            textMatches[i] = 1;
}

void preProcessing()
{
    readWords();
    readQuestions();
    readAnswers();

    for (int i = 0; i < totalQuestions; i++)
        initializeToZero(wordMatches[i], totalWords);

    for (int i = 0; i < totalQuestions; i++)
        checkMatches(words, questions[i], wordMatches[i]);
}

float dotProduct(int *A, int *B, int len)
{
    float dotProd = 0;

    for (int i = 0; i < len; i++)
        dotProd += A[i] * B[i];

    return dotProd;
}

int numOfWords(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] < 97 || str[i] > 122)
            count++;
    }
    return count;
}

void answer(char *question, int *questionMatches)
{
    float similarity = INT_MIN;
    float comparisionFactor;
    int maxIndex = 0;
    float threshold = 0.5;

    for (int i = 0; i < totalQuestions; i++)
    {
        comparisionFactor = dotProduct(questionMatches, wordMatches[i], totalWords) / numOfWords(questions[i]);
        if (similarity < comparisionFactor)
        {
            similarity = comparisionFactor;
            maxIndex = i;
        }
    }

    if (maxIndex == 0)
    {
        printf("Vector : %s\n", answers[maxIndex]);
        exit(0);
    }
    else if (similarity >= threshold)
        printf("Vector : %s\n", answers[maxIndex]);
    else
        printf("Vector : Sorry.. I didn't get you...\n");
}

void replace(char *word, char *text, int index)
{
    for (int i = index, j = 0; word[j]; i++, j++)
        text[i] = word[j];
}

int characterMatches(char *word, char *wordF)
{
    int matches = 0;

    if (abs(strlen(word) - strlen(wordF)) > 0 || strlen(word) < 5)
        return INT_MIN;

    if (strcmp(word, wordF) == 0)
        return INT_MAX;

    for (int i = 0; wordF[i]; i++)
    {
        for (int j = -1; j <= 1; j++)
            if (word[i] == wordF[i + j])
                matches++;
    }
    return matches;
}

void wordCheck(char *word)
{
    int matches = 0;
    int minMatches = INT_MIN;
    int maxIndex = -1;

    for (int i = 0; i < maxWordStockSize; i++)
    {
        matches = characterMatches(word, wordsStock[i]);
        if (minMatches < matches)
        {
            minMatches = matches;
            maxIndex = i;
        }
    }

    if (maxIndex >= 0)
        strcpy(word, wordsStock[maxIndex]);
}

void spellCheck(char *question)
{
    int index = 0;
    char word[maxWordSize];

    for (int i = 0, j = 0; i < strlen(question); i++)
    {
        index = i;
        while (1)
        {
            word[j] = question[i];
            i++;
            j++;
            if (question[i] > 122 || question[i] < 97)
            {
                word[j] = '\0';
                wordCheck(word);
                replace(word, question, index);
                j = 0;
                break;
            }
        }
    }
}

int main()
{
    preProcessing();

    char question[maxQandAFile];
    int questionMatches[totalWords];

    for (;;)
    {
        initializeToZero(questionMatches, totalWords);
        printf("\nUser : ");
        gets(question);

        lowerCaser(question);

        spellCheck(question);

        checkMatches(words, question, questionMatches);

        answer(question, questionMatches);
    }

    return 0;
}