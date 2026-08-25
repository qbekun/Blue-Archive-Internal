#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class StackDamageEffect; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class StackDamageProcessor; }
namespace MX::Logic::Battles { class DotEventArgs; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class Entity; }

#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_GET_CURRENTSTACKCOUNT_OFFSET UNITYSDK_OFFSET(0x11728D0)
#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_SET_CURRENTSTACKCOUNT_OFFSET UNITYSDK_OFFSET(0x11728E0)
#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x11728F0)
#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1172900)
#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1172910)
#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_BATTLE_DOTABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0x1172AD0)
#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x1172C90)
#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_GET_DOTABILITY_OFFSET UNITYSDK_OFFSET(0x1173080)
#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_ACTIVATESTACKDAMAGE_OFFSET UNITYSDK_OFFSET(0x1172E00)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int StackDamageInfo_TypeDefinitionIndex = 13209;

	class StackDamageInfo : public Il2CppObject
	{
	public:
		::System::Int32 _Channel_k__BackingField; // 0x10
		::System::String* _GroupId_k__BackingField; // 0x18
		::System::Int32 _CurrentStackCount_k__BackingField; // 0x20
		Il2CppObject* _DotAbility_k__BackingField; // 0x28
		::MX::Logic::Skills::LogicEffects::StackDamageEffect* stackDamageEffect; // 0x30
		::MX::Logic::BattleEntities::BattleEntity* invoker; // 0x38
		::MX::Logic::BattleEntities::BattleEntity* owner; // 0x40
		::MX::Logic::Battles::Battle* battle; // 0x48
		::MX::Logic::BattleEntities::StackDamageProcessor* stackDamageProcessor; // 0x50

		::System::Int32 get_CurrentStackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_GET_CURRENTSTACKCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CurrentStackCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_SET_CURRENTSTACKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::String* get_GroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::StackDamageProcessor* arg, ::MX::Logic::Battles::Battle* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4, Il2CppObject* arg5, ::MX::Logic::Skills::LogicEffects::StackDamageEffect* arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StackDamageProcessor*, ::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::StackDamageEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void Battle_DotAbilityRemoved(::System::Object* arg, ::MX::Logic::Battles::DotEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DotEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_BATTLE_DOTABILITYREMOVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_DotAbility()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_GET_DOTABILITY_OFFSET))(nullptr);
		}

		::System::Void ActivateStackDamage(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::MX::Logic::BattleEntities::Entity* arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEINFO_ACTIVATESTACKDAMAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

