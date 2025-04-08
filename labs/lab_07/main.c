#include <stdio.h>
#include "functions.h"

    int main(void) {
        freopen("pasta.txt","r",stdin);
        if(!freopen("pasta.txt","r",stdin)) {
            printf("file not found");
            return -1;
        }

        Pasta_t pasta;
        Queue queue,Gluten,nonGluten;
        int x;
        scanf("%i",&x);

        createQueueCirc(x, &queue);
        for (int i = 0; i < x; ++i) {
            readOnePasta(&pasta);
            enqueueCirc(&queue, pasta);
        }
        displayCircQueue(queue);
        dequeueCQ(&pasta);
        dequeueCQ(&pasta);
        enqueueCirc(&queue,pasta);
        enqueueCirc(&queue,pasta);
        createQueueCirc(20,&Gluten);
        createQueueCirc(20,&nonGluten);


        return 0;
    }

