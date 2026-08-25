#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define PARTICLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x209ECD0)

	inline static constexpr unsigned int Particle_TypeDefinitionIndex = 3522;

	class Particle : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* ParticleTransform; // 0x10
		::System::Int32 ParentIndex; // 0x18
		::System::Int32 ChildIndex; // 0x1C
		::System::Single Damping; // 0x20
		::System::Single Elasticity; // 0x24
		::System::Single Stiffness; // 0x28
		::System::Single Inert; // 0x2C
		::System::Single Radius; // 0x30
		::System::Single BoneLength; // 0x34
		::System::Boolean IsExtraBone; // 0x38
		::UnityEngine::Vector3* Position; // 0x3C
		::UnityEngine::Vector3* PrevPosition; // 0x48
		::UnityEngine::Vector3* EndOffset; // 0x54
		::UnityEngine::Vector3* InitLocalPosition; // 0x60
		::UnityEngine::Quaternion* InitLocalRotation; // 0x6C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLE_.CTOR_OFFSET))(nullptr);
		}

	};

