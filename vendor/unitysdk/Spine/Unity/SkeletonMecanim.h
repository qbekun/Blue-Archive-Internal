#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class ISkeletonAnimationDelegate; }
namespace Spine::Unity { class UpdateBonesDelegate; }
namespace Spine::Unity { class UpdateTiming; }

#define SPINE_UNITY_SKELETONMECANIM_GET_TRANSLATOR_OFFSET UNITYSDK_OFFSET(0x9603660)
#define SPINE_UNITY_SKELETONMECANIM_ADD__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x9603670)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x9603710)
#define SPINE_UNITY_SKELETONMECANIM_ADD__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x96037B0)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x9603850)
#define SPINE_UNITY_SKELETONMECANIM_ADD__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x96038F0)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x9603990)
#define SPINE_UNITY_SKELETONMECANIM_ADD__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x9603A30)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x9603AD0)
#define SPINE_UNITY_SKELETONMECANIM_ADD__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x9603B70)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x9603C10)
#define SPINE_UNITY_SKELETONMECANIM_ADD_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x9603CB0)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x9603D50)
#define SPINE_UNITY_SKELETONMECANIM_ADD_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x9603DF0)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x9603E90)
#define SPINE_UNITY_SKELETONMECANIM_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x9603F30)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x9603FD0)
#define SPINE_UNITY_SKELETONMECANIM_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x9604070)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x9604110)
#define SPINE_UNITY_SKELETONMECANIM_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x96041B0)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x9604250)
#define SPINE_UNITY_SKELETONMECANIM_GET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x96042F0)
#define SPINE_UNITY_SKELETONMECANIM_SET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x9604300)
#define SPINE_UNITY_SKELETONMECANIM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9604310)
#define SPINE_UNITY_SKELETONMECANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0x9604D40)
#define SPINE_UNITY_SKELETONMECANIM_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x9604E40)
#define SPINE_UNITY_SKELETONMECANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0x9604ED0)
#define SPINE_UNITY_SKELETONMECANIM_UPDATEANIMATION_OFFSET UNITYSDK_OFFSET(0x9604DD0)
#define SPINE_UNITY_SKELETONMECANIM_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x9604F40)
#define SPINE_UNITY_SKELETONMECANIM_AFTERANIMATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x9606570)
#define SPINE_UNITY_SKELETONMECANIM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9606630)
#define SPINE_UNITY_SKELETONMECANIM_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x9606780)
#define SPINE_UNITY_SKELETONMECANIM_.CTOR_OFFSET UNITYSDK_OFFSET(0x96067E0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_TypeDefinitionIndex = 35315;

	class SkeletonMecanim : public Il2CppObject
	{
	public:
		MecanimTranslator* translator; // 0x108
		::System::Boolean wasUpdatedAfterInit; // 0x110
		::Spine::Unity::ISkeletonAnimationDelegate* _OnAnimationRebuild; // 0x118
		::Spine::Unity::UpdateBonesDelegate* _BeforeApply; // 0x120
		::Spine::Unity::UpdateBonesDelegate* _UpdateLocal; // 0x128
		::Spine::Unity::UpdateBonesDelegate* _UpdateWorld; // 0x130
		::Spine::Unity::UpdateBonesDelegate* _UpdateComplete; // 0x138
		::Spine::Unity::UpdateTiming* updateTiming; // 0x140

		MecanimTranslator* get_Translator()
		{
			return (return (MecanimTranslator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_GET_TRANSLATOR_OFFSET))(nullptr);
		}

		::System::Void add__OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__ONANIMATIONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void remove__OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__ONANIMATIONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void add__BeforeApply(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__BEFOREAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void remove__BeforeApply(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__BEFOREAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void add__UpdateLocal(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__UPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove__UpdateLocal(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void add__UpdateWorld(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void remove__UpdateWorld(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void add__UpdateComplete(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void remove__UpdateComplete(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_ONANIMATIONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_ONANIMATIONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void add_BeforeApply(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_BEFOREAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void remove_BeforeApply(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_BEFOREAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void add_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_UPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void add_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void remove_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void add_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::UpdateTiming* get_UpdateTiming()
		{
			return (return (::Spine::Unity::UpdateTiming*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_GET_UPDATETIMING_OFFSET))(nullptr);
		}

		::System::Void set_UpdateTiming(::Spine::Unity::UpdateTiming* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateTiming*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_SET_UPDATETIMING_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_UPDATE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateAnimation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_UPDATEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_APPLYANIMATION_OFFSET))(nullptr);
		}

		::System::Void AfterAnimationApplied()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_AFTERANIMATIONAPPLIED_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnBecameVisible()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ONBECAMEVISIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_.CTOR_OFFSET))(nullptr);
		}

	};
}

