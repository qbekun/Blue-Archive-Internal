#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTCATEGORYEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F46F0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTCATEGORYEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x13F47B0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTCATEGORYEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F4880)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTCATEGORYEXECUTION_GET_TARGETCATEGORIES_OFFSET UNITYSDK_OFFSET(0x13F4B10)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTCATEGORYEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F4B20)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityAddLogicEffectCategoryExecution_TypeDefinitionIndex = 14614;

	class BattleEntityAddLogicEffectCategoryExecution : public Il2CppObject
	{
	public:
		Il2CppObject* _targetCategories_k__BackingField; // 0x50

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTCATEGORYEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTCATEGORYEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTCATEGORYEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_targetCategories()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTCATEGORYEXECUTION_GET_TARGETCATEGORIES_OFFSET))(nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTCATEGORYEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

	};
}

