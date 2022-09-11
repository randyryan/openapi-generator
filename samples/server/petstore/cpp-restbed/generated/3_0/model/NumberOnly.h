/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * NumberOnly.h
 *
 * 
 */

#ifndef NumberOnly_H_
#define NumberOnly_H_



#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>
#include "helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  NumberOnly 
{
public:
    NumberOnly() = default;
    explicit NumberOnly(boost::property_tree::ptree const& pt);
    virtual ~NumberOnly() = default;

    NumberOnly(const NumberOnly& other) = default; // copy constructor
    NumberOnly(NumberOnly&& other) noexcept = default; // move constructor

    NumberOnly& operator=(const NumberOnly& other) = default; // copy assignment
    NumberOnly& operator=(NumberOnly&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// NumberOnly members

    /// <summary>
    /// 
    /// </summary>
    double getJustNumber() const;
    void setJustNumber(double value);

protected:
    double m_JustNumber = 0.0;
};

std::vector<NumberOnly> createNumberOnlyVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<NumberOnly>(const NumberOnly& val) {
    return val.toPropertyTree();
}

template<>
inline NumberOnly fromPt<NumberOnly>(const boost::property_tree::ptree& pt) {
    NumberOnly ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* NumberOnly_H_ */
