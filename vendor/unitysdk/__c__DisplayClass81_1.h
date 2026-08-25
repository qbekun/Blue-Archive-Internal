#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }
class <>c__DisplayClass81_0;
class UIPopup_RaidEnterCheck;
class UIPopup_WorldRaidEnterCheck;

#define <>C__DISPLAYCLASS81_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x2621F30)
#define <>C__DISPLAYCLASS81_1__WORLDBOSSENTERFORMATION_B__3_OFFSET UNITYSDK_OFFSET(0x2621F40)
#define <>C__DISPLAYCLASS81_1__WORLDBOSSENTERFORMATION_B__5_OFFSET UNITYSDK_OFFSET(0x2622000)
#define <>C__DISPLAYCLASS81_1__WORLDBOSSENTERFORMATION_B__4_OFFSET UNITYSDK_OFFSET(0x26220E0)
#define <>C__DISPLAYCLASS81_1__WORLDBOSSENTERFORMATION_B__6_OFFSET UNITYSDK_OFFSET(0x26221A0)

	inline static constexpr unsigned int <>c__DisplayClass81_1_TypeDefinitionIndex = 6531;

	class <>c__DisplayClass81_1 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* localBossDb; // 0x10
		Il2CppObject* clanAssistUseInfos; // 0x18
		<>c__DisplayClass81_0* CS$__8__locals1; // 0x20
		::System::Action* __9__5; // 0x28
		::System::Action* __9__6; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS81_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _WorldBossEnterFormation_b__3(UIPopup_RaidEnterCheck* arg)
		{
			((::System::Void(*)(UIPopup_RaidEnterCheck*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS81_1__WORLDBOSSENTERFORMATION_B__3_OFFSET))(arg, nullptr);
		}

		::System::Void _WorldBossEnterFormation_b__5()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS81_1__WORLDBOSSENTERFORMATION_B__5_OFFSET))(nullptr);
		}

		::System::Void _WorldBossEnterFormation_b__4(UIPopup_WorldRaidEnterCheck* arg)
		{
			((::System::Void(*)(UIPopup_WorldRaidEnterCheck*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS81_1__WORLDBOSSENTERFORMATION_B__4_OFFSET))(arg, nullptr);
		}

		::System::Void _WorldBossEnterFormation_b__6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS81_1__WORLDBOSSENTERFORMATION_B__6_OFFSET))(nullptr);
		}

	};

