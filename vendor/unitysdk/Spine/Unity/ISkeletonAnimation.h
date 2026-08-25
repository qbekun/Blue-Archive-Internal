#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class UpdateBonesDelegate; }
namespace Spine::Unity { class ISkeletonAnimationDelegate; }
namespace Spine::Unity { class UpdateTiming; }
namespace Spine { class Skeleton; }

#define SPINE_UNITY_ISKELETONANIMATION_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ISKELETONANIMATION_ADD_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ISKELETONANIMATION_SET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ISKELETONANIMATION_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ISKELETONANIMATION_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ISKELETONANIMATION_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ISKELETONANIMATION_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ISKELETONANIMATION_REMOVE_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ISKELETONANIMATION_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ISKELETONANIMATION_GET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ISKELETONANIMATION_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine::Unity
{
	inline static constexpr unsigned int ISkeletonAnimation_TypeDefinitionIndex = 35346;

	class ISkeletonAnimation : public Il2CppObject
	{
	public:
		::System::Void remove_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATION_REMOVE_UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATION_ADD_ONANIMATIONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void set_UpdateTiming(::Spine::Unity::UpdateTiming* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateTiming*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATION_SET_UPDATETIMING_OFFSET))(arg, nullptr);
		}

		::System::Void remove_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATION_REMOVE_UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void add_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATION_ADD_UPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void add_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATION_ADD_UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void add_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATION_ADD_UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATION_REMOVE_ONANIMATIONREBUILD_OFFSET))(arg, nullptr);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return (return (::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATION_GET_SKELETON_OFFSET))(nullptr);
		}

		::Spine::Unity::UpdateTiming* get_UpdateTiming()
		{
			return (return (::Spine::Unity::UpdateTiming*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATION_GET_UPDATETIMING_OFFSET))(nullptr);
		}

		::System::Void remove_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATION_REMOVE_UPDATELOCAL_OFFSET))(arg, nullptr);
		}

	};
}

