#pragma once
#include "unitysdk.h"

namespace FlatData { class GroundNodeType; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
class GroundNode;
namespace MX::Logic::BattleEntities { class GroundPoint; }

#define GROUNDNODE_GET_POSITIONHEIGHTWITHTEMPORARYCHANGE_OFFSET UNITYSDK_OFFSET(0x215CE00)
#define GROUNDNODE_GET_POSITIONVISUAL_OFFSET UNITYSDK_OFFSET(0x215CE10)
#define GROUNDNODE_GET_CANNOTSTANDBYNEAROBSTACLES_OFFSET UNITYSDK_OFFSET(0x215CE40)
#define GROUNDNODE_SET_CANNOTSTANDBYNEAROBSTACLES_OFFSET UNITYSDK_OFFSET(0x215CE50)
#define GROUNDNODE_GET_CANSTANDBYNEAROBSTACLES_OFFSET UNITYSDK_OFFSET(0x215CE60)
#define GROUNDNODE_SET_CANSTANDBYNEAROBSTACLES_OFFSET UNITYSDK_OFFSET(0x215CE70)
#define GROUNDNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x215C6F0)
#define GROUNDNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x215CE80)
#define GROUNDNODE_DISTANCESQR_OFFSET UNITYSDK_OFFSET(0x215CF00)
#define GROUNDNODE_DISTANCESQR_OFFSET UNITYSDK_OFFSET(0x215CF40)
#define GROUNDNODE_DISTANCESQR_OFFSET UNITYSDK_OFFSET(0x215CF70)
#define GROUNDNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x2155970)
#define GROUNDNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x2156B90)
#define GROUNDNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x215CF90)
#define GROUNDNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x215CFB0)
#define GROUNDNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x215D030)

	inline static constexpr unsigned int GroundNode_TypeDefinitionIndex = 3985;

	class GroundNode : public Il2CppObject
	{
	public:
		::System::Int32 X; // 0x10
		::System::Int32 Y; // 0x14
		::FlatData::GroundNodeType* OriginalNodeType; // 0x18
		::FlatData::GroundNodeType* NodeType; // 0x1C
		::UnityEngine::Vector2* Position2D; // 0x20
		::System::Single PositionHeight; // 0x28
		::System::Boolean CanNotUseSkill; // 0x2C
		::System::SByte Layer; // 0x2D
		::System::SByte OriginalLayer; // 0x2E
		::System::Single temporaryHeight; // 0x30
		::System::Int32 hash; // 0x34
		::System::Boolean TSSBlocked; // 0x38
		Il2CppObject* _CanNotStandByNearObstacles_k__BackingField; // 0x40
		Il2CppObject* _CanStandByNearObstacles_k__BackingField; // 0x48

		::System::Single get_PositionHeightWithTemporaryChange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_GET_POSITIONHEIGHTWITHTEMPORARYCHANGE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_PositionVisual()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_GET_POSITIONVISUAL_OFFSET))(nullptr);
		}

		Il2CppObject* get_CanNotStandByNearObstacles()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_GET_CANNOTSTANDBYNEAROBSTACLES_OFFSET))(nullptr);
		}

		::System::Void set_CanNotStandByNearObstacles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_SET_CANNOTSTANDBYNEAROBSTACLES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CanStandByNearObstacles()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_GET_CANSTANDBYNEAROBSTACLES_OFFSET))(nullptr);
		}

		::System::Void set_CanStandByNearObstacles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_SET_CANSTANDBYNEAROBSTACLES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::UnityEngine::Vector3* arg3, ::FlatData::GroundNodeType* arg4, ::System::Boolean arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector3*, ::FlatData::GroundNodeType*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Single DistanceSqr(GroundNode* arg, GroundNode* arg2)
		{
			return ((::System::Single(*)(GroundNode*, GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_DISTANCESQR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single DistanceSqr(GroundNode* arg, ::MX::Logic::BattleEntities::GroundPoint* arg2)
		{
			return ((::System::Single(*)(GroundNode*, ::MX::Logic::BattleEntities::GroundPoint*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_DISTANCESQR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single DistanceSqr(GroundNode* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Single(*)(GroundNode*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_DISTANCESQR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Equality(GroundNode* arg, GroundNode* arg2)
		{
			return ((::System::Boolean(*)(GroundNode*, GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(GroundNode* arg, GroundNode* arg2)
		{
			return ((::System::Boolean(*)(GroundNode*, GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(GroundNode* arg)
		{
			return ((::System::Boolean(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODE_GETHASHCODE_OFFSET))(nullptr);
		}

	};

