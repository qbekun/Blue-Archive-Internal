#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }

#define MX_LOGIC_BATTLEENTITIES_FIXEDPOSITIONSKILLACTOR_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1149E40)
#define MX_LOGIC_BATTLEENTITIES_FIXEDPOSITIONSKILLACTOR_GET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x1149E50)
#define MX_LOGIC_BATTLEENTITIES_FIXEDPOSITIONSKILLACTOR_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1149E60)
#define MX_LOGIC_BATTLEENTITIES_FIXEDPOSITIONSKILLACTOR__.CTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1149E70)
#define MX_LOGIC_BATTLEENTITIES_FIXEDPOSITIONSKILLACTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1149EA0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int FixedPositionSkillActor_TypeDefinitionIndex = 13120;

	class FixedPositionSkillActor : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* position; // 0x1A8
		::UnityEngine::Vector2* direction; // 0x1B0

		::System::Void set_Direction(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FIXEDPOSITIONSKILLACTOR_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Position2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FIXEDPOSITIONSKILLACTOR_GET_POSITION2D_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Direction()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FIXEDPOSITIONSKILLACTOR_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__7_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FIXEDPOSITIONSKILLACTOR__.CTOR_B__7_0_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Battles::GroupTag* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Battles::GroupTag*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FIXEDPOSITIONSKILLACTOR_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

	};
}

