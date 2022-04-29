#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#define wordLimit 10000
#define tweetsLimit 1000
#define wordSize 25
#define tweetSize 1000

int totalTweets = 0;
int totalWords = 0;
char words[wordLimit][wordSize];
char tweets[tweetsLimit][tweetSize];
int vector[tweetsLimit][wordLimit];

void readTweets()
{
    FILE *fptr = NULL;

    fptr = fopen("tweets.txt", "r");
    fscanf(fptr, "%d", &totalTweets);
    fgetc(fptr); // absorb the new line character.

    // storing all the tweets.
    for (int i = 0; fgets(tweets[i], 1000, fptr) != NULL; i++)
        ;
    fclose(fptr);
}

// check if a word is present in the tweet.
int isPresent(char *word, char words[][25])
{
    for (int i = 0; i < totalWords; i++)
    {
        if (strcmp(word, words[i]) == 0)
            return 1;
    }
    return 0;
}

void readWords()
{
    FILE *fptr = NULL;

    fptr = fopen("tweets.txt", "r");

    while (fgetc(fptr) != '\n')
        ;

    for (int i = 0; fscanf(fptr, "%s", words[i]) != EOF; i++)
    {
        if (isPresent(words[i], words))
        {
            totalWords--;
            i--;
        }
        totalWords++;
    }
}

void initializeToZero(int *vec, int len)
{
    for (int i = 0; i < len; i++)
        vec[i] = 0;
}

void vectorizeTweets()
{
    for (int j = 0; j < totalTweets; j++)
    {
        initializeToZero(vector[j], totalWords);
        for (int i = 0; i < totalWords; i++)
        {
            if (strstr(tweets[j], words[i]))
                vector[j][i] = 1;
        }
    }
}

void vectorizeQuery(char *query, int *queryVec)
{
    initializeToZero(queryVec, totalWords);
    for (int i = 0; i < totalWords; i++)
    {
        if (strstr(query, words[i]))
            queryVec[i] = 1;
    }
}

int dotProduct(int *A, int *B, int len)
{
    int dotProd = 0;

    for (int i = 0; i < len; i++)
        dotProd += A[i] * B[i];

    return dotProd;
}

void similarityCheck(int *queryVec)
{
    int similarity = INT_MIN;
    int dotProd = INT_MIN;
    int index = 0;

    for (int i = 0; i < totalTweets; i++)
    {
        dotProd = dotProduct(queryVec, vector[i], totalWords);
        if (similarity < dotProd)
        {
            similarity = dotProd;
            index = i;
        }
    }

    printf("Closest match : %s\n", tweets[index]);
}

int main()
{
    readTweets();
    readWords();
    vectorizeTweets();

    char query[1000];
    int queryVec[totalWords];

    while (1)
    {
        printf("Enter query : ");
        gets(query);
        if (strcmp(query, "EXIT") == 0)
            exit(0);
        vectorizeQuery(query, queryVec);
        similarityCheck(queryVec);
    }
    return 0;
}