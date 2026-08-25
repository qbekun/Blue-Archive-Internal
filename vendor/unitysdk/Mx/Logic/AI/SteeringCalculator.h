#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Core::Math { class IPseudoRandomService; }
namespace MX::Core::Physics2D::Shapes { class LineSegment; }

#define MX_LOGIC_AI_STEERINGCALCULATOR_GET_WANDERDISTANCE_OFFSET UNITYSDK_OFFSET(0x13D36E0)
#define MX_LOGIC_AI_STEERINGCALCULATOR_GET_WANDERRADIUS_OFFSET UNITYSDK_OFFSET(0x13D36F0)
#define MX_LOGIC_AI_STEERINGCALCULATOR_WANDER_OFFSET UNITYSDK_OFFSET(0x13D3700)
#define MX_LOGIC_AI_STEERINGCALCULATOR_RESETWANDER_OFFSET UNITYSDK_OFFSET(0x13D3990)
#define MX_LOGIC_AI_STEERINGCALCULATOR_SEEK_OFFSET UNITYSDK_OFFSET(0x13D39D0)
#define MX_LOGIC_AI_STEERINGCALCULATOR_SEEK_OFFSET UNITYSDK_OFFSET(0x13D3B70)
#define MX_LOGIC_AI_STEERINGCALCULATOR_FLEE_OFFSET UNITYSDK_OFFSET(0x13D3D30)
#define MX_LOGIC_AI_STEERINGCALCULATOR_FLEE_OFFSET UNITYSDK_OFFSET(0x13D3EE0)
#define MX_LOGIC_AI_STEERINGCALCULATOR_ARRIVE_OFFSET UNITYSDK_OFFSET(0x13D40E0)
#define MX_LOGIC_AI_STEERINGCALCULATOR_PURSUIT_OFFSET UNITYSDK_OFFSET(0x13D43D0)
#define MX_LOGIC_AI_STEERINGCALCULATOR_EVADE_OFFSET UNITYSDK_OFFSET(0x13D44B0)
#define MX_LOGIC_AI_STEERINGCALCULATOR_OFFSETPURSUIT_OFFSET UNITYSDK_OFFSET(0x13D45B0)
#define MX_LOGIC_AI_STEERINGCALCULATOR_INTERPOSE_OFFSET UNITYSDK_OFFSET(0x13D4700)
#define MX_LOGIC_AI_STEERINGCALCULATOR_ENFORCENONPENETRATION_OFFSET UNITYSDK_OFFSET(0x13D4880)
#define MX_LOGIC_AI_STEERINGCALCULATOR_CALCINSIDENORMAL_OFFSET UNITYSDK_OFFSET(0x13D4F50)
#define MX_LOGIC_AI_STEERINGCALCULATOR_AVOIDWALL_OFFSET UNITYSDK_OFFSET(0x13D5160)
#define MX_LOGIC_AI_STEERINGCALCULATOR_AVOIDOBSTACLES_OFFSET UNITYSDK_OFFSET(0x13D56B0)
#define MX_LOGIC_AI_STEERINGCALCULATOR_BREAKTHROUGH_OFFSET UNITYSDK_OFFSET(0x13D6170)
#define MX_LOGIC_AI_STEERINGCALCULATOR_SEPARATION_OFFSET UNITYSDK_OFFSET(0x13D65B0)
#define MX_LOGIC_AI_STEERINGCALCULATOR_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x13D6BC0)
#define MX_LOGIC_AI_STEERINGCALCULATOR_COHESION_OFFSET UNITYSDK_OFFSET(0x13D70A0)
#define MX_LOGIC_AI_STEERINGCALCULATOR_ISNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x13D6B60)
#define MX_LOGIC_AI_STEERINGCALCULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D7520)

namespace MX::Logic::AI
{
	inline static constexpr unsigned int SteeringCalculator_TypeDefinitionIndex = 14495;

	class SteeringCalculator : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* wanderTarget; // 0x10

		::System::Single get_wanderDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_GET_WANDERDISTANCE_OFFSET))(nullptr);
		}

		::System::Single get_wanderRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_GET_WANDERRADIUS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* Wander(::MX::Core::Physics2D::Bodies::Body2D* arg, ::System::TimeSpan* arg2, ::MX::Core::Math::IPseudoRandomService* arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::System::TimeSpan*, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_WANDER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ResetWander()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_RESETWANDER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* Seek(::MX::Core::Physics2D::Bodies::Body2D* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_SEEK_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Seek(::MX::Core::Physics2D::Bodies::Body2D* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_SEEK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* Flee(::MX::Core::Physics2D::Bodies::Body2D* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_FLEE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Flee(::MX::Core::Physics2D::Bodies::Body2D* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_FLEE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* Arrive(::MX::Core::Physics2D::Bodies::Body2D* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_ARRIVE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* Pursuit(::MX::Core::Physics2D::Bodies::Body2D* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_PURSUIT_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Evade(::MX::Core::Physics2D::Bodies::Body2D* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_EVADE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* OffsetPursuit(::MX::Core::Physics2D::Bodies::Body2D* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2, ::UnityEngine::Vector2* arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::MX::Core::Physics2D::Bodies::Body2D*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_OFFSETPURSUIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* InterPose(::MX::Core::Physics2D::Bodies::Body2D* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2, ::MX::Core::Physics2D::Bodies::Body2D* arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::MX::Core::Physics2D::Bodies::Body2D*, ::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_INTERPOSE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void EnforceNonPenetration(::MX::Core::Physics2D::Bodies::Body2D* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Bodies::Body2D*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_ENFORCENONPENETRATION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* CalcInsideNormal(::MX::Core::Physics2D::Bodies::Body2D* arg, ::MX::Core::Physics2D::Shapes::LineSegment* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::MX::Core::Physics2D::Shapes::LineSegment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_CALCINSIDENORMAL_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* AvoidWall(::MX::Core::Physics2D::Bodies::Body2D* arg, Il2CppObject* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_AVOIDWALL_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* AvoidObstacles(::MX::Core::Physics2D::Bodies::Body2D* arg, Il2CppObject* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_AVOIDOBSTACLES_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Breakthrough(::MX::Core::Physics2D::Bodies::Body2D* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2, Il2CppObject* arg3, ::System::Single arg4)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::MX::Core::Physics2D::Bodies::Body2D*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_BREAKTHROUGH_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Vector2* Separation(::MX::Core::Physics2D::Bodies::Body2D* arg, Il2CppObject* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_SEPARATION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Alignment(::MX::Core::Physics2D::Bodies::Body2D* arg, Il2CppObject* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_ALIGNMENT_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Cohesion(::MX::Core::Physics2D::Bodies::Body2D* arg, Il2CppObject* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::Physics2D::Bodies::Body2D*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_COHESION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsNeighbor(::MX::Core::Physics2D::Bodies::Body2D* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2, ::System::Single arg3)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::MX::Core::Physics2D::Bodies::Body2D*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_ISNEIGHBOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_STEERINGCALCULATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

