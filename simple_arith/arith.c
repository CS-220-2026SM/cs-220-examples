int add(int a, int b){
  return a+b; 
}
int sub(int a, int b){
  return a-b; 
}
int mul(int a, int b){
  return a*b; 
}
int divide(int a, int b){
  return a/b; 
}
int remain(int a, int b){
  return a%b; 
}
int expnt(int a, int b){
  int res = 1;
  for (int i = 0; i < b; i++){
    res *= a;
  }
  return res; 
}
