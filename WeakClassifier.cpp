#include "WeakClassifier.h"

WeakClassifier::WeakClassifier(IFeature& feature, double threshold, double passWeight, double failWeight):
    feature(feature),
    threshold(threshold),
    passWeight(passWeight),
    failWeight(failWeight)
{
}

WeakClassifier::~WeakClassifier()
{
}

IFeature& WeakClassifier::getFeature() const
{
    return feature;
}

double WeakClassifier::getThreshold() const
{
    return threshold;
}

double WeakClassifier::getPassWeight() const
{
    return passWeight;
}

double WeakClassifier::getFailWeight() const
{
    return failWeight;
}
