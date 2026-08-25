#pragma once
#include "unitysdk.h"

class CCGHealthEffectIndicatorElement;

#define CCGHEALTHEFFECTINDICATOR_ONPLAYDAMAGEEFFECT_OFFSET UNITYSDK_OFFSET(0x26E62A0)
#define CCGHEALTHEFFECTINDICATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E64E0)
#define CCGHEALTHEFFECTINDICATOR_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x26E64F0)
#define CCGHEALTHEFFECTINDICATOR_ONPLAYHEALEFFECT_OFFSET UNITYSDK_OFFSET(0x26E6570)

	inline static constexpr unsigned int CCGHealthEffectIndicator_TypeDefinitionIndex = 395;

	class CCGHealthEffectIndicator : public Il2CppObject
	{
	public:
		CCGHealthEffectIndicatorElement* heal; // 0x18
		CCGHealthEffectIndicatorElement* damage; // 0x20

		::System::Void OnPlayDamageEffect(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGHEALTHEFFECTINDICATOR_ONPLAYDAMAGEEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHEALTHEFFECTINDICATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHEALTHEFFECTINDICATOR_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void OnPlayHealEffect(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGHEALTHEFFECTINDICATOR_ONPLAYHEALEFFECT_OFFSET))(arg, arg2, nullptr);
		}

	};

