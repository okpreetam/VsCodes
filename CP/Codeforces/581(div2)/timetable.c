#include <stdio.h>

int main()
{
    unsigned long long bnum,digit,dec=0,i=0,n,time,ok=1;
    scanf("%llu", &bnum);
    n=bnum;
    while(n!=0){
    digit=n%10;
    dec+=digit<<i;
    n=n/10;
    i++;
    }
    printf("%llu",dec);

}

#include <stdio.h>
#include <string.h>

#define N	100

int main() {
	static char cc[N + 1];
	int n, i, ans, zero;

	scanf("%s", cc), n = strlen(cc);
	ans = (n - 1) / 2 + 1;
	zero = 1;
	for (i = 1; i < n; i++)
		if (cc[i] != '0') {
			zero = 0;
			break;
		}
	if (n % 2 == 1 && zero)
		ans--;
	printf("%d\n", ans);
	return 0;
}
