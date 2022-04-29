#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (n % i == 0)
        {
            return 1;
            break;
        }
    }
}

int main()
{
    printf("WELCOME TO CALCO!!!\n");
    int k;
    for (k = 0;; k++)
    {
        int num, num1, num2, num3, num4, check, chng, chng1, row1, row2, col1, col2;
        int Den1, a, b, i, j, l, m, n;
        double eq[100][100], numbers[100], matrix1[100][100], matrix2[100][100], matrix3[100][100], add = 0, sub, prod = 1, div, Num, Den, base, index, princ, time, times, rate;
        double numf, numf1, numf2;
        char c;

        printf("Here you shall get access to Hundereds of Mathematical tools.\nChoose from the following list.\n");
        printf("1 = Arithmetic\n2 = Banking\n3 = Linear Equations\n4 = Prime And Composite\n5 = Asc. & Des. Order\n6 = Series\n7 = Matrices and Determinants\n8 = Mathematical Tables\n9 = Converters\n9 = Geometry\n10 = Patterns\n11 = Miscellaneous\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            for (j = 0;; j++)
            {
                printf("ARITHMETIC.\nChoose an Option.\n1 = Addition\n2 = Subtraction\n3 = Multiplication\n4 = Division\n5 = Percentage\n6 = Remainder Finder\n7 = Exponent\n");
                scanf("%d", &b);
                switch (b)
                {
                case 1:
                    for (l = 0;; l++)
                    {
                        check = (-1);
                        add = 0;
                        printf("ADDITION.\n(Enter '0' to terminate entering numbers.)\n");
                        for (i = 0; i <= 99; i++)
                        {
                            printf("Enter Number %d : ", (i + 1));
                            scanf("%lf", &numbers[i]);
                            check++;
                            if (numbers[i] == 0)
                            {
                                break;
                            }
                        }
                        for (i = 0; i < check; i++)
                        {
                            add = add + numbers[i];
                        }
                        printf("Sum : %0.2lf\n", add);
                        printf("1 = Reuse Addition\n2 = Change Arithmetic Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 2:
                    for (l = 0;; l++)
                    {
                        check = -1;
                        printf("SUBTRACTION.\n(Enter '0' to terminate entering numbers.)\n");
                        for (i = 0; i <= 99; i++)
                        {
                            printf("Enter Number %d : ", (i + 1));
                            scanf("%lf", &numbers[i]);
                            check++;
                            if (numbers[i] == 0)
                            {
                                break;
                            }
                        }
                        sub = numbers[0];
                        for (i = 1; i < check; i++)
                        {
                            sub = sub - numbers[i];
                        }
                        printf("Difference : %0.2lf\n", sub);
                        printf("1 = Reuse Subtraction\n2 = Change Arithmetic Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 3:
                    for (l = 0;; l++)
                    {
                        check = (-1);
                        prod = 1;
                        printf("MULTIPLICATION.\n(Enter '1' to terminate entering numbers.)\n");
                        for (i = 0; i <= 99; i++)
                        {
                            printf("Enter Number %d : ", (i + 1));
                            scanf("%lf", &numbers[i]);
                            check++;
                            if (numbers[i] == 1)
                            {
                                break;
                            }
                        }
                        for (i = 0; i < check; i++)
                        {
                            prod = prod * numbers[i];
                        }
                        printf("Product : %0.2lf\n", prod);
                        printf("1 = Reuse Multiplication\n2 = Change Arithmetic Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 4:
                    for (l = 0;; l++)
                    {
                        check = (-1);
                        printf("DIVISION.\n(Enter '1' to terminate entering numbers.)\n");
                        for (i = 0; i <= 99; i++)
                        {
                            printf("Enter Number %d : ", (i + 1));
                            scanf("%lf", &numbers[i]);
                            check++;
                            if (numbers[i] == 1)
                            {
                                break;
                            }
                        }
                        div = numbers[0];
                        for (i = 1; i < check; i++)
                        {
                            div = div / numbers[i];
                        }
                        printf("Division : %0.2lf\n", div);
                        printf("1 = Reuse Division\n2 = Change Arithmetic Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 5:
                    for (l = 0;; l++)
                    {
                        printf("PERCENTAGE.\n");
                        printf("Enter Numerator : ");
                        scanf("%lf", &Num);
                        printf("Enter Denominator : ");
                        scanf("%lf", &Den);
                        printf("Percentage : %0.2lf\n", (Num / Den) * 100);
                        printf("1 = Reuse Percentage\n2 = Change Arithmetic Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 6:
                    for (l = 0;; l++)
                    {
                        printf("REMAINDER FINDER.\n");
                        printf("Enter Numerator (Integer) : ");
                        scanf("%d", &num1);
                        printf("Enter Denominator (Integer) : ");
                        scanf("%d", &Den1);
                        if (num1 > 0 && Den1 > 0)
                        {
                            printf("Remainder : %d\n", num1 % Den1);
                        }
                        else if (num1 < 0 && Den1 < 0)
                        {
                            printf("Remainder : %d\n", (num1 % Den1 - Den1));
                        }
                        else if (num1 > 0 && Den1 < 0)
                        {
                            printf("Remainder : %d\n", num1 % Den1);
                        }
                        else if (num1 < 0 && Den1 > 0)
                        {
                            printf("Remainder : %d\n", (Den1 + num1 % Den1));
                        }
                        else if (num1 == 0 && Den1 != 0)
                        {
                            printf("Remainder : 0\n");
                        }
                        else if (num1 != 0 && Den1 == 0)
                        {
                            printf("Invalid Input\n(Denominator = 0 implies an invalid statement)\n");
                        }
                        printf("1 = Reuse Remainder\n2 = Change Arithmetic Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 7:
                    for (l = 0;; l++)
                    {
                        printf("EXPONENT.\n");
                        printf("Enter Base Number : ");
                        scanf("%lf", &base);
                        printf("Enter Index : ");
                        scanf("%lf", &index);
                        printf("%0.2lf ^ %0.2lf = %0.2lf\n", base, index, pow(base, index));
                        printf("1 = Reuse Exponent\n2 = Change Arithmetic Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;
                }
                printf("1 = Arithmetic Tools\n2 = Main Menu\n");
                scanf("%d", &chng);
                if (chng == 2)
                {
                    break;
                }
            }
            break;

        case 2:
            for (j = 0;; j++)
            {
                printf("BANKING.\nChoose an Option.\n1 = Simple Interest\n2 = Compound Interest\n");
                scanf("%d", &b);
                switch (b)
                {
                case 1:
                    for (l = 0;; l++)
                    {
                        printf("SIMPLE INTEREST.\n");
                        printf("Enter Principal Amount : ");
                        scanf("%lf", &princ);

                        printf("Enter Interest Rate : ");
                        scanf("%lf", &rate);

                        printf("Enter Borrowing Time : ");
                        scanf("%lf", &time);

                        printf("Interest Amount : %0.4lf\n", (princ * rate * time) / 100);
                        printf("Total Amount : %0.4lf\n", princ + (princ * rate * time) / 100);

                        printf("1 = Reuse Simple Interest\n2 = Change Banking Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 2:
                    for (l = 0;; l++)
                    {
                        printf("COMPOUND INTEREST.\n");
                        printf("Enter Principal Amount : ");
                        scanf("%lf", &princ);

                        printf("Enter Interest Rate : ");
                        scanf("%lf", &rate);

                        printf("Enter Borrowing Time (In Years) : ");
                        scanf("%lf", &time);

                        printf("Enter Number of times to be compounded in a Year : ");
                        scanf("%lf", &times);

                        printf("Interest Amount : %0.4lf\n", princ * pow((1 + (rate / times)), (time * times)));
                        printf("Total Amount : %0.4lf\n", princ + princ * pow((1 + (rate / times)), (time * times)));

                        printf("1 = Reuse Compound Interest\n2 = Change Banking Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;
                }

                printf("1 = Banking Tools\n2 = Main Menu\n");
                scanf("%d", &chng);
                if (chng == 2)
                {
                    break;
                }
            }
            break;

        case 3:
            for (j = 0;; j++)
            {
                printf("LINEAR EQUATIONS.\nArrange the variables in the same order and look at the coefficients in a Determinant form and enter the values.\nHow many variables are you dealing with \?\n2, 3, 4, 5\n");
                scanf("%d", &b);
                switch (b)
                {
                case 2:
                    for (l = 0;; l++)
                    {
                        printf("Example : \n");
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                printf("A%d%d ", i, j);
                            }
                            printf("\n");
                        }
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                printf("Enter A%d%d : ", i, j);
                                scanf("%lf", &eq[i][j]);
                            }
                        }

                        printf("1 = Reuse 2 Variables\n2 = Change Linear Equations Tools\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 3:
                    for (l = 0;; l++)
                    {
                        printf("Example : \n");
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                printf("A%d%d ", i, j);
                            }
                            printf("\n");
                        }
                        printf("1 = Reuse 3 Variables\n2 = Change Linear Equations Tools\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 4:
                    for (l = 0;; l++)
                    {
                        printf("Example : \n");
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 4; j++)
                            {
                                printf("A%d%d ", i, j);
                            }
                            printf("\n");
                        }
                        printf("1 = Reuse 4 Variables\n2 = Change Linear Equations Tools\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 5:
                    for (l = 0;; l++)
                    {
                        printf("Example : \n");
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 5; j++)
                            {
                                printf("A%d%d ", i, j);
                            }
                            printf("\n");
                        }
                        printf("1 = Reuse 5 Variables\n2 = Change Linear Equations Tools\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;
                }

                printf("1 = Linear Equations\n2 = Main Menu\n");
                scanf("%d", &chng);
                if (chng == 2)
                {
                    break;
                }
            }
            break;

        case 4:
            for (j = 0;; j++)
            {
                printf("PRIME AND COMPOSITE.\nChoose an Option.\n1 = Prime Identifier\n2 = Listing Primes till a number\n3 = Listing Primes between 2 numbers\n");
                scanf("%d", &b);
                switch (b)
                {
                case 1:
                    for (l = 0;; l++)
                    {
                        printf("PRIME IDENTIFIER.\n");
                        printf("Enter a Number : ");
                        scanf("%d", &num);
                        if (prime(num) == 1)
                        {
                            printf("%d is Composite.\n", num);
                        }
                        else
                        {
                            printf("%d is Prime.\n", num);
                        }
                        printf("1 = Reuse Prime Identifier\n2 = Change Prime and Composite Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;
                case 2:
                    for (l = 0;; l++)
                    {
                        printf("LISTING PRIMES TILL A NUMBER.\n");
                        printf("Enter a Number till which you want to list out Primes : ");
                        scanf("%d", &num);
                        printf("The Prime Numbers till %d are : \n", num);
                        for (i = 2; i <= num; i++)
                        {
                            if (prime(i) != 1)
                            {
                                printf("%d ", i);
                            }
                        }
                        printf("1 = Reuse Listing Primes till a Number\n2 = Change Prime and Composite Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 3:
                    for (l = 0;; l++)
                    {
                        printf("LISTING PRIMES BETWEEN 2 NUMBERS.\n");
                        printf("Enter 1st Number : ");
                        scanf("%d", &num);
                        printf("Enter 2nd Number : ");
                        scanf("%d", &num1);
                        if (num < num1)
                        {
                            printf("The Prime Numbers between %d and %d are : \n", num, num1);
                            for (i = num; i <= num1; i++)
                            {
                                if (prime(i) != 1)
                                {
                                    printf("%d ", i);
                                }
                            }
                        }
                        else if (num1 < num)
                        {
                            printf("The Prime Numbers between %d and %d are : \n", num, num1);
                            for (i = num1; i <= num; i++)
                            {
                                if (prime(i) != 1)
                                {
                                    printf("%d ", i);
                                }
                            }
                        }
                        printf("1 = Reuse Listing Primes between 2 Numbers\n2 = Change Prime and Composite Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;
                }
                printf("1 = Prime and Composite\n2 = Main Menu\n");
                scanf("%d", &chng);
                if (chng == 2)
                {
                    break;
                }
            }
            break;

        case 5:
            for (j = 0;; j++)
            {
                printf("ORDERS\nChoose an option.\n1 = Ascending Order\n2 = Descending Order\n");
                scanf("%d", &b);
                switch (b)
                {
                case 1:
                    for (l = 0;; l++)
                    {
                        printf("How many Numbers do you want to compare \? (Max : 1000)\n");
                        scanf("%d", &n);
                        for (i = 0; i < n; i++)
                        {
                            printf("Enter Number %d (Max Decimals : 4) : ", (i + 1));
                            scanf("%lf", &numbers[i]);
                        }

                        for (i = 0; i < n; i++)
                        {
                            for (j = (i + 1); j < n; j++)
                            {
                                if (numbers[i] > numbers[j])
                                {
                                    a = numbers[i];
                                    numbers[i] = numbers[j];
                                    numbers[j] = a;
                                }
                            }
                        }

                        printf("\nThe Ascending Order : \n");
                        for (i = 0; i < n; i++)
                        {
                            printf("%0.4lf ", numbers[i]);
                        }
                        printf("\n");
                        printf("1 = Reuse Ascending Order\n2 = Change Orders Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 2:
                    for (l = 0;; l++)
                    {
                        printf("How many Numbers do you want to compare \? (Max : 1000)\n");
                        scanf("%d", &n);
                        for (i = 0; i < n; i++)
                        {
                            printf("Enter Number %d : ", (i + 1));
                            scanf("%d", &numbers[i]);
                        }
                        for (i = 0; i < n; i++)
                        {
                            for (j = (i + 1); j < n; j++)
                            {
                                if (numbers[i] < numbers[j])
                                {
                                    numf = numbers[i];
                                    numbers[i] = numbers[j];
                                    numbers[j] = numf;
                                }
                            }
                        }

                        printf("The Descending Order is : \n");
                        for (i = 0; i < n; i++)
                        {
                            printf("%0.2lf ", numbers[i]);
                        }
                        printf("1 = Reuse Descending Order\n2 = Change Orders Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;
                }
                printf("1 = Orders\n2 = Main Menu\n");
                scanf("%d", &chng);
                if (chng == 2)
                {
                    break;
                }
            }
            break;

        case 6:
            for (j = 0;; j++)
            {
                printf("SERIES.\nChoose an Option.\n1 = AP Generator\n2 = GP Generator\n3 = HP Generator\n4 = Infinite GP Sum\n5 = Fibonacci Series\n");
                scanf("%d", &b);
                switch (b)
                {
                case 1:
                    for (l = 0;; l++)
                    {
                        printf("AP GENERATOR.\nEnter The First Term Of The Arithematic Progression(AP) : ");
                        scanf("%lf", &numf);
                        printf("Enter The Common Difference Of The Arithematic Progression(AP) : ");
                        scanf("%lf", &numf1);
                        printf("How Many Members Should There Be In The Series\?\n");
                        scanf("%d", &num);

                        for (i = 1; i <= num; i++)
                        {
                            numf2 = (numf + (i - 1) * numf1);
                            printf("%0.2lf\n", numf2);
                            if (i > num)
                            {
                                break;
                            }
                        }
                        printf("1 = Reuse AP Generator\n2 = Change Series Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 2:
                    for (l = 0;; l++)
                    {
                        printf("GP GENERATOR.\nEnter The First Term Of The Geometric Progression(GP) : ");
                        scanf("%lf", &numf);
                        printf("Enter The Common Ratio Of The Geometric Progression(GP) : ");
                        scanf("%lf", &numf1);
                        printf("How Many Members Should There Be In The Series\?\n");
                        scanf("%d", &num);

                        for (i = 1; i <= num; i++)
                        {
                            numf2 = numf * pow(numf1, (i - 1));
                            printf("%0.2lf\n", numf2);
                            if (i > num)
                            {
                                break;
                            }
                        }
                        printf("1 = Reuse GP Generator\n2 = Change Series Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 3:
                    for (l = 0;; l++)
                    {
                        printf("HP GENERATOR.\nEnter The First Term Of The Harmonic Progression(HP) : ");
                        scanf("%lf", &numf);
                        printf("Enter The Reciprocal Common Difference Of The Harmonic Progression(HP) : ");
                        scanf("%lf", &numf1);
                        printf("How Many Members Should There Be In The Series\?\n");
                        scanf("%d", &num);

                        for (i = 1; i <= num; i++)
                        {
                            numf2 = 1 / ((1 / numf1) + (i - 1) * num);
                            printf("%0.2lf\n", numf2);
                            if (i > num)
                            {
                                break;
                            }
                        }
                        printf("1 = Reuse HP Generator\n2 = Change Series Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 4:
                    for (l = 0;; l++)
                    {
                        printf("INFINITE GP SUM.\nEnter the First Term Of The  GP : ");
                        scanf("%lf", &numf);

                        printf("Enter the Common Ratio Of The GP (less than 1) : ");
                        scanf("%lf", &numf1);

                        printf("Sum : %0.2lf\n", numf1 / (1 - numf2));
                        printf("1 = Reuse Infinite GP Sum\n2 = Change Series Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 5:
                    for (l = 0;; l++)
                    {
                        printf("FIBONACCI SERIES.\n");
                        printf("How many members of the Fibonacci Series do you want to print \?\n");
                        scanf("%d", &num);
                        printf("The Fibonacci Sequence : \n");

                        for (i = 1; i <= num; i++)
                        {
                            num3 = num1 + num2;
                            printf("%d ", num2);
                            num1 = num2;
                            num2 = num3;
                        }
                        printf("1 = Reuse Fibonacci Series\n2 = Change Series Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;
                }
                printf("1 = Series\n2 = Main Menu\n");
                scanf("%d", &chng);
                if (chng == 2)
                {
                    break;
                }
            }
            break;

        case 7: //INCOMPLETE
            for (j = 0;; j++)
            {
                printf("MATRICES AND DETERMINANTS.\nChoose an Option.\n1 = Matrix Addition\n2 = Matrix Subtraction\n3 = Matrix Product\n4 = Matrix Transpose\n5 = Matrix Adjoint\n6 = Matrix Inverse\n7 = Determinant Solver\n");
                scanf("%d", &b);
                switch (b)
                {
                case 1:
                    for (l = 0;; l++)
                    {
                        printf("MATRIX ADDITION.\n");
                        printf("Enter Number of Rows in the Matrix : ");
                        scanf("%d", &num);
                        printf("Enter Number of Columns in the Matrix : ");
                        scanf("%d", &num1);
                        printf("Here is an example of a %d x %d Matrix,\n", num, num1);
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                printf("A%d%d ", (i + 1), (j + 1));
                            }
                            printf("\n");
                        }
                        printf("Enter values for Matrix 1.\n");
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                printf("Enter value in A%d%d : ", (i + 1), (j + 1));
                                scanf("%lf", matrix1[i][j]);
                            }
                        }
                        printf("Enter values for Matrix 2.\n");
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                printf("Enter value in A%d%d : ", (i + 1), (j + 1));
                                scanf("%lf", matrix2[i][j]);
                            }
                        }
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
                            }
                        }
                        printf("Sum : \n");
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                printf("%0.2lf \n", matrix3[i][j]);
                            }
                        }
                        printf("1 = Reuse Matrix Addition\n2 = Change Matrices and Determinants Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 2:
                    for (l = 0;; l++)
                    {
                        printf("MATRIX SUBTRACTION.\n");
                        printf("Enter Number of Rows in the Matrix : ");
                        scanf("%d", &num);
                        printf("Enter Number of Columns in the Matrix : ");
                        scanf("%d", &num1);
                        printf("Here is an example of a %d x %d Matrix,\n", num, num1);
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                printf("A%d%d ", (i + 1), (j + 1));
                            }
                            printf("\n");
                        }
                        printf("Enter values for Matrix 1.\n");
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                printf("Enter value in A%d%d : ", (i + 1), (j + 1));
                                scanf("%lf", matrix1[i][j]);
                            }
                        }
                        printf("Enter values for Matrix 2.\n");
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                printf("Enter value in A%d%d : ", (i + 1), (j + 1));
                                scanf("%lf", matrix2[i][j]);
                            }
                        }
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
                            }
                        }
                        printf("Difference : \n");
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                printf("%0.2lf \n", matrix3[i][j]);
                            }
                        }
                        printf("1 = Reuse\n2 = Change Tool\n");
                        scanf("%d", &chng);
                        if (chng == 2)
                        {
                            break;
                        }
                        printf("1 = Reuse Matrix Subtraction\n2 = Change Matrices and Determinants Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 3:
                    for (l = 0;; l++)
                    {
                        printf("MATRIX PRODUCT.\n");
                        printf("Enter Number of Rows in Matrix 1 : \n");
                        scanf("%d", &row1);
                        printf("Enter Number of Columns in Matrix 1 : \n");
                        scanf("%d", &col1);
                        printf("Enter Number of Rows in Matrix 2 : \n");
                        scanf("%d", &row2);
                        printf("Enter Number of Columns in Matrix 2 : \n");
                        scanf("%d", &col2);

                        if (col1 != row2)
                        {
                            printf("Invalid Input.\n");
                            break;
                        }

                        printf("Example (Matrix 1) : \n");
                        for (i = 0; i < row1; i++)
                        {
                            for (j = 0; j < col1; j++)
                            {
                                printf("A%d%d ", (i + 1), (j + 1));
                            }
                            printf("\n");
                        }

                        printf("Example (Matrix 2) : \n");
                        for (i = 0; i < row2; i++)
                        {
                            for (j = 0; j < col2; j++)
                            {
                                printf("A%d%d ", (i + 1), (j + 1));
                            }
                            printf("\n");
                        }

                        printf("Enter values for Matrix 1.\n");
                        for (i = 0; i < row1; i++)
                        {
                            for (j = 0; j < col1; j++)
                            {
                                printf("Enter A%d%d : ", (i + 1), (j + 1));
                                scanf("%lf", &matrix1[i][j]);
                            }
                        }

                        printf("Enter values for Matrix 2.\n");
                        for (i = 0; i < row2; i++)
                        {
                            for (j = 0; j < col2; j++)
                            {
                                printf("Enter A%d%d : ", i + 1, j + 1);
                                scanf("%lf", &matrix2[i][j]);
                            }
                        }

                        for (i = 0; i < row1; i++)
                        {
                            for (j = 0; j < col2; j++)
                            {
                                numf = 0;
                                for (k = 0, l = 0; k < col1, l < row2; k++, l++)
                                {
                                    numf = numf + matrix1[i][k] * matrix2[l][j];
                                }
                                numf = matrix3[i][j];
                            }
                        }

                        for (i = 0; i < row1; i++)
                        {
                            for (j = 0; j < col2; j++)
                            {
                                printf("%0.2lf ", matrix3[i][j]);
                            }
                            printf("\n");
                        }

                        printf("1 = Reuse Matrix Product\n2 = Change Matrices and Determinants Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 4:
                    for (l = 0;; l++)
                    {
                        printf("MATRIX TRANSPOSE.\n");
                        printf("Enter Number of Rows in the Matrix : ");
                        scanf("%d", &num);
                        printf("Enter Number of Columns in the Matrix : ");
                        scanf("%d", &num1);
                        printf("Here is an example of a %d x %d Matrix,\n", num, num1);
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                printf("A%d%d ", (i + 1), (j + 1));
                            }
                            printf("\n");
                        }
                        printf("Enter values for the Matrix.\n");
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                printf("Enter A%d%d : ", (i + 1), (j + 1));
                                scanf("%lf", &matrix1[i][j]);
                            }
                        }
                        printf("The Transpose of the Matrix is : \n");
                        for (j = 0; j < num1; j++)
                        {
                            for (i = 0; i < num; i++)
                            {
                                printf("%0.2lf ", matrix1[i][j]);
                            }
                            printf("\n");
                        }

                        printf("1 = Reuse Matrix Transpose\n2 = Change Matrices and Determinants Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 5:
                    for (l = 0;; l++)
                    {
                        printf("MATRIX ADJOINT.\n");
                        printf("1 = Reuse Matrix Adjoint\n2 = Change Matrices and Determinants Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 6:
                    for (l = 0;; l++)
                    {
                        printf("MATRIX INVERSE.\n");
                        printf("1 = Reuse Matrix Inverse\n2 = Change Matrices and Determinants Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 7:
                    for (l = 0;; l++)
                    {
                        printf("DETERMINANT SOLVER.\n");
                        printf("Enter the Order of the Matrix : ");
                        scanf("%d", &num);
                        printf("Enter values for the Matrix.\n");
                        for (i = 0; i < num; i++)
                        {
                            for (j = 0; j < num1; j++)
                            {
                                printf("Enter A%d%d : ", (i + 1), (j + 1));
                                scanf("%lf", &matrix1[i][j]);
                            }
                        }

                        printf("1 = Reuse Determinant Solver\n2 = Change Matrices and Determinants Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;
                }
                printf("1 = Matrices and Determinants\n2 = Main Menu\n");
                scanf("%d", &chng);
                if (chng == 2)
                {
                    break;
                }
            }
            break;

        case 8:
            for (j = 0;; j++)
            {
                printf("MATHEMATICAL TABLES.\n");
                printf("Enter the Number : ");
                scanf("%lf", &numf);
                printf("Enter the number of members of the Table to be displayed : ");
                scanf("%d", &num);

                for (i = 1; i <= num; i++)
                {
                    printf("%lf x %d = %lf\n", numf, i, numf * i);
                }
                printf("1 = Mathematical Tables\n2 = Main Menu\n");
                scanf("%d", &chng);
                if (chng == 2)
                {
                    break;
                }
            }
            break;

        case 9:
            for (j = 0;; j++)
            {
                printf("CONVERTERS.\nChoose an option.\n1 = Angles\n2 = Area\n3 = Digital Storage\n4 = Energy\n5 = Length\n6 = Mass\n7 = Speed\n8 = Tempearture\n9 = Time\n");
                scanf("%d", &b);
                switch (b)
                {
                case 1:
                    for (l = 0;; l++)
                    {
                        printf("ANGLES.\n1 = Radians\n2 = Degrees\n3 = Gradians\n4 = Minutes of Arc\n4 = Seconds of Arc\n");
                        printf("Convert : ");
                        scanf("%d", &num);
                        printf(" To : ");
                        scanf("%d", &num1);
                        printf("\n");

                        switch (num)
                        {
                        case 1:
                            switch (num1)
                            {
                            case 1:
                                printf("Enter Angle (In Radians) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Radians) : %0.4lf\n", numf * 1);
                                break;

                            case 2:
                                printf("Enter Angle (In Radians) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Degrees) : %0.4lf\n", numf * 57.2958);
                                break;

                            case 3:
                                printf("Enter Angle (In Radians) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Gradians) : %0.4lf\n", numf * 63.662);
                                break;

                            case 4:
                                printf("Enter Angle (In Radians) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Minutes of Arc) : %0.4lf\n", numf * 3437.75);
                                break;

                            case 5:
                                printf("Enter Angle (In Radians) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Seconds of Arc) : %0.4lf\n", numf * 206265);
                                break;
                            }

                            break;

                        case 2:
                            switch (num1)
                            {
                            case 1:
                                printf("Enter Angle (In Degress) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Radians) : %0.4lf\n", numf * 0.0174533);
                                break;

                            case 2:
                                printf("Enter Angle (In Degress) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Degrees) : %0.4lf\n", numf * 1);
                                break;

                            case 3:
                                printf("Enter Angle (In Degress) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Gradians) : %0.4lf\n", numf * 1.11111);
                                break;

                            case 4:
                                printf("Enter Angle (In Degress) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Minutes of Arc) : %0.4lf\n", numf * 60);
                                break;

                            case 5:
                                printf("Enter Angle (In Degress) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Seconds of Arc) : %0.4lf\n", numf * 3600);
                                break;
                            }

                            break;

                        case 3:
                            switch (num1)
                            {
                            case 1:
                                printf("Enter Angle (In Gradians) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Radians) : %0.4lf\n", numf * 0.015708);
                                break;

                            case 2:
                                printf("Enter Angle (In Gradians) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Degrees) : %0.4lf\n", numf * 0.9);
                                break;

                            case 3:
                                printf("Enter Angle (In Gradians) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Gradians) : %0.4lf\n", numf * 1);
                                break;

                            case 4:
                                printf("Enter Angle (In Gradians) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Minutes of Arc) : %0.4lf\n", numf * 54);
                                break;

                            case 5:
                                printf("Enter Angle (In Gradians) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Seconds of Arc) : %0.4lf\n", numf * 3240);
                                break;
                            }

                            break;

                        case 4:
                            switch (num1)
                            {
                            case 1:
                                printf("Enter Angle (In Minutes of Arc) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Radians) : %0.4lf\n", numf * 0.000290888);
                                break;

                            case 2:
                                printf("Enter Angle (In Minutes of Arc) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Degrees) : %0.4lf\n", numf * 0.0166667);
                                break;

                            case 3:
                                printf("Enter Angle (In Minutes of Arc) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Gradians) : %0.4lf\n", numf * 0.0185185);
                                break;

                            case 4:
                                printf("Enter Angle (In Minutes of Arc) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Minutes of Arc) : %0.4lf\n", numf * 1);
                                break;

                            case 5:
                                printf("Enter Angle (In Minutes of Arc) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Seconds of Arc) : %0.4lf\n", numf * 60);
                                break;
                            }

                            break;

                        case 5:
                            switch (num1)
                            {
                            case 1:
                                printf("Enter Angle (In Seconds of Arc) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Radians) : %0.4lf\n", numf * 0.000004848);
                                break;

                            case 2:
                                printf("Enter Angle (In Seconds of Arc) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Degrees) : %0.4lf\n", numf * 0.000277778);
                                break;

                            case 3:
                                printf("Enter Angle (In Seconds of Arc) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Gradians) : %0.4lf\n", numf * 0.000308642);
                                break;

                            case 4:
                                printf("Enter Angle (In Seconds of Arc) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Minutes of Arc) : %0.4lf\n", numf * 0.0166667);
                                break;

                            case 5:
                                printf("Enter Angle (In Seconds of Arc) : ");
                                scanf("%lf", &numf);
                                printf("Converted Angle in (Seconds of Arc) : %0.4lf\n", numf * 1);
                                break;
                            }
                            break;
                        }
                        printf("1 = Reuse Angles\n2 = Change Converters Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 2:
                    for (l = 0;; l++)
                    {
                        printf("AREA.\n1 = \n2 = \n3 = \n");
                        printf("Convert : ");
                        scanf("%d", &num);
                        printf(" To : ");
                        scanf("%d", &num1);
                        printf("\n");

                        switch(num)
                        {
                            case 1:
                            break;

                            case 2:
                            break;

                            case 3:
                            break;

                            case 4:
                            break;

                            case 5:
                            break;
                        }

                        printf("1 = Reuse Angles\n2 = Change Converters Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 3:
                    for (l = 0;; l++)
                    {
                        printf("AREA.\n1 = \n2 = \n3 = \n");
                        printf("Convert : ");
                        scanf("%d", &num);
                        printf(" To : ");
                        scanf("%d", &num1);
                        printf("\n");

                        switch(num)
                        {
                            case 1:
                            break;

                            case 2:
                            break;

                            case 3:
                            break;

                            case 4:
                            break;

                            case 5:
                            break;
                        }

                        printf("1 = Reuse Angles\n2 = Change Converters Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 4:
                    for (l = 0;; l++)
                    {
                        printf("AREA.\n1 = \n2 = \n3 = \n");
                        printf("Convert : ");
                        scanf("%d", &num);
                        printf(" To : ");
                        scanf("%d", &num1);
                        printf("\n");

                        switch(num)
                        {
                            case 1:
                            break;

                            case 2:
                            break;

                            case 3:
                            break;

                            case 4:
                            break;

                            case 5:
                            break;
                        }

                        printf("1 = Reuse Angles\n2 = Change Converters Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 5:
                    for (l = 0;; l++)
                    {
                        printf("AREA.\n1 = \n2 = \n3 = \n");
                        printf("Convert : ");
                        scanf("%d", &num);
                        printf(" To : ");
                        scanf("%d", &num1);
                        printf("\n");

                        switch(num)
                        {
                            case 1:
                            break;

                            case 2:
                            break;

                            case 3:
                            break;

                            case 4:
                            break;

                            case 5:
                            break;
                        }

                        printf("1 = Reuse Angles\n2 = Change Converters Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 6:
                    for (l = 0;; l++)
                    {
                        printf("AREA.\n1 = \n2 = \n3 = \n");
                        printf("Convert : ");
                        scanf("%d", &num);
                        printf(" To : ");
                        scanf("%d", &num1);
                        printf("\n");

                        switch(num)
                        {
                            case 1:
                            break;

                            case 2:
                            break;

                            case 3:
                            break;

                            case 4:
                            break;

                            case 5:
                            break;
                        }

                        printf("1 = Reuse Angles\n2 = Change Converters Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 7:
                    for (l = 0;; l++)
                    {
                        printf("AREA.\n1 = \n2 = \n3 = \n");
                        printf("Convert : ");
                        scanf("%d", &num);
                        printf(" To : ");
                        scanf("%d", &num1);
                        printf("\n");

                        switch(num)
                        {
                            case 1:
                            break;

                            case 2:
                            break;

                            case 3:
                            break;

                            case 4:
                            break;

                            case 5:
                            break;
                        }

                        printf("1 = Reuse Angles\n2 = Change Converters Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 8:
                    for (l = 0;; l++)
                    {
                        printf("AREA.\n1 = \n2 = \n3 = \n");
                        printf("Convert : ");
                        scanf("%d", &num);
                        printf(" To : ");
                        scanf("%d", &num1);
                        printf("\n");

                        switch(num)
                        {
                            case 1:
                            break;

                            case 2:
                            break;

                            case 3:
                            break;

                            case 4:
                            break;

                            case 5:
                            break;
                        }

                        printf("1 = Reuse Angles\n2 = Change Converters Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 9:
                    for (l = 0;; l++)
                    {
                        printf("AREA.\n1 = \n2 = \n3 = \n");
                        printf("Convert : ");
                        scanf("%d", &num);
                        printf(" To : ");
                        scanf("%d", &num1);
                        printf("\n");

                        switch(num)
                        {
                            case 1:
                            break;

                            case 2:
                            break;

                            case 3:
                            break;

                            case 4:
                            break;

                            case 5:
                            break;
                        }

                        printf("1 = Reuse Angles\n2 = Change Converters Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;
                }
                printf("1 = Converters\n2 = Main Menu\n");
                scanf("%d", &chng);
                if (chng == 2)
                {
                    break;
                }
            }
            break;

        case 10:

            for (j = 0;; j++)
            {
                printf("PATTERNS.\nEnter a Character you want to print with.\n");
                scanf(" %c", &c);
                printf("Choose a Pattern.\n1  =  SQUARE\n2  =  RECTANGLE\n3  =  TRIANGLE\n4  =  DIAMOND\n5  =  ZIGZAG\n");
                scanf("%d", &num);

                if (num == 1)
                {
                    for (l = 0;; l++)
                    {
                        printf("Choose a SQUARE Pattern type.\n1 = SHADED\n2 = OUTLINE\n");
                        scanf("%d", &num1);
                        printf("What should be the size of the Pattern \?\n");
                        scanf("%d", &n);
                        printf("\n");

                        if (num1 == 1)

                        {
                            for (i = 1; i <= n; i++)
                            {
                                for (j = 1; j <= n; j++)
                                {
                                    printf("%c ", c);
                                    if (j > n)
                                    {
                                        break;
                                    }
                                }

                                printf("\n");
                                if (i > n)
                                {
                                    break;
                                }
                            }
                            printf("\n");
                        }

                        else if (num1 == 2)

                        {
                            for (j = 1; j <= n; j++)
                            {
                                printf("%c ", c);
                                if (j > n)
                                {
                                    break;
                                }
                            }
                            printf("\n");

                            for (i = 2; i <= (n - 1); i++)
                            {
                                printf("%c ", c);
                                for (j = 2; j <= (n - 1); j++)
                                {
                                    printf("  ");
                                    if (j > (n - 1))
                                    {
                                        break;
                                    }
                                }
                                printf("%c ", c);

                                printf("\n");
                                if (i > (n - 1))
                                {
                                    break;
                                }
                            }

                            for (j = 1; j <= n; j++)
                            {
                                printf("%c ", c);
                                if (j > n)
                                {
                                    break;
                                }
                            }
                            printf("\n\n");
                        }
                        printf("1 = Reuse Square\n2 = Change Patterns Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                }

                else if (num == 2)
                {
                    for (l = 0;; l++)
                    {
                        printf("Which Rectangle type do you want \?\n1 = Shaded\n2 = Outline\n");
                        scanf("%d", &num2);
                        printf("Enter the Length of the Rectangle.\n");
                        scanf("%d", &l);
                        printf("Enter the Breadth of the Rectangle.\n");
                        scanf("%d", &b);
                        printf("\n");

                        switch (num2)
                        {
                        case 1:
                            for (i = 1; i <= b; i++)
                            {
                                for (j = 1; j <= l; j++)
                                {
                                    printf("%c ", c);
                                    if (j > l)
                                    {
                                        break;
                                    }
                                }
                                printf("\n");
                                if (i > b)
                                {
                                    break;
                                }
                            }
                            printf("\n");
                            break;

                        case 2:
                            for (j = 1; j <= l; j++)
                            {
                                printf("%c ", c);
                                if (j > l)
                                {
                                    break;
                                }
                            }
                            printf("\n");
                            for (i = 2; i <= (b - 1); i++)
                            {
                                printf("%c ", c);
                                for (j = 2; j <= (l - 1); j++)
                                {
                                    printf("  ");
                                    if (j > (l - 1))
                                    {
                                        break;
                                    }
                                }
                                printf("%c ", c);
                                printf("\n");
                                if (i > (b - 1))
                                {
                                    break;
                                }
                            }
                            for (j = 1; j <= l; j++)
                            {
                                printf("%c ", c);
                                if (j > l)
                                {
                                    break;
                                }
                            }
                            printf("\n\n");
                            break;
                        }
                        printf("1 = Reuse Rectangle\n2 = Change Patterns Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                }

                else if (num == 3)

                {
                    for (l = 0;; l++)
                    {
                        printf("Choose a TRIANGULAR Pattern type.\n1 = SHADED\n2 = OUTLINE\n");
                        scanf("%d", &num1);

                        if (num1 == 1)
                        {
                            printf("Choose a SHADED TRIANGULAR Pattern type.\n1 = ERECT\n2 = INVERTED\n");
                            scanf("%d", &num2);

                            if (num2 == 1)
                            {
                                printf("Choose a SHADED ERECT TRIANGULAR Pattern type.\n1 = LEFT\n2 = RIGHT\n");
                                scanf("%d", &num3);
                                printf("What should be the size of the Pattern \?\n");
                                scanf("%d", &n);
                                printf("\n");

                                if (num3 == 1)
                                {
                                    for (i = 1; i <= n; i++)
                                    {
                                        for (j = 0; j < i; j++)
                                        {
                                            printf("%c ", c);
                                            if (j >= i)
                                            {
                                                break;
                                            }
                                        }
                                        printf("\n");
                                        if (i > n)
                                        {
                                            break;
                                        }
                                    }
                                    printf("\n");
                                }

                                else if (num3 == 2)

                                {
                                    for (i = 1; i <= n; i++)
                                    {
                                        for (j = n; j > i; j--)
                                        {
                                            printf("  ");
                                            if (j <= i)
                                            {
                                                break;
                                            }
                                        }

                                        for (j = 1; j <= i; j++)
                                        {
                                            printf("%c ", c);
                                            if (j > i)
                                            {
                                                break;
                                            }
                                        }
                                        printf("\n");
                                        if (i > n)
                                        {
                                            break;
                                        }
                                    }
                                    printf("\n");
                                }
                            }

                            else if (num2 == 2)
                            {
                                printf("Choose a SHADED INVERTED TRIANGULAR Pattern type.\n1 = LEFT\n2 = RIGHT\n");
                                scanf("%d", &num3);
                                printf("What should be the size of the Pattern \?\n");
                                scanf("%d", &n);
                                printf("\n");

                                if (num3 == 1)
                                {
                                    for (i = 1; i <= n; i++)
                                    {
                                        for (j = n; j >= i; j--)
                                        {
                                            printf("%c ", c);
                                            if (j < i)
                                            {
                                                break;
                                            }
                                        }
                                        printf("\n");
                                        if (i > n)
                                        {
                                            break;
                                        }
                                    }
                                    printf("\n");
                                }

                                else if (num3 == 2)
                                {
                                    for (i = 1; i <= n; i++)
                                    {
                                        for (j = 1; j < i; j++)
                                        {
                                            printf("  ");
                                            if (j >= i)
                                            {
                                                break;
                                            }
                                        }
                                        for (j = n; j >= i; j--)
                                        {
                                            printf("%c ", c);
                                            if (j < i)
                                            {
                                                break;
                                            }
                                        }
                                        printf("\n");
                                        if (i > n)
                                        {
                                            break;
                                        }
                                    }
                                    printf("\n");
                                }
                            }
                        }

                        else if (num1 == 2)
                        {
                            printf("Choose an OUTLINE TRIANGULAR Pattern type.\n1 = ERECT\n2 = INVERTED\n");
                            scanf("%d", &num2);

                            if (num2 == 1)
                            {
                                printf("Choose an OUTLINE ERECT TRIANGULAR Pattern type.\n1 = LEFT\n2 = RIGHT\n");
                                scanf("%d", &num3);
                                printf("What should be the size of the Pattern \?\n");
                                scanf("%d", &n);
                                printf("\n");

                                if (num3 == 1)

                                {
                                    printf("%c \n", c);
                                    for (i = 2; i <= (n - 1); i++)
                                    {
                                        printf("%c ", c);
                                        for (j = 2; j < i; j++)
                                        {
                                            printf("  ", c);
                                            if (j >= i)
                                            {
                                                break;
                                            }
                                        }
                                        printf("%c ", c);
                                        printf("\n");
                                        if (i > (n - 1))
                                        {
                                            break;
                                        }
                                    }
                                    for (j = 1; j <= n; j++)
                                    {
                                        printf("%c ", c);
                                        if (j > n)
                                        {
                                            break;
                                        }
                                    }
                                    printf("\n\n");
                                }

                                else if (num3 == 2)

                                {
                                    for (i = 1; i < n; i++)
                                    {
                                        printf("  ");
                                        if (i >= n)
                                        {
                                            break;
                                        }
                                    }
                                    printf("%c \n", c);
                                    for (i = 2; i <= (n - 1); i++)
                                    {
                                        for (j = (n - 1); j >= i; j--)
                                        {
                                            printf("  ");
                                            if (j < i)
                                            {
                                                break;
                                            }
                                        }
                                        printf("%c ", c);
                                        for (j = 2; j < i; j++)
                                        {
                                            printf("  ");
                                            if (j >= i)
                                            {
                                                break;
                                            }
                                        }
                                        printf("%c ", c);
                                        printf("\n");
                                        if (i > (n - 1))
                                        {
                                            break;
                                        }
                                    }
                                    for (i = 1; i <= n; i++)
                                    {
                                        printf("%c ", c);
                                        if (i > n)
                                        {
                                            break;
                                        }
                                    }
                                    printf("\n\n");
                                }
                            }

                            else if (num2 == 2)
                            {
                                printf("Choose an OUTLINE INVERTED TRIANGULAR Pattern type.\n1 = LEFT\n2 = RIGHT\n");
                                scanf("%d", &num3);
                                printf("What should be the size of the Pattern \?\n");
                                scanf("%d", &n);
                                printf("\n");

                                if (num3 == 1)
                                {
                                    for (j = 1; j <= n; j++)
                                    {
                                        printf("%c ", c);
                                        if (j > n)
                                        {
                                            break;
                                        }
                                    }
                                    printf("\n");

                                    for (i = 2; i <= (n - 1); i++)
                                    {
                                        printf("%c ", c);
                                        for (j = (n - 1); j > i; j--)
                                        {
                                            printf("  ", c);
                                            if (j <= i)
                                            {
                                                break;
                                            }
                                        }
                                        printf("%c ", c);
                                        printf("\n");
                                        if (i > (n - 1))
                                        {
                                            break;
                                        }
                                    }

                                    printf("%c \n", c);
                                    printf("\n");
                                }

                                else if (num3 == 2)
                                {
                                    for (i = 1; i <= n; i++)
                                    {
                                        printf("%c ", c);
                                        if (i > n)
                                        {
                                            break;
                                        }
                                    }
                                    printf("\n");
                                    for (i = 2; i <= (n - 1); i++)
                                    {
                                        for (j = 2; j <= i; j++)
                                        {
                                            printf("  ");
                                            if (j > i)
                                            {
                                                break;
                                            }
                                        }
                                        printf("%c ", c);
                                        for (j = (n - 2); j >= i; j--)
                                        {
                                            printf("  ");
                                            if (j < i)
                                            {
                                                break;
                                            }
                                        }

                                        printf("%c ", c);
                                        printf("\n");
                                        if (i > (n - 1))
                                        {
                                            break;
                                        }
                                    }
                                    for (i = 1; i < n; i++)
                                    {
                                        printf("  ");
                                        if (i >= n)
                                        {
                                            break;
                                        }
                                    }
                                    printf("%c \n", c);
                                    printf("\n");
                                }
                            }
                        }
                        printf("1 = Reuse Triangle\n2 = Change Patterns Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                }

                else if (num == 4)

                {
                    for (l = 0;; l++)
                    {
                        printf("What should be the size of the Diamond Pattern \?\n");
                        scanf("%d", &n);
                        printf("\n");

                        for (i = 1; i <= n; i = (i + 2))
                        {
                            for (j = n; j > i; j = (j - 2))
                            {
                                printf("  ");
                                if (j <= i)
                                {
                                    break;
                                }
                            }
                            for (j = 1; j <= i; j++)
                            {
                                printf("%c ", c);
                                if (j > i)
                                {
                                    break;
                                }
                            }
                            for (j = n; j > i; j = (j - 2))
                            {
                                printf("  ");
                                if (j <= i)
                                {
                                    break;
                                }
                            }
                            printf("\n");
                            if (i > n)
                            {
                                break;
                            }
                        }

                        for (i = 1; i < n; i = (i + 2))
                        {
                            for (j = 1; j <= i; j = (j + 2))
                            {
                                printf("  ");
                                if (j > i)
                                {
                                    break;
                                }
                            }
                            for (j = 1; j <= (n - 1 - i); j++)
                            {
                                printf("%c ", c);
                                if (j > (n - 1 - i))
                                {
                                    break;
                                }
                            }
                            for (j = 1; j <= i; j = (j + 2))
                            {
                                printf("  ");
                                if (j <= i)
                                {
                                    break;
                                }
                            }
                            printf("\n");
                            if (i >= n)
                            {
                                break;
                            }
                        }
                        printf("\n");
                        printf("1 = Diamond\n2 = Change Patterns Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                }

                else if (num == 5)
                {
                    for (l = 0;; l++)
                    {
                        printf("What should be the size of the ZigZag Pattern \?\n");
                        scanf("%d", &n);
                        printf("How many loops do you want \?\n0 = Infinite Pattern\n");
                        scanf("%d", &num1);
                        printf("\n");

                        if (num1 == 0)
                        {
                            for (k = 1;; k++)
                            {
                                for (i = 1; i <= n; i++)
                                {
                                    for (j = 1; j < i; j++)
                                    {
                                        printf("  ");
                                        if (j >= i)
                                        {
                                            break;
                                        }
                                    }
                                    printf("%c ", c);
                                    printf("\n");
                                    if (i > n)
                                    {
                                        break;
                                    }
                                }
                                for (i = 1; i < (n - 1); i++)
                                {
                                    for (j = i; j <= (n - 2); j++)
                                    {
                                        printf("  ");
                                        if (j > (n - 2))
                                        {
                                            break;
                                        }
                                    }
                                    printf("%c ", c);
                                    printf("\n");
                                    if (i >= (n - 1))
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            for (k = 1; k <= num1; k++)
                            {
                                for (i = 1; i <= n; i++)
                                {
                                    for (j = 1; j < i; j++)
                                    {
                                        printf("  ");
                                        if (j >= i)
                                        {
                                            break;
                                        }
                                    }
                                    printf("%c ", c);
                                    printf("\n");
                                    if (i > n)
                                    {
                                        break;
                                    }
                                }
                                for (i = 1; i < (n - 1); i++)
                                {
                                    for (j = i; j <= (n - 2); j++)
                                    {
                                        printf("  ");
                                        if (j > (n - 2))
                                        {
                                            break;
                                        }
                                    }
                                    printf("%c ", c);
                                    printf("\n");
                                    if (i >= (n - 1))
                                    {
                                        break;
                                    }
                                }
                                if (k > num1)
                                {
                                    break;
                                }
                            }
                            printf("%c \n", c);
                            printf("\n");
                        }
                        printf("1 = Reuse ZigZag\n2 = Change Patterns Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                }
                printf("1 = Patterns\n2 = Main Menu\n");
                scanf("%d", &chng);
                if (chng == 2)
                {
                    break;
                }
            }
            break;

        case 11:
            for (j = 0;; j++)
            {
                printf("MISCELLANEOUS.\nChoose an option.\n1 = Listing Factors\n2 = Factorial Finder\n");
                scanf("%d", &b);
                switch (b)
                {
                case 1:
                    for (l = 0;; l++)
                    {
                        printf("LISTING FACTORS.\n");
                        printf("Enter a Number : ");
                        scanf("%d", &num);
                        for (i = 1; i <= num; i++)
                        {
                            if (num % i == 0)
                            {
                                printf("%d ", i);
                            }
                        }
                        printf("\n");
                        printf("1 = Reuse Listing\n2 = Change Miscellaneous Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;

                case 2:
                    for (l = 0;; l++)
                    {
                        prod = 1;
                        printf("FACTORIAL FINDER.\n");
                        printf("Enter a Number to find its Factorial : ");
                        scanf("%d", &num);
                        for (i = 1; i <= num; i++)
                        {
                            prod = prod * i;
                        }
                        printf("%d ! = %0.0lf\n", num, prod);
                        printf("1 = Reuse Factorial Finder\n2 = Change Miscellaneous Tool\n");
                        scanf("%d", &chng1);
                        if (chng1 == 2)
                        {
                            break;
                        }
                    }
                    break;
                }
                printf("1 = Miscellaneous\n2 = Main Menu\n");
                scanf("%d", &chng);
                if (chng == 2)
                {
                    break;
                }
            }
            break;
        }
    }

    return 0;
}