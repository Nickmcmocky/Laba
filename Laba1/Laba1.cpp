#include <iostream>
#include <windows.h>
#include <sysinfoapi.h>
#include <stdio.h>

using namespace std;
extern "C" __declspec(dllimport)
BOOL __stdcall GetPhysicallyInstalledSystemMemory(PULONGLONG);
int main()
{
    ULONGLONG Memory;
    GetPhysicallyInstalledSystemMemory(&Memory);
    cout<<Memory/1024/1024;

}
