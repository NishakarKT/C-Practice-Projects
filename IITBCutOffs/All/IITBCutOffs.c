#include<stdio.h>
#include<stdlib.h>

int main()
{
    int G, R;

    printf("WELCOME TO IITBCUTOFFS!!!\nHere You Can Get A Rough Estimate Of Your Eligibility In India's Most Prestigious Institute 'IIT BOMBAY'!!!\nEnter Your Details Below And Get The List Of All The Eligible Branches.\nALL THE BEST!!!\n");

    printf("What's Your Gender\?(1 = male and 2 = female)\n");
    scanf("%d", &G);

    printf("Enter Your All India Rank\n");
    scanf("%d", &R);

    printf("Your Gender Is %d\n", G);

    if(G==1)
    
    {
        printf("\nYour All India Rank Is %d\n\a\a\a", R);
        
        if(R<63)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Computer Science (CS) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Electrical Engineering (EE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Mechanical Engineering (ME) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Engineering Physics (EP) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Chemical Engineering (CE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Aerospace Engineering (AE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<296)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Electrical Engineering (EE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Mechanical Engineering (ME) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Engineering Physics (EP) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Chemical Engineering (CE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Aerospace Engineering (AE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<999)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Mechanical Engineering (ME) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Engineering Physics (EP) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Chemical Engineering (CE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Aerospace Engineering (AE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<1290)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Engineering Physics (EP) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Chemical Engineering (CE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Aerospace Engineering (AE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<1739)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Chemical Engineering (CE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Aerospace Engineering (AE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<2082)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Aerospace Engineering (AE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<3005)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<3501)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<4869)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");    
        }
        else
        {
        printf("\nSORRY!!!\nYou Are Not Applicable For A Seat At IIT Bombay..\nBetter Luck Next Time\n\a\a\a");   
        }

    }

    else if(G==2)
    
    {
        printf("\nYour All India Rank Is %d\n\a\a\a", R);

        if(R<313)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Computer Science (CS) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Electrical Engineering (EE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Engineering Physics (EP) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Mechanical Engineering (ME) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Chemical Engineering (CE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Aerospace Engineering (AE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<1058)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Electrical Engineering (EE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Engineering Physics (EP) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Mechanical Engineering (ME) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Chemical Engineering (CE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Aerospace Engineering (AE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<2689)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Engineering Physics (EP) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Mechanical Engineering (ME) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Chemical Engineering (CE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Aerospace Engineering (AE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<3536)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Mechanical Engineering (ME) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Chemical Engineering (CE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Aerospace Engineering (AE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<3952)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Chemical Engineering (CE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Aerospace Engineering (AE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<4550)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Aerospace Engineering (AE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<5464)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Civil Engineering (CiE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<6574)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Metallurgical Engineering (MetE) Department\n");    
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");
        }
        else if(R<8834)
        {
        printf("\nCONGRATS!!!\nYou Are Eligible For IIT Bombay Environmental Science And Engineering (ESE) Department\n");    
        }
        else
        {
        printf("\nSORRY!!!\nYou Are Not Applicable For A Seat At IIT Bombay..\nBetter Luck Next Time\n\a\a\a");   
        }
    }

    else
    {
        printf("\nYour All India Rank Is %d\n", R);
        printf("\nSORRY!!!\nNO DATA AVAILABLE!!!\n\a\a\a\a\a");
    }
    

system("PAUSE");

return 0 ;

}

    