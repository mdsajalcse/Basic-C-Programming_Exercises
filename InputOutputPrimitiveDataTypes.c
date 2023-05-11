#include<stdio.h>
int main(){
        int intValueData;
        unsigned int uIntValueData;

        long longValueData;
        unsigned long uLongValueData;

        long long longLongValueData;
        unsigned long long uLongLongValueData;

        float floatValueData;

        double doubleValueData;
        long double longDoubleValueData;

        char charValueData;
        unsigned uCharValueData;

        printf("Enter Integer Value=");
        scanf("%d",&intValueData);

        printf("Enter Unsigned Integer Value=");
        scanf("%lu",&uIntValueData);

        printf("Enter Long Data Value=");
        scanf("%ld",&longValueData);

        printf("Enter unsigned long Value=");
        scanf("%lu",&uLongValueData);

        printf("Enter long long Value=");
        scanf("%lld",&longLongValueData);

        printf("Enter unsigned long long Value=");
        scanf("%llu",&uLongLongValueData);

        printf("Enter Float Value=");
        scanf("%f",&floatValueData);

        printf("Enter double Value=");
        scanf("%lf",&doubleValueData);

        printf("Enter Iong double Value=");
        scanf("%Lf",&longDoubleValueData);


        printf("Enter Character=");
        charValueData=getchar();
        getchar();

        printf("Enter Unsigned Character=");
        uCharValueData=getchar();
        getchar();


     printf("Your Integer Value=%d\n",intValueData);

     printf("Your Unsigned Integer Value=%lu\n",uIntValueData);

     printf("Your Long Data Value=%ld\n",longValueData);

     printf("Your unsigned long Value=%lu\n",uLongValueData);

     printf("Your long long Value=%lld\n",longLongValueData);

     printf("Your unsigned long long Value=%llu\n",uLongLongValueData);


     printf("Your Float Value=%f\n",floatValueData);

     printf("Your double Value=%lf\n",doubleValueData);

     printf("Your Iong double Value=%Lf\n",longDoubleValueData);

     printf("Your  Character=%c\n",charValueData);

     printf("Your Unsigned Character=%c\n",uCharValueData);



return 0;

}
