/*
Assumptions:
	1. the no. of containers present in the truck is equal to the no. of vareities of bears given.
	2. no. of halts will be given
	3. the temperature reading of each container will be provided at each halt.
	4. Inputs:
		n -> no. of varieties of bears
		range[n] -> range of suitable temperature for different varieties of bear
		q -> no . of halts/ stopages where the truck going to stop and temperature of containers may change
		X -> an array denoting the reading of temperature sensors of each container at all halts.	
	5.Output:
		A warning is generated at each halt for specific containers if their temperature goes out of the suitable range of the bear.
*/

/*
Sample Input:
5
4 6
5 6
4 7
6 8
3 5
5
4 4 4 4 4
5 5 5 5 5
6 6 6 6 6
7 7 7 7 7
8 8 8 8 8
*/

#include<bits/stdc++.h>
using namespace std;
//#define letsgoUltraInstinct ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

signed main()
{
    //letsgoUltraInstinct;
    //cout<<"I must do it......Yeahhh!!!";

    int n; //no. of bears
    cout<<"Enter the no. of varieties of bears: ";
    cin>>n;

    pair<int,int> range[n]; //to store the range of temperatures for differnt varieties of bears
    cout<<"Enter the range of temperatures for each varieties of bear respectively(L, R):\n";
    for(int i=0;i<n;i++)
    {
    	cout<<"\tFor bear "<< i+1 << ": ";
        cin>>range[i].first>>range[i].second;	
	}
    //Assuming that the truck contains equal no. of containers as the no. of variety of bears.
    //Let i th container contains i th bear

    cout<<"\nThe initial temperature of the containers will be set to: \n";
    for(int i=0;i<n;i++)
        cout<<"\tFor container "<<i+1<<"-> "<<(range[i].first+range[i].second)/2<<"\n";

    cout<<"\nTruck departs from the starting point.\n\n";

    int q; //no. of halts(stoppages) between start and destination 
    cout<<"Enter the no. of halts(stoppages) between start and destination: ";
    cin>>q;
    for(int j=0;j<q;j++)
    {
        cout<<"For halt "<<j+1<<":\n";

        //At each halt, reading of the each temperature sensors is taken as input
        
        cout<<"\tEnter the present reading of each temperature sensor of the containers (in the form of array): ";

        int ans[n]; //to store increase/decrease in the temperature.
        int flag=0; //to check whether increase/decrease in temp is needed or not.

        for(int i=0;i<n;i++)
        {
            int x; //present reading of temperature sensors for i th container
            cin>>x;
            if(x<range[i].first)
                ans[i]=1, flag=1; //if lower temperature than the required temperature found.
            else if(x>range[i].second)
                ans[i]=-1, flag=1; //if higher temperature than the required temperature found. 
        }

        for(int i=0;i<n;i++)
        {
            if(ans[i]==1)
                cout<<"\t\tWarning!!! Temperature low for container "<<i+1<<". Hurry, increase the temperature for container "<<i+1<<".\n";
            else if(ans[i]==-1)
                cout<<"\t\tWarning!!! Temperature high for container "<<i+1<<". Hurry, decrease the temperature for container "<<i+1<<".\n";
        }
        if(flag==0)
            cout<<"\t\tAll the bears are under suitable condition.\n";
    }

    cout<<"\nTruck reached Destination :) \n\n";
  
    cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]\n";
    
    return 0;   
}
