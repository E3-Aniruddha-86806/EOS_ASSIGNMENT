#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main() {
    int pid, signal;

    printf("Enter the process ID (PID): ");
    scanf("%d", &pid);

    printf("Enter the signal number to send : ");
    scanf("%d", &signal);

    // Send the signal to the specified process
    if (kill(pid, signal) == -1) {
        perror("Error sending signal");
       exit(EXIT_FAILURE);
    }

    printf("Signal %d sent to process %d\n", signal, pid);
    return 0;
}
