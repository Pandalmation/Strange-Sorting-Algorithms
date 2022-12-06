#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;

template< typename It >
void sleepSort( const It& begin, const It& end )
{
    if ( begin == end )
        return;
    const auto [min, max] = minmax_element( begin, end );
    for ( auto it = begin; it != end; ++it )
    {
        thread( [min = *min, i = *it]
            {
                this_thread::sleep_for(chrono::milliseconds( i - min ) );
                cout << i << endl;
            } ).detach();
    }
    this_thread::sleep_for(chrono::milliseconds( *max - *min + 1 ) );
}

int main( int argc, char *argv[] )
{
    vector<int> v = { 20, 5, 15, 10, -5, };
    sleepSort(v.begin(), v.end() );

    return 0;
}