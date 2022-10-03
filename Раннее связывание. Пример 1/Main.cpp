#include "Pingvin.h"
#include "Slon.h"
#include "Tiger.h"


int main()
{
    Pingvin Pingvin;
    Slon Slon;
    Tiger Tiger;

    Pingvin.SetDimension(10.0);
    Pingvin.ShowArea();
    
    Slon.SetDimension(5.5, 10.0);
    Slon.ShowArea();

    Tiger.SetDimension(5.5, 10.0);
    Tiger.ShowArea();


    return 0;
}

