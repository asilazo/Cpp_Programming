//

class Coordinates
{
    // Data members
    float latitude_ = 0, longitude = 0;

    public:
        // Static data member declaration
        static const Coordinates hearthCenter;

        // Member function declaration
        float distanceFrom(Coordinates other);
        
        // Member function definition
        float distanceFrom(Coordinates other)
        {
            return distanceFrom(hearthCenter);
        }
};