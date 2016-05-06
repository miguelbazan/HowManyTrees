//
//  main.cpp
//  Tarea11_ABB
//
//  Created by Miguel Bazán on 3/10/16.
//  Copyright © 2016 Miguel Bazán. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    long long iArrA[31];
    int iN = 0;
    long long iAcumulado = 0;
    
    for (int iR = 0; iR < 31; iR++)
    {
        iArrA[iR] = 0;
    }
    
    iArrA[0] = 1;
    iArrA[1] = 1;
    
    cin >> iN;

    for (int iA = 2; iA <= iN; iA++)
    {
        for (int iR = 0; iR <= iA; iR++)
        {
            iAcumulado += iArrA[iR] * iArrA[(iA - 1) - iR];
        }
    
        iArrA[iA] = iAcumulado;

        iAcumulado = 0;
    }
    
    cout<<iArrA[iN]<<" BTrees"<<endl;
    
    
    
    return 0;
}
