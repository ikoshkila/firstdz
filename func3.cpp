#include "easy.h"

double itc_pow(int num, int step){
    if(step == 0){
        return 1;
    } 
    double n = num;
    for(int i = 1; i < ((step>=0)? step : -step); i++){
        n*= num;
    }
    return (step>0)? n : 1/n;
}
bool itc_ispositive(int num){
    return num >= 0;
}
bool itc_ispositive_d(double num){
    return num >= 0;
}
