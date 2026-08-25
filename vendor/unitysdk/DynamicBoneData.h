#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Vector3; }
class Axis;
class DynamicBone;

#define DYNAMICBONEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x209A050)
#define DYNAMICBONEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x209A140)

	inline static constexpr unsigned int DynamicBoneData_TypeDefinitionIndex = 3520;

	class DynamicBoneData : public Il2CppObject
	{
	public:
		::System::String* Name; // 0x10
		::System::Single UpdateRate; // 0x18
		::System::Single Damping; // 0x1C
		::UnityEngine::AnimationCurve* DampingDistrib; // 0x20
		::System::Single Elasticity; // 0x28
		::UnityEngine::AnimationCurve* ElasticityDistrib; // 0x30
		::System::Single Stiffness; // 0x38
		::UnityEngine::AnimationCurve* StiffnessDistrib; // 0x40
		::System::Single Inert; // 0x48
		::UnityEngine::AnimationCurve* InertDistrib; // 0x50
		::System::Boolean IsInertRatioEnable; // 0x58
		::System::Single PositiveInertX; // 0x5C
		::System::Single NegativeInertX; // 0x60
		::System::Single PositiveInertY; // 0x64
		::System::Single NegativeInertY; // 0x68
		::System::Single PositiveInertZ; // 0x6C
		::System::Single NegativeInertZ; // 0x70
		::System::Single Radius; // 0x74
		::UnityEngine::AnimationCurve* RadiusDistrib; // 0x78
		::System::Single EndLength; // 0x80
		::UnityEngine::Vector3* EndOffset; // 0x84
		::UnityEngine::Vector3* Gravity; // 0x90
		::UnityEngine::Vector3* Force; // 0x9C
		Axis* FreezeAxis; // 0xA8
		::System::Boolean DistantDisable; // 0xAC
		::System::Single DistanceToObject; // 0xB0
		::System::Boolean LimitAxisY; // 0xB4

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(DynamicBone* arg)
		{
			((::System::Void(*)(DynamicBone*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};

