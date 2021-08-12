/* Problem 573 - The Snail
 *
 * */

#include<cstdio>
#include<unistd.h>

int main(){
    int h,u,d,f;
    while(scanf("%d %d %d %d",&h,&u,&d,&f)==4){
        //printf("Height of the well:%d\tDistace climbed on the first day:%d\nDistance falled:%d\tFatigue factor:%d\n",h,u,d,f);
        float climbed = 0;
        float actual_climbed = u;
        float fatigue_factor = (float)u*(float)f / 100;

        int day = 0;

        if(h>0){
            while(climbed>=0&&climbed<h){

                day++;
                //actual_climbed = actual_climbed == 0.0? u : actual_climbed - fatigue_factor;
                climbed += actual_climbed;
                actual_climbed -= fatigue_factor;

                if(actual_climbed < (float)0 ){ //If the fatigue factor overtakes the distance climbed then the snail doesnt climb that day
                    actual_climbed = 0.0;
                }

                if(climbed <= h){
                    climbed -= d;
                }

                if(climbed < 0){
                    //printf("Total distace climbed on day %d : %f\t actual distace climbed %f\tFatigue Factor %f\n",day,climbed,actual_climbed,fatigue_factor);
                    break;
                }

                //printf("Total distace climbed on day %d : %f\t actual distace climbed %f\tFatigue Factor %f\n",day,climbed,actual_climbed,fatigue_factor);
                //sleep(1);
            }
            if(climbed<=0){
                printf("failure on day %d\n",day);
            }
            else{
                printf("success on day %d\n",day);
            }
            //printf("\n");
        }
    }
}
