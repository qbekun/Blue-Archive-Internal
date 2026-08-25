#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetFindRule; }
namespace MX::Logic::Skills::Manual { class EventSkill; }

#define MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_GET_GROUPBUFFS_OFFSET UNITYSDK_OFFSET(0x11D8470)
#define MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_APPLYEVENTBUFF_OFFSET UNITYSDK_OFFSET(0x11D8480)
#define MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_APPLYGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x11D8DA0)
#define MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_GET_HEXABUFFS_OFFSET UNITYSDK_OFFSET(0x11D9390)
#define MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_INITGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x11D93A0)
#define MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_APPLYHEXABUFF_OFFSET UNITYSDK_OFFSET(0x11D9640)
#define MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_INITEVENTBUFF_OFFSET UNITYSDK_OFFSET(0x11D9C30)
#define MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_APPLYEVENTSKILL_OFFSET UNITYSDK_OFFSET(0x11D8900)
#define MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_INITHEXABUFF_OFFSET UNITYSDK_OFFSET(0x11D9F40)
#define MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_GET_EVENTBUFFS_OFFSET UNITYSDK_OFFSET(0x11DA1E0)
#define MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA1F0)
#define MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_GET_EXECUTER_OFFSET UNITYSDK_OFFSET(0x11DA310)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ManualSkillProcessor_TypeDefinitionIndex = 13378;

	class ManualSkillProcessor : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* _Executer_k__BackingField; // 0x10
		Il2CppObject* _groupBuffs_k__BackingField; // 0x18
		Il2CppObject* _hexaBuffs_k__BackingField; // 0x20
		Il2CppObject* _eventBuffs_k__BackingField; // 0x28

		Il2CppObject* get_groupBuffs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_GET_GROUPBUFFS_OFFSET))(nullptr);
		}

		::System::Void ApplyEventBuff(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_APPLYEVENTBUFF_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyGroupBuff(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_APPLYGROUPBUFF_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_hexaBuffs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_GET_HEXABUFFS_OFFSET))(nullptr);
		}

		::System::Void InitGroupBuff(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_INITGROUPBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyHexaBuff(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_APPLYHEXABUFF_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitEventBuff(::MX::Logic::Skills::SkillSpecification* arg, ::MX::Logic::Skills::TargetFindRule* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::TargetFindRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_INITEVENTBUFF_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyEventSkill(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Manual::EventSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Manual::EventSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_APPLYEVENTSKILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitHexaBuff(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_INITHEXABUFF_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_eventBuffs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_GET_EVENTBUFFS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Executer()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MANUALSKILLPROCESSOR_GET_EXECUTER_OFFSET))(nullptr);
		}

	};
}

