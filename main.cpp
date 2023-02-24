#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using coord = std::vector<std::pair<int, int>>;

std::pair<int, int> counterIN(coord X,coord Y,int R){
    int Xcount=std::count_if(X.begin(), X.end(), [R](std::pair<int, int> i){return i.first*i.first+i.second*i.second<R*R;});
    int Ycount=std::count_if(X.begin(), X.end(), [R](std::pair<int, int> i){return i.first*i.first+i.second*i.second<R*R;});
    return std::pair<int, int>{Xcount,Ycount};
}

int main(){
    coord X{{2,1}};
    coord Y{{4,5}};
    auto c=counterIN(X, Y, 6);
    std::cout<<c.first<<" "<<c.second<<std::endl;
    return 0;
}