#pragma once
#include "../../../unitysdk.h"

class GroundNode;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::BattleEntities { class ObstaclePoint; }

#define MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_GET_POSITIONVISUAL_OFFSET UNITYSDK_OFFSET(0x1172550)
#define MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1172580)
#define MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1172770)
#define MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11726A0)
#define MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1171000)
#define MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11727F0)
#define MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x116E740)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ObstaclePoint_TypeDefinitionIndex = 13207;

	class ObstaclePoint : public Il2CppObject
	{
	public:
		GroundNode* GroundNode; // 0x10
		::UnityEngine::Vector2* Position2D; // 0x18
		::System::Single PositionHeight; // 0x20

		::UnityEngine::Vector3* get_PositionVisual()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_GET_POSITIONVISUAL_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Logic::BattleEntities::ObstaclePoint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::ObstaclePoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::BattleEntities::ObstaclePoint* arg, ::MX::Logic::BattleEntities::ObstaclePoint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::ObstaclePoint*, ::MX::Logic::BattleEntities::ObstaclePoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::BattleEntities::ObstaclePoint* arg, ::MX::Logic::BattleEntities::ObstaclePoint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::ObstaclePoint*, ::MX::Logic::BattleEntities::ObstaclePoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBSTACLEPOINT_.CTOR_OFFSET))(nullptr);
		}

	};
}

