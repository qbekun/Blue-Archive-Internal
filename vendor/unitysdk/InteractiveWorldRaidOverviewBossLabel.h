#pragma once
#include "unitysdk.h"

class UITexture;
class UISlider;
class UILabel;
namespace UnityEngine { class Color; }
namespace UnityEngine { class GameObject; }
class BossAppearState;

#define INTERACTIVEWORLDRAIDOVERVIEWBOSSLABEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2606F90)
#define INTERACTIVEWORLDRAIDOVERVIEWBOSSLABEL_SETUIVALUES_OFFSET UNITYSDK_OFFSET(0x2606FA0)
#define INTERACTIVEWORLDRAIDOVERVIEWBOSSLABEL_SETALLCLEAR_OFFSET UNITYSDK_OFFSET(0x2607520)
#define INTERACTIVEWORLDRAIDOVERVIEWBOSSLABEL_UPDATEPERCENTAGELABEL_OFFSET UNITYSDK_OFFSET(0x26072B0)
#define INTERACTIVEWORLDRAIDOVERVIEWBOSSLABEL_SETSTORYLABEL_OFFSET UNITYSDK_OFFSET(0x26075D0)

	inline static constexpr unsigned int InteractiveWorldRaidOverviewBossLabel_TypeDefinitionIndex = 6479;

	class InteractiveWorldRaidOverviewBossLabel : public Il2CppObject
	{
	public:
		UITexture* bossNameTexture; // 0x18
		UISlider* bossHPSlider; // 0x20
		UILabel* bossHPPercentLabel; // 0x28
		::UnityEngine::Color* leadingZeroTextColor; // 0x30
		::Il2CppArray<::System::Object*>* byConditionObjects; // 0x40
		::UnityEngine::GameObject* hpBarRoot; // 0x48
		::UnityEngine::GameObject* finalRoot; // 0x50
		::UnityEngine::GameObject* clearRoot; // 0x58
		::UnityEngine::GameObject* allClearRoot; // 0x60
		::UnityEngine::GameObject* extraRoot; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDOVERVIEWBOSSLABEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetUIValues(::System::String* str, ::System::Decimal* arg, BossAppearState* arg2, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::Decimal*, BossAppearState*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDOVERVIEWBOSSLABEL_SETUIVALUES_OFFSET))(str, arg, arg2, str2, nullptr);
		}

		::System::Void SetAllClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDOVERVIEWBOSSLABEL_SETALLCLEAR_OFFSET))(nullptr);
		}

		::System::Void UpdatePercentageLabel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDOVERVIEWBOSSLABEL_UPDATEPERCENTAGELABEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetStoryLabel(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDOVERVIEWBOSSLABEL_SETSTORYLABEL_OFFSET))(str, arg, nullptr);
		}

	};

