#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_COMPENSATEPOSITIONTOYROTATION_OFFSET UNITYSDK_OFFSET(0x9613FC0)
#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_COMPENSATEPOSITIONTOXROTATION_OFFSET UNITYSDK_OFFSET(0x9614100)
#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9614210)
#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_START_OFFSET UNITYSDK_OFFSET(0x9614220)
#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x9614260)

namespace Spine::Unity
{
	inline static constexpr unsigned int FollowSkeletonUtilityRootRotation_TypeDefinitionIndex = 35333;

	class FollowSkeletonUtilityRootRotation : public Il2CppObject
	{
	public:
		::System::Single FLIP_ANGLE_THRESHOLD; // 0x0
		::UnityEngine::Transform* reference; // 0x18
		::UnityEngine::Vector3* prevLocalEulerAngles; // 0x20

		::System::Void CompensatePositionToYRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_COMPENSATEPOSITIONTOYROTATION_OFFSET))(nullptr);
		}

		::System::Void CompensatePositionToXRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_COMPENSATEPOSITIONTOXROTATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_START_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_FIXEDUPDATE_OFFSET))(nullptr);
		}

	};
}

