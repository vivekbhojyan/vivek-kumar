/*#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, i, count = 0, minimum;
        scanf("%d", &n);
        int arr[100];
        scanf("%d", &arr[0]);
        minimum = arr[0];

        for (i = 1; i < n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] < minimum) {
                minimum = arr[i];
            }
        }

        for (i = 0; i < n; i++) {
            if (arr[i] != minimum) {
                count++;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}*/
#include <stdio.h>

int main() {
	int t,n,count=0;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0; i<=n-1; i++){
	        scanf("%d",&a[i]);
	    }
	    for(int i=1;i<=n-1; i++){
	        if(a[i]<a[0])
	        count++;
	    }
	    printf("%d\n",n-count);
	}
	return 0;
}

