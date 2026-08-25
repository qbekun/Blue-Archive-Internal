#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Rigidbody; }

#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_AWAKE_OFFSET UNITYSDK_OFFSET(0x9613CE0)
#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x9613D30)
#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9613DD0)

namespace Spine::Unity
{
	inline static constexpr unsigned int FollowLocationRigidbody_TypeDefinitionIndex = 35331;

	class FollowLocationRigidbody : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* reference; // 0x18
		::UnityEngine::Rigidbody* ownRigidbody; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_.CTOR_OFFSET))(nullptr);
		}

	};
}

