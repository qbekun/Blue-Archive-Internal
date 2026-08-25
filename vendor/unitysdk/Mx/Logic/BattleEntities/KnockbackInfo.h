#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Skills::LogicEffects { class KnockbackEffect; }
namespace UnityEngine { class Vector2; }

#define MX_LOGIC_BATTLEENTITIES_KNOCKBACKINFO_COKNOCKBACKMOVE_OFFSET UNITYSDK_OFFSET(0x113AD80)
#define MX_LOGIC_BATTLEENTITIES_KNOCKBACKINFO_GET_KNOCKBACKEFFECT_OFFSET UNITYSDK_OFFSET(0x113AE10)
#define MX_LOGIC_BATTLEENTITIES_KNOCKBACKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x113AE20)
#define MX_LOGIC_BATTLEENTITIES_KNOCKBACKINFO_PROCESSMOVE_OFFSET UNITYSDK_OFFSET(0x113AF90)
#define MX_LOGIC_BATTLEENTITIES_KNOCKBACKINFO_STOPKNOCKBACKMOVE_OFFSET UNITYSDK_OFFSET(0x113B730)
#define MX_LOGIC_BATTLEENTITIES_KNOCKBACKINFO_GETMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x113B4B0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int KnockbackInfo_TypeDefinitionIndex = 13097;

	class KnockbackInfo : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* owner; // 0x10
		::MX::Logic::Skills::LogicEffects::KnockbackEffect* _KnockbackEffect_k__BackingField; // 0x18
		::System::Collections::IEnumerator* knockbackExecuter; // 0x20
		::System::Single speed; // 0x28
		::System::Int32 durationTick; // 0x2C

		::System::Collections::IEnumerator* CoKnockbackMove()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_KNOCKBACKINFO_COKNOCKBACKMOVE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::KnockbackEffect* get_KnockbackEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::KnockbackEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_KNOCKBACKINFO_GET_KNOCKBACKEFFECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::Skills::LogicEffects::KnockbackEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::Skills::LogicEffects::KnockbackEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_KNOCKBACKINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ProcessMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_KNOCKBACKINFO_PROCESSMOVE_OFFSET))(nullptr);
		}

		::System::Void StopKnockbackMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_KNOCKBACKINFO_STOPKNOCKBACKMOVE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetMoveVector()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_KNOCKBACKINFO_GETMOVEVECTOR_OFFSET))(nullptr);
		}

	};
}

