#include<cstdio>
using namespace std;


//
//
const int MAX=1e5;
int fid[MAX+10];
void init(int n){
    for(int i=1;i<=n;i++){
        fid[i]=i;
    }
}
int find(int x){
    return x==fid[x] ? x : fid[x]=find(fid[x]);
}

void merge(int x,int y){
    fid[find(x)]=find(y);
}
int isMerge(int x,int y){
    return find(x)==find(y);
}
int main(void){

}