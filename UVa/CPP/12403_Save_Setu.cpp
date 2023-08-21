#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int tc, x;
	long long sum = 0;
	char s[20];

	scanf("%d", &tc);
    int i = 1 ;
	while (i<=tc) {
		scanf("%s", s);

		if (strcmp(s, "donate") == 0) {
			scanf("%d", &x);
			sum += x;
		} else {
			printf("%lld\n", sum);
		}
        i++ ;
	}

	return 0;
}