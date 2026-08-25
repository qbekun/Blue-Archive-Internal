#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class Entity; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTHITSPECIFICATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x140D480)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTHITSPECIFICATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x141BC80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTHITSPECIFICATION_CLONE_OFFSET UNITYSDK_OFFSET(0x1411FC0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int LogicEffectHitSpecification_TypeDefinitionIndex = 14767;

	class LogicEffectHitSpecification : public Il2CppObject
	{
	public:
		::System::String* SkillEntityName; // 0x10
		::MX::Logic::Data::LogicEffectValue* LogicEffectValue; // 0x18
		::MX::Logic::BattleEntities::BattleEntity* Invoker; // 0x20
		::MX::Logic::BattleEntities::BattleEntity* Target; // 0x28
		::MX::Logic::BattleEntities::BattleEntity* OriginalTarget; // 0x30
		::UnityEngine::Vector2* HitPosition; // 0x38
		::UnityEngine::Vector2* BulletPosition; // 0x40
		::UnityEngine::Vector2* BulletDirection; // 0x48
		::MX::Logic::BattleEntities::Entity* BulletEntity; // 0x50
		::System::Int32 ExtraCostUsed; // 0x58

		::System::Void .ctor(::MX::Logic::Data::LogicEffectValue* arg, ::System::String* str, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6, ::MX::Logic::BattleEntities::Entity* arg7, ::System::Int32 arg8)
		{
			((::System::Void(*)(::MX::Logic::Data::LogicEffectValue*, ::System::String*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::Entity*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTHITSPECIFICATION_.CTOR_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::LogicEffectValue* arg, ::System::String* str, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6, ::UnityEngine::Vector2* arg7, ::MX::Logic::BattleEntities::Entity* arg8, ::System::Int32 arg9)
		{
			((::System::Void(*)(::MX::Logic::Data::LogicEffectValue*, ::System::String*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::Entity*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTHITSPECIFICATION_.CTOR_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* Clone()
		{
			return ((::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTHITSPECIFICATION_CLONE_OFFSET))(nullptr);
		}

	};
}

