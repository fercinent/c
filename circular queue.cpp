# include<stdio.h>
# define n 5

int queue[n];
int front=-1;
int rear=-1;

void enque(int x){
	if(front==-1&& rear==-1){
		front=rear=0;
		queue[rear]=x;
	}
	else if((rear+1)%n == front){
		printf("stack overflow");
	}
	else{
		rear=(rear+1)%n;
		queue[rear]=x;
	}
}
void deque(){
	if(front==-1&&rear==-1){
		printf("stack is empty");
	}
	else if(front==rear){
		front=rear=-1;
	}
	else{
		printf("the dequed elemts are %d",queue[front]);
		front=(front+1)%n;
	}
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    }
    else {
        int i = front;
        printf("Queue elements: ");
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) break;
            i = (i + 1) % n;
        }
        printf("\n");
    }
}
int main(){
	enque(4);
	enque(6);
	enque(7);
	enque(6);
	display();
	return 0;
}
