#ifndef __WEAKCLASSIFIER_H__
#define __WEAKCLASSIFIER_H__

#include <string>

#include "IFeature.h"

class WeakClassifier
{
    private:
        IFeature& feature;
        double threshold;
        double passWeight;
        double failWeight;

    public:
        IFeature& getFeature() const;
        double getThreshold() const;
        double getPassWeight() const;
        double getFailWeight() const;
        std::string toString() const;

    private:
        WeakClassifier();
        WeakClassifier(const WeakClassifier&);
        WeakClassifier& operator=(const WeakClassifier&);

    public:
        WeakClassifier(IFeature& feature, double threshold, double passWeight, double failWeight);
        ~WeakClassifier();
};

#endif /* __WEAKCLASSIFIER_H__ */
