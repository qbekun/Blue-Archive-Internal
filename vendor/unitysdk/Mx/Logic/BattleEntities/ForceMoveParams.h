#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class ForceMoveParams; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Math { class TransitionType; }

#define MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1173D80)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1173D90)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_GET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x1173DA0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1173DB0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1173DC0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1173FF0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11740A0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11741C0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1173F20)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1174230)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ForceMoveParams_TypeDefinitionIndex = 13218;

	class ForceMoveParams : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::ForceMoveParams* Empty; // 0x0
		::UnityEngine::Vector2* _Direction_k__BackingField; // 0x10
		::System::Single _Distance_k__BackingField; // 0x18
		::MX::Core::Math::TransitionType* _Transition_k__BackingField; // 0x1C

		::UnityEngine::Vector2* get_Direction()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_GET_DISTANCE_OFFSET))(nullptr);
		}

		::MX::Core::Math::TransitionType* get_Transition()
		{
			return ((::MX::Core::Math::TransitionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_GET_TRANSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::System::Single arg2, ::MX::Core::Math::TransitionType* arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::MX::Core::Math::TransitionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::BattleEntities::ForceMoveParams* arg, ::MX::Logic::BattleEntities::ForceMoveParams* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::ForceMoveParams*, ::MX::Logic::BattleEntities::ForceMoveParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::BattleEntities::ForceMoveParams* arg, ::MX::Logic::BattleEntities::ForceMoveParams* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::ForceMoveParams*, ::MX::Logic::BattleEntities::ForceMoveParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::BattleEntities::ForceMoveParams* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::ForceMoveParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVEPARAMS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

