//
// Created by leonardo on 17-12-20.
//

#ifndef DATA_STRUCTURE_MINSUBSEQUENCESUM_H
#define DATA_STRUCTURE_MINSUBSEQUENCESUM_H

#endif //DATA_STRUCTURE_MINSUBSEQUENCESUM_H
int Min3(int, int, int);
int Min(int, int);
int minSubsequenceSum(const int A[], int left,int right){
    int MinLeftSum,MinRightSum;
    int MinLeftBorderSum,MinRightBorderSum;
    int LeftBorderSum,RightBorderSum;
    int Center,i;

    if(left == right){
       if(A[left]<0)
        return A[left];
       else
           return 0;
    }

    Center = (left+right)/2;
    MinLeftSum = minSubsequenceSum(A,left,Center);
    MinRightSum = minSubsequenceSum(A,Center+1,right);

    MinLeftBorderSum = 0;LeftBorderSum = 0;
    for (i = Center; i >= left ; i--) {
        LeftBorderSum +=A[i];
        if(LeftBorderSum < MinLeftBorderSum)
            MinLeftBorderSum = LeftBorderSum;
    }

    MinRightBorderSum = 0;RightBorderSum = 0;
    for (i = Center +1; i <= right ; i++) {
        RightBorderSum +=A[i];
        if(RightBorderSum<MinRightBorderSum)
            MinLeftBorderSum =RightBorderSum;
    }

    return Min3(MinLeftBorderSum+MinRightBorderSum,MinLeftSum,MinRightSum);
}
int Min3(int a, int b, int c){
    return Min(Min(a,b),c);
}

int Min(int a, int b){
    if (a <=b){
        return a;
    } else{
        return b;
    }
}