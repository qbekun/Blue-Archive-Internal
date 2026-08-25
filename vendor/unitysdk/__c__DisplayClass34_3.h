#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }
class <>c__DisplayClass34_2;
class UIPopup_RaidEnterCheck;
class UIPopup_WorldRaidEnterCheck;

#define <>C__DISPLAYCLASS34_3_.CTOR_OFFSET UNITYSDK_OFFSET(0xBEA5B0)
#define <>C__DISPLAYCLASS34_3__ENTERFORMATION_B__6_OFFSET UNITYSDK_OFFSET(0xBEA5C0)
#define <>C__DISPLAYCLASS34_3__ENTERFORMATION_B__8_OFFSET UNITYSDK_OFFSET(0xBEA690)
#define <>C__DISPLAYCLASS34_3__ENTERFORMATION_B__7_OFFSET UNITYSDK_OFFSET(0xBEA770)
#define <>C__DISPLAYCLASS34_3__ENTERFORMATION_B__9_OFFSET UNITYSDK_OFFSET(0xBEA840)

	inline static constexpr unsigned int <>c__DisplayClass34_3_TypeDefinitionIndex = 8724;

	class <>c__DisplayClass34_3 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* localBossDb; // 0x10
		::System::Int32 echelonNumber; // 0x18
		Il2CppObject* clanAssistUseInfos; // 0x20
		<>c__DisplayClass34_2* CS$__8__locals3; // 0x28
		::System::Action* __9__8; // 0x30
		::System::Action* __9__9; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS34_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _EnterFormation_b__6(UIPopup_RaidEnterCheck* arg)
		{
			((::System::Void(*)(UIPopup_RaidEnterCheck*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS34_3__ENTERFORMATION_B__6_OFFSET))(arg, nullptr);
		}

		::System::Void _EnterFormation_b__8()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS34_3__ENTERFORMATION_B__8_OFFSET))(nullptr);
		}

		::System::Void _EnterFormation_b__7(UIPopup_WorldRaidEnterCheck* arg)
		{
			((::System::Void(*)(UIPopup_WorldRaidEnterCheck*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS34_3__ENTERFORMATION_B__7_OFFSET))(arg, nullptr);
		}

		::System::Void _EnterFormation_b__9()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS34_3__ENTERFORMATION_B__9_OFFSET))(nullptr);
		}

	};

