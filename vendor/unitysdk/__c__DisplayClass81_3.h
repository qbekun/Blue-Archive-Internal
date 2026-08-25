#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }
class <>c__DisplayClass81_2;
class UIPopup_RaidEnterCheck;
class UIPopup_WorldRaidEnterCheck;

#define <>C__DISPLAYCLASS81_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x26228F0)
#define <>C__DISPLAYCLASS81_3__WORLDBOSSENTERFORMATION_B__8_OFFSET UNITYSDK_OFFSET(0x2622900)
#define <>C__DISPLAYCLASS81_3__WORLDBOSSENTERFORMATION_B__10_OFFSET UNITYSDK_OFFSET(0x26229D0)
#define <>C__DISPLAYCLASS81_3__WORLDBOSSENTERFORMATION_B__9_OFFSET UNITYSDK_OFFSET(0x2622AC0)
#define <>C__DISPLAYCLASS81_3__WORLDBOSSENTERFORMATION_B__11_OFFSET UNITYSDK_OFFSET(0x2622B90)

	inline static constexpr unsigned int <>c__DisplayClass81_3_TypeDefinitionIndex = 6533;

	class <>c__DisplayClass81_3 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* localBossDb; // 0x10
		::System::Int32 echelonNumber; // 0x18
		Il2CppObject* clanAssistUseInfos; // 0x20
		<>c__DisplayClass81_2* CS$__8__locals3; // 0x28
		::System::Action* __9__10; // 0x30
		::System::Action* __9__11; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS81_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _WorldBossEnterFormation_b__8(UIPopup_RaidEnterCheck* arg)
		{
			((::System::Void(*)(UIPopup_RaidEnterCheck*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS81_3__WORLDBOSSENTERFORMATION_B__8_OFFSET))(arg, nullptr);
		}

		::System::Void _WorldBossEnterFormation_b__10()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS81_3__WORLDBOSSENTERFORMATION_B__10_OFFSET))(nullptr);
		}

		::System::Void _WorldBossEnterFormation_b__9(UIPopup_WorldRaidEnterCheck* arg)
		{
			((::System::Void(*)(UIPopup_WorldRaidEnterCheck*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS81_3__WORLDBOSSENTERFORMATION_B__9_OFFSET))(arg, nullptr);
		}

		::System::Void _WorldBossEnterFormation_b__11()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS81_3__WORLDBOSSENTERFORMATION_B__11_OFFSET))(nullptr);
		}

	};

