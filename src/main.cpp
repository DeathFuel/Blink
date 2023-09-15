#include <Geode/Geode.hpp>
#include <Geode/modify/CCTransitionFade.hpp>

using namespace geode::prelude;

class $modify(CCTransitionFade) {
    // static cocos2d::CCTransitionFade* create(float, cocos2d::CCScene*)
    // https://docs.cocos2d-x.org/api-ref/js/v3x/symbols/cc.TransitionFade.html
	static CCTransitionFade* create(float time, CCScene* scene) {
        double timescale = Mod::get()->getSettingValue<double>("timescale");
        ccColor3B color = Mod::get()->getSettingValue<ccColor3B>("color");
		return CCTransitionFade::create(time * timescale, scene, color);
	} 
};
