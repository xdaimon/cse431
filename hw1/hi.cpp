#include <stdio.h>
#include <vector>
#include <set>
using std::vector;
using std::set;
long t[]={1,6,36,216,1296,7776,46656,279936,679616,77696,466176,797056,782336,694016,164096,984576,907456,444736,668416,10496,62976,377856,267136,602816,616896,701376,208256,249536,497216,983296,899776,398656,391936,351616,109696,658176,949056,694336,166016,996096,976576,859456,156736,940416,642496,854976,129856,779136,674816,48896,293376,0,0,624,387,4368,2709,26832,16641,161616,100233,970320,601785,822544,611097,935888,666969,615952,2201,696336,13593,178640,81945,72464,492057,435408,952729,613072,716761,679056,300953,74960,806105,450384,837017,702928,22489,218192,135321,309776,812313,859280,874265,156304,245977,938448,476249,631312,857881,788496,147673,731600,886425,390224,318937,341968,914009,52432,484441,315216,907033,891920,442585,352144,655897,113488,935769,681552,615001,89936,690393,540240,142745,242064,856857,453008,141529,718672,849561,312656,97753,876560,586905,259984,521817,560528,131289,363792,788121,183376,729113,100880,375065,605904,250777,636048,505049,816912,30681,902096,184473,413200,107225};
int main() {
    // 1st digit cycle len = 1
    // 2st digit cycle len = 5
    // 3rd digit cycle len = 25
    // 4th digit cycle len = 125
    // 5th digit cycle len = 625
    // 6th digit cycle len = 3125
    int i = 0;
    int p = 1;
    vector<int> pk;
    // vector<int> s{3,1,9,7};
    vector<int> s{2,2,7,6,9};
    // vector<int> s{1,7,6,9,9};
    // vector<int> s{4,7,7,7,6,9,8,9,6,8,0};
    // vector<int> s{2,6,0,4,7,7};
    set<int> xxx;
    while (i < 1e8) {
        xxx.insert(p);
        // // printf("%d\t%d\t%d\t%d\n",(t[i]%100)/10, (t[i]%1000)/100, (t[i]%10000)/1000, (t[i]%100000)/10000);
        // printf("%d\t%d\t%d\t%d\t%d\t%d\n",(p%10), (p%100)/10, (p%1000)/100, (p%10000)/1000, (p%100000)/10000, (p%1000000)/100000);
        // pk.push_back((p%1000)/100);
        // if (pk.size() > s.size())
        //     pk.erase(pk.begin());
        // bool f=true;
        // for (int k = 0; k < pk.size(); ++k) {
        //     if (pk[k] != s[k]) {
        //         f = false;
        //         break;
        //     }
        // }
        // if (f and i > s.size()+3) {
        //     printf("%d\n",i-s.size());
        //     return 0;
        // }
        p = (p * 6) % 1000000;
        i += 1;
    }
    printf("%d\n",xxx.size());
}
