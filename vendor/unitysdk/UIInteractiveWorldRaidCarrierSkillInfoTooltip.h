#pragma once
#include "unitysdk.h"

class ArrowDirection;
class UITexture;
class UILabel;
class AdditionalSkillTooltipIconGrid;
class InteractiveWorldRaidCarrierSkillInfoTooltipInfo;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define UIINTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIP_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x2613A50)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIP_COMPUTEPOSITION_OFFSET UNITYSDK_OFFSET(0x2613C30)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2614300)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIP__COMPUTEPOSITION_G__CHECKONDIRECTION|14_0_OFFSET UNITYSDK_OFFSET(0x2614170)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIP__SETDATAINTERNAL_B__13_0_OFFSET UNITYSDK_OFFSET(0x2614350)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIP_AWAKE_OFFSET UNITYSDK_OFFSET(0x26143C0)

	inline static constexpr unsigned int UIInteractiveWorldRaidCarrierSkillInfoTooltip_TypeDefinitionIndex = 6510;

	class UIInteractiveWorldRaidCarrierSkillInfoTooltip : public ::UnityEngine::InputSystem::LowLevel::AccelerometerState
	{
	public:
		ArrowDirection* prioritizeArrowDirection; // 0x48
		UITexture* skillIcon; // 0x50
		UILabel* levelLabel; // 0x58
		UILabel* skillNameLabel; // 0x60
		UILabel* typeLabel; // 0x68
		UILabel* descLabel; // 0x70
		Il2CppObject* colorReplacePairs; // 0x78
		AdditionalSkillTooltipIconGrid* additionalTooltipIconGrid; // 0x80
		Il2CppObject* _colorStringDic; // 0x88
		::System::Text::RegularExpressions::Regex* _colorRegex; // 0x90

		::System::Void SetDataInternal(InteractiveWorldRaidCarrierSkillInfoTooltipInfo* arg)
		{
			((::System::Void(*)(InteractiveWorldRaidCarrierSkillInfoTooltipInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIP_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void ComputePosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIP_COMPUTEPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ComputePosition_g__CheckOnDirection|14_0(ArrowDirection* arg, <>c__DisplayClass14_0&* arg2)
		{
			return ((::System::Boolean(*)(ArrowDirection*, <>c__DisplayClass14_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIP__COMPUTEPOSITION_G__CHECKONDIRECTION|14_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* _SetDataInternal_b__13_0(::System::Text::RegularExpressions::Match* arg)
		{
			return ((::System::String*(*)(::System::Text::RegularExpressions::Match*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIP__SETDATAINTERNAL_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIP_AWAKE_OFFSET))(nullptr);
		}

	};

