#include <Geode/Geode.hpp>
#include <Geode/modify/CCDirector.hpp>
#include <algorithm>

using namespace geode::prelude;

// Experimental only: requests the selected animation interval.
// This does not guarantee that Android renders above the display refresh rate.
class $modify(FPSUnlockerDirector, cocos2d::CCDirector) {
    void setAnimationInterval(double interval) {
        auto target = Mod::get()->getSettingValue<int64_t>("target-fps");
        target = std::clamp<int64_t>(target, 60, 360);
        auto requestedInterval = 1.0 / static_cast<double>(target);
        cocos2d::CCDirector::setAnimationInterval(requestedInterval);
    }
};
