#ifndef temperatureProcessing_h
#define temperatureProcessing_h

class temperatureProcessing {
    public:
        double celsius2fahrenheit_reverse(const double Fanrenheit);
        double celsius2fahrenheit(const double Celsius);
        double celsius2kelvin_reverse(const double Kelvin);
        double celsius2kelvin(const double Celsius);
        double fahrenheit2kelvin_reverse(const double Kelvin);
        double fahrenheit2kelvin(const double Fanrenheit);
};

double temperatureProcessing::celsius2fahrenheit_reverse(const double Fanrenheit) {
    return (Fanrenheit - 32) / 1.8;
}

double temperatureProcessing::celsius2fahrenheit(const double Celsius) {
    return 32 + Celsius * 1.8;
}

double temperatureProcessing::celsius2kelvin_reverse(const double Kelvin) {
    return Kelvin + 273.15;
}

double temperatureProcessing::celsius2kelvin(const double Celsius) {
    return Celsius - 273.15;
}

double temperatureProcessing::fahrenheit2kelvin_reverse(const double Kelvin) {
    return Kelvin * 5 - 459.67;
}

double temperatureProcessing::fahrenheit2kelvin(const double Fanrenheit) {
    return (Fanrenheit + 459.67) * 9;
}

#endif