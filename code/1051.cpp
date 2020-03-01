#include <bits/stdc++.h>
using namespace std;
int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	//cout.tie(nullptr);
	double r1, r2, p1, p2, a, b, c, d, re, im;
    double accuracy = 0.01;
    scanf("%lf%lf%lf%lf", &r1, &p1, &r2, &p2);
    a = r1 * cos(p1);
    b = r1 * sin(p1);
    c = r2 * cos(p2);
    d = r2 * sin(p2);
    re = a * c - b * d;
    im = a * d + b * c;
    if (fabs(im) < accuracy) im = 0;
    if (fabs(re) < accuracy) re = 0;
    if (im >= 0)
        printf("%.2lf+%.2lfi\n", re, im);
    else
        printf("%.2lf%.2lfi\n", re, im);
	return 0;
} 	
