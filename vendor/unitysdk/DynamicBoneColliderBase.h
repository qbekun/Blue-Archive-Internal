#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class Axis;
namespace UnityEngine { class Vector3; }
class Bound;

#define DYNAMICBONECOLLIDERBASE_COLLIDE_OFFSET UNITYSDK_OFFSET(0x20A0700)
#define DYNAMICBONECOLLIDERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20A0690)
#define DYNAMICBONECOLLIDERBASE_START_OFFSET UNITYSDK_OFFSET(0x20A0710)

	inline static constexpr unsigned int DynamicBoneColliderBase_TypeDefinitionIndex = 3530;

	class DynamicBoneColliderBase : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* MyTransform; // 0x18
		Axis* Direction; // 0x20
		::UnityEngine::Vector3* Center; // 0x24
		Bound* BoundSide; // 0x30

		::System::Void Collide(::UnityEngine::Vector3&* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDERBASE_COLLIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDERBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECOLLIDERBASE_START_OFFSET))(nullptr);
		}

	};

