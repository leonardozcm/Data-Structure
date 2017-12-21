#include "MinSubsequenceSum.h"
#include "autotesttools.h"
#include <stdio.h>
#include <math.h>
#include <time.h>



int main() {
    for (int i = 1; i < 1000; ++i) {
        int* a=autoBuildArray(i);
        int start = clock();
        int result = minSubsequenceSum(a,0,i-1);
        int time = clock() - start;
        double expection = i*log2(i);
        printf("The min is %d, and running time is %d, limition is %lf\n",result,time,time/expection);
    }
    return 0;
}
