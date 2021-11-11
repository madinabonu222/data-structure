#define MAX_ELEMENTS 100
int score [MAX_ELEMENTS];
int main()
{
    int i,n, tmp;
    tmp=score[0];
    for(i=1;i<n;i++){
        if(score[i]>tmp){
            tmp = score[i];
        }
    }
    print ("%d\n",tmp);
}