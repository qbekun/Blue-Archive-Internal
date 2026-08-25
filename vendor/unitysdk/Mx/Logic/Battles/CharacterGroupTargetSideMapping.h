#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_GET_GROUPTAGFORPLAYERSIDEINOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1398480)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_SET_GROUPTAGFORPLAYERSIDEINOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1398490)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0x13984A0)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_SETGROUPFORPLAYERSIDEINOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1398550)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ADDALLYGROUP_OFFSET UNITYSDK_OFFSET(0x1398560)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ADDENEMYGROUP_OFFSET UNITYSDK_OFFSET(0x1398630)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_GETTARGETSIDE_OFFSET UNITYSDK_OFFSET(0x1398700)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_GETTARGETSIDE_OFFSET UNITYSDK_OFFSET(0x13987F0)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ISTARGETENEMY_OFFSET UNITYSDK_OFFSET(0x1398850)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ISTARGETENEMY_OFFSET UNITYSDK_OFFSET(0x13988C0)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ISTARGETALLY_OFFSET UNITYSDK_OFFSET(0x1398960)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ISTARGETALLY_OFFSET UNITYSDK_OFFSET(0x13989D0)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ISTARGETNEUTRAL_OFFSET UNITYSDK_OFFSET(0x1398A70)
#define MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ISTARGETNEUTRAL_OFFSET UNITYSDK_OFFSET(0x1398B10)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CharacterGroupTargetSideMapping_TypeDefinitionIndex = 14433;

	class CharacterGroupTargetSideMapping : public Il2CppObject
	{
	public:
		Il2CppObject* allyTable; // 0x10
		Il2CppObject* enemyTable; // 0x18
		::MX::Logic::Battles::GroupTag* _GroupTagForPlayerSideInObstacle_k__BackingField; // 0x20

		::MX::Logic::Battles::GroupTag* get_GroupTagForPlayerSideInObstacle()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_GET_GROUPTAGFORPLAYERSIDEINOBSTACLE_OFFSET))(nullptr);
		}

		::System::Void set_GroupTagForPlayerSideInObstacle(::MX::Logic::Battles::GroupTag* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_SET_GROUPTAGFORPLAYERSIDEINOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetGroupForPlayerSideInObstacle(::MX::Logic::Battles::GroupTag* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_SETGROUPFORPLAYERSIDEINOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddAllyGroup(::MX::Logic::Battles::GroupTag* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ADDALLYGROUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEnemyGroup(::MX::Logic::Battles::GroupTag* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ADDENEMYGROUP_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::TargetSideId* GetTargetSide(::MX::Logic::Battles::GroupTag* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::MX::Logic::Battles::GroupTag*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_GETTARGETSIDE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::TargetSideId* GetTargetSide(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2)
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_GETTARGETSIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsTargetEnemy(::MX::Logic::Battles::GroupTag* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::GroupTag*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ISTARGETENEMY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsTargetEnemy(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ISTARGETENEMY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsTargetAlly(::MX::Logic::Battles::GroupTag* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::GroupTag*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ISTARGETALLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsTargetAlly(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ISTARGETALLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsTargetNeutral(::MX::Logic::Battles::GroupTag* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::GroupTag*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ISTARGETNEUTRAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsTargetNeutral(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUPTARGETSIDEMAPPING_ISTARGETNEUTRAL_OFFSET))(arg, arg2, nullptr);
		}

	};
}

