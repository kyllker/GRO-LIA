#include "../include/erreenege.h"

erreenege::erreenege(bool mode, unsigned int seed)
{
	if(!mode)
	{
		std::random_device seed1;
		generator = std::mt19937(seed1());
	}
	else
	{
		this->seed = seed;
        generator = std::mt19937(seed);
	}
}

double erreenege::normal_float(double mu, double sigma)
{
	std::normal_distribution<double> distribution(mu,sigma);
    return(distribution(this->get_generator()));
}

std::mt19937& erreenege::get_generator()
{
       return this->generator;
}