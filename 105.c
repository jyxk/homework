#include <stdio.h>
#include <stdlib.h>

typedef struct CharNode String;
struct CharNode{
    char ch;
    String *next;
};

String *create_list2(void);
void display(String *head);
int counter(String *head);

int main(void){
    String *head = NULL;

    head = create_list2();
    display(head);
    printf("\n");
    int n = counter(head);
    char str[n+1];
    int i;
    for (i = 0; i < n; i++){
        str[i] = head->ch;
        head = head->next;
    }
    str[n] = '\0';
    printf("%s\n", str);

    return 0;
}

String *create_list2(void)
{
    String *h, *tail;
    char ch;
    ch = getchar();
    h = tail = (String *)malloc(sizeof(String));
    h->ch = ch;

    while ((ch = getchar()) != '#')
    {
        tail->next = (String *)malloc(sizeof(String));
        tail = tail->next;
        tail->ch = ch;
    }

    tail->next = NULL;
    
    return h;
}

void display(String *head)
{
    String *p = head;
    
    while (p)
    {
        printf("%c", p->ch);
        p = p->next;
    }
    printf("\n");
}

int counter(String *head){
    int count;
    for (count = 0; head; head = head->next)
        count++;
    return count;
}