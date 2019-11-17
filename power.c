#define e 2.718281828
double Pow(double x ,int y){
    double ans=1;
    if(y<0){
        x=1/x;
        y=y*-1;
    }
    for(int i=0;i<y;i++){
        ans*=x;
    }
    return ans;
}
double Exp(int x){
    return Pow(e, x);
}


