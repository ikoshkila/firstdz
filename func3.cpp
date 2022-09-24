#include "easy.h"

double itc_pow(int num, int step){
    double n = num;
    for (int i{1}; i < step; i++){
        n *= num;
    }
    return n;
}
bool itc_ispositive(int num){
    return num >= 0;
}
bool itc_ispositive_d(double num){
    return num >= 0;
}
