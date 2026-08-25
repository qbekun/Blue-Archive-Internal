#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonUtilityBone; }
namespace Spine::Unity { class SkeletonUtility; }

#define SPINE_UNITY_SKELETONUTILITYCONSTRAINT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9618DE0)
#define SPINE_UNITY_SKELETONUTILITYCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9618E40)
#define SPINE_UNITY_SKELETONUTILITYCONSTRAINT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9618E50)
#define SPINE_UNITY_SKELETONUTILITYCONSTRAINT_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUtilityConstraint_TypeDefinitionIndex = 35339;

	class SkeletonUtilityConstraint : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonUtilityBone* bone; // 0x18
		::Spine::Unity::SkeletonUtility* hierarchy; // 0x20

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYCONSTRAINT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYCONSTRAINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYCONSTRAINT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void DoUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYCONSTRAINT_DOUPDATE_OFFSET))(nullptr);
		}

	};
}

