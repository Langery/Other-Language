void loveYou(int n) {
  int i = 1;
  while(i<=n){
    i++;
    printf("I Love You %d\n", i);
  }
  printf("I Love You More Than %d\n", n);
}
int main() {
  loveYou(10);
}