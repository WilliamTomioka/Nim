#include <stdio.h>
#include <math.h>
long long fakt(int x) {
long long f = 1;
for(int i = 2; i <= x; i++)
f *= i;
return f;
}
double cosinus(double x) {
double pi = 3.141592658979, s = 0, e, c, f = 1;
int z = 1, n = 2;
while (x > 2*pi)
x -= 2*pi;
c = 1;
do {
e = c/f;
s+=e*z;
z = -z;
c*= x*x;
f = fakt(n);
n+=2;
}
while (e > 0.0001);
return s;
}
main() {
float x = 8;
printf("\ncos(%.2f) = %f \ncosinus(%.2f) = %f\n", x,cos(x), x,
cosinus(x));
}
