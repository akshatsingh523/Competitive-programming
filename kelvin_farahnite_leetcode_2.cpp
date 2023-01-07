class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> arr;
        double k;
        double f;
        k=celsius+273.15;
        f=(celsius*1.80)+32.00;
        arr.push_back(k);
        arr.push_back(f);

        return arr;   
    }
};
