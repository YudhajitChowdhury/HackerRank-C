#include <bits/stdc++.h>

using namespace std;

void leftRotation(int n, int* a, int d) {
int temp,i;
while(d>0){
temp=a[0];
for (i = 0; i < n-1; i++) {
a[i]= a[i+1];
}
a[n-1]=temp;
d--;
}
}

int main() {
int n,d,i;
scanf("%d %d", &n, &d);
int *a = (int*)malloc(sizeof(int) * n);
for (i = 0; i < n; i++) {
scanf("%d",&a[i]);
}
leftRotation(n,a, d);
for ( i = 0; i < n; i++) {
printf("%d ",a[i]);
}
return 0;
}
