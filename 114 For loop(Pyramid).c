/*-------------from now onwards, pyramid ko generalise krne lage hai. means user se input maang kr pyramid print kr rahe----------------*/



#include<stdio.h>
int main()
{
    int rows,columns,k=0; /*---------k ko yaha initialise kiye and reason toh obviously understood hai---------*/

    for(rows=1;rows<=7;rows++)
    {
        k<=4?k++:k--;

        for(columns=1;columns<=rows;columns++)
        {
            // if(columns>=5-rows && columns<=3+rows)  aisa isliye nahi likh skte hai because jb rows ka value 5 hoga then it will become 0, which is absurd.
            /*--------------that's why introduced a new variable named K---------------*/

            if(columns>=5-k && columns<=3+k)   /*---------------here K ka value i ke value ke saath change hoga. like jb tk i ka value 4 rhega k will increment and after becoming 4, it will decrease like 3,2,1 till 7th row. and upar me yahi condition lagaye hai------------------*/

            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}