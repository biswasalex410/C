#include<bits/stdc++.h>
using namespace std;
char grid[13][13];
int  mark[13][13];
vector<char>path;
void fill_grid();
bool move_robot(int r,int c);
int main(void)
{
    fill_grid();
    int tc,r,c;
    scanf("%d",&tc);
    while(tc--){
        memset(mark,0,sizeof(mark[0][0])*13*13);
        path.clear();
        scanf("%d %d",&r,&c);
        move_robot(r,c);

        printf("%d\n",(int)path.size());
        reverse(path.begin(),path.end());
        for(int i=0;i<path.size();i++)
            printf("%c",path[i]);
            printf("\n");
    }

    return 0;
}
void fill_grid()
{
    memset(grid,'.',sizeof(grid[0][0])*13*13);
    grid[3][3]='*';
    grid[3][10]='*';
    grid[10][3]='*';
    grid[10][10]='*';
    grid[6][6]='0';
    grid[6][7]='0';
    grid[7][6]='0';
    grid[7][7]='0';
    grid[9][2]='0';
    grid[9][3]='0';
    grid[10][2]='0';
    grid[9][10]='0';
    grid[9][11]='0';
    grid[10][11]='0';
}
bool move_robot(int r,int c)
{
//    printf("r=%d c=%d\n",r,c);
    if(r<1||r>12||c<1||c>12)
        return false;
    if(grid[r][c]=='0'||mark[r][c]==1)
        return false;
    mark[r][c]=1;
    if(grid[r][c]=='*')
        return true;
    if(move_robot(r-1,c)){
        path.push_back('U');
        return true;
    }
    if(move_robot(r+1,c)){
        path.push_back('D');
        return true;
    }
    if(move_robot(r,c-1)){
        path.push_back('L');
        return true;
    }
    if(move_robot(r,c+1)){
        path.push_back('R');
        return true;
    }
    return false;
}
