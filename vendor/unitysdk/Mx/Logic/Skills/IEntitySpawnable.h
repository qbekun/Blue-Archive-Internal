#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GETINITIALTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GETPROCEDURETRIGGEREDTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GET_EXTRACOSTUSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GETPROCEDURETRIGGEREDPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_IENTITYSPAWNABLE_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GETSKILLCOMMANDSELECTEDTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GET_EXECUTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_IENTITYSPAWNABLE_FINDSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_IENTITYSPAWNABLE_FINDSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_IENTITYSPAWNABLE_FINDTARGET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int IEntitySpawnable_TypeDefinitionIndex = 14579;

	class IEntitySpawnable : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetInitialTargetPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GETINITIALTARGETPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetSkillCommandSelectedPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetProcedureTriggeredTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GETPROCEDURETRIGGEREDTARGET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraCostUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GET_EXTRACOSTUSED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetProcedureTriggeredPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GETPROCEDURETRIGGEREDPOSITION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_IENTITYSPAWNABLE_FINDTARGETS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetSkillCommandSelectedTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GETSKILLCOMMANDSELECTEDTARGET_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Executer()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_IENTITYSPAWNABLE_GET_EXECUTER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* FindSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_IENTITYSPAWNABLE_FINDSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_IENTITYSPAWNABLE_FINDSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_IENTITYSPAWNABLE_FINDTARGET_OFFSET))(arg, nullptr);
		}

	};
}

