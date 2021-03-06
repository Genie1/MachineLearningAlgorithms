/*Owner & Copyrights: Vance King Saxbe. A.*/// Program P5.7

#include <stdio.h>
#define MaxQ 10
#include <queue.h>

main() {
   int n;
   Queue Q = initQueue();
   printf("Enter a positive integer: ");
   scanf("%d", &n);
   while (n > 0) {
      enqueue(Q, n % 10);
      n = n / 10;
   }
    printf("\nDigits in reverse order: ");
   while (!empty(Q))
      printf("%d", dequeue(Q));
   printf("\n");
}
/*email to provide support at vancekingsaxbe@powerdominionenterprise.com, businessaffairs@powerdominionenterprise.com, For donations please write to fundraising@powerdominionenterprise.com*/