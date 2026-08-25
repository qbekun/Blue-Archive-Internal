#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Rigidbody2D; }

#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY2D_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x9613DE0)
#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY2D_AWAKE_OFFSET UNITYSDK_OFFSET(0x9613F60)
#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x9613FB0)

namespace Spine::Unity
{
	inline static constexpr unsigned int FollowLocationRigidbody2D_TypeDefinitionIndex = 35332;

	class FollowLocationRigidbody2D : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* reference; // 0x18
		::System::Boolean followFlippedX; // 0x20
		::UnityEngine::Rigidbody2D* ownRigidbody; // 0x28

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY2D_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY2D_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY2D_.CTOR_OFFSET))(nullptr);
		}

	};
}

