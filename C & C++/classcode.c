int main()
{
int i;
for(i =1; i<=3; i++)
stat();
}
void stat()
{
static int x=0;
x = x+1;
printf("x = %d\n",x);
}