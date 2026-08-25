#pragma once
#include "unitysdk.h"

class UITacticRankCondition;
namespace UnityEngine { class GameObject; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }

#define UITACTICCLEARRANKPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xBAED10)
#define UITACTICCLEARRANKPOPUP_SETTITLEIMAGETEXT_OFFSET UNITYSDK_OFFSET(0xBAED20)
#define UITACTICCLEARRANKPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBAED90)
#define UITACTICCLEARRANKPOPUP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xBAF360)
#define UITACTICCLEARRANKPOPUP_APPLY_OFFSET UNITYSDK_OFFSET(0xBAF210)
#define UITACTICCLEARRANKPOPUP_CHECKTACTICRANK_OFFSET UNITYSDK_OFFSET(0xBAEF10)

	inline static constexpr unsigned int UITacticClearRankPopup_TypeDefinitionIndex = 8574;

	class UITacticClearRankPopup : public Il2CppObject
	{
	public:
		UITacticRankCondition* victoryCondition; // 0xD8
		UITacticRankCondition* timeLimitCondition; // 0xE0
		UITacticRankCondition* deathCondition; // 0xE8
		::UnityEngine::GameObject* clearMark; // 0xF0
		::UnityEngine::GameObject* rankMarkS; // 0xF8
		::UnityEngine::GameObject* rankMarkA; // 0x100
		::UnityEngine::GameObject* rankMarkB; // 0x108
		::UnityEngine::GameObject* rankMarkC; // 0x110

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITACTICCLEARRANKPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetTitleImageText(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITACTICCLEARRANKPOPUP_SETTITLEIMAGETEXT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::Summary::BattleSummary* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITACTICCLEARRANKPOPUP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITACTICCLEARRANKPOPUP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void Apply(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITACTICCLEARRANKPOPUP_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void CheckTacticRank(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UITACTICCLEARRANKPOPUP_CHECKTACTICRANK_OFFSET))(arg, nullptr);
		}

	};

