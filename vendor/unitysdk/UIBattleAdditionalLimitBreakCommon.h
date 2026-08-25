#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationClip; }
class UISlider;
class UILabel;
class UITexture;
class EnableGroup;

#define UIBATTLEADDITIONALLIMITBREAKCOMMON_ONLIMITGAUGECHANGED_OFFSET UNITYSDK_OFFSET(0x25FA7A0)
#define UIBATTLEADDITIONALLIMITBREAKCOMMON_.CTOR_OFFSET UNITYSDK_OFFSET(0x25FA9B0)

	inline static constexpr unsigned int UIBattleAdditionalLimitBreakCommon_TypeDefinitionIndex = 6449;

	class UIBattleAdditionalLimitBreakCommon : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationClip* animSuccess; // 0x48
		UISlider* progressSlider; // 0x50
		UILabel* progressPercentText; // 0x58
		UITexture* portrait1; // 0x60
		UILabel* name1; // 0x68
		UILabel* description1; // 0x70
		EnableGroup* enableOn100Percent; // 0x78

		::System::Void OnLimitGaugeChanged(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAKCOMMON_ONLIMITGAUGECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAKCOMMON_.CTOR_OFFSET))(nullptr);
		}

	};

