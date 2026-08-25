#pragma once
#include "../../unitysdk.h"

namespace Spine { class AnimationState; }
namespace Spine::Unity { class ISkeletonAnimationDelegate; }
namespace Spine::Unity { class UpdateBonesDelegate; }
namespace Spine::Unity { class UpdateTiming; }
namespace Spine::Unity { class SkeletonAnimation; }
namespace UnityEngine { class GameObject; }
namespace Spine::Unity { class SkeletonDataAsset; }

#define SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x95FA2F0)
#define SPINE_UNITY_SKELETONANIMATION_ADD__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x95FA320)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x95FA3C0)
#define SPINE_UNITY_SKELETONANIMATION_ADD__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x95FA460)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x95FA500)
#define SPINE_UNITY_SKELETONANIMATION_ADD__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x95FA5A0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x95FA640)
#define SPINE_UNITY_SKELETONANIMATION_ADD__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x95FA6E0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x95FA780)
#define SPINE_UNITY_SKELETONANIMATION_ADD__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x95FA820)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x95FA8C0)
#define SPINE_UNITY_SKELETONANIMATION_ADD_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x95FA960)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x95FAA00)
#define SPINE_UNITY_SKELETONANIMATION_ADD_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x95FAAA0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x95FAB40)
#define SPINE_UNITY_SKELETONANIMATION_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x95FABE0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x95FAC80)
#define SPINE_UNITY_SKELETONANIMATION_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x95FAD20)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x95FADC0)
#define SPINE_UNITY_SKELETONANIMATION_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x95FAE60)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x95FAF00)
#define SPINE_UNITY_SKELETONANIMATION_GET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x95FAFA0)
#define SPINE_UNITY_SKELETONANIMATION_SET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x95FAFB0)
#define SPINE_UNITY_SKELETONANIMATION_GET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x95FAFC0)
#define SPINE_UNITY_SKELETONANIMATION_SET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x95FAFD0)
#define SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x95FAFE0)
#define SPINE_UNITY_SKELETONANIMATION_SET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x95FB040)
#define SPINE_UNITY_SKELETONANIMATION_ADDTOGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x95FB150)
#define SPINE_UNITY_SKELETONANIMATION_NEWSKELETONANIMATIONGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x95FB1C0)
#define SPINE_UNITY_SKELETONANIMATION_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x95FB220)
#define SPINE_UNITY_SKELETONANIMATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95FB250)
#define SPINE_UNITY_SKELETONANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x95FB3D0)
#define SPINE_UNITY_SKELETONANIMATION_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x95FB4D0)
#define SPINE_UNITY_SKELETONANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x95FB470)
#define SPINE_UNITY_SKELETONANIMATION_UPDATEANIMATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x95FB570)
#define SPINE_UNITY_SKELETONANIMATION_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x95FB610)
#define SPINE_UNITY_SKELETONANIMATION_AFTERANIMATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x95FB730)
#define SPINE_UNITY_SKELETONANIMATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x95FB7F0)
#define SPINE_UNITY_SKELETONANIMATION_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x95FB900)
#define SPINE_UNITY_SKELETONANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x95FB990)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonAnimation_TypeDefinitionIndex = 35302;

	class SkeletonAnimation : public Il2CppObject
	{
	public:
		::Spine::AnimationState* state; // 0x108
		::System::Boolean wasUpdatedAfterInit; // 0x110
		::Spine::Unity::ISkeletonAnimationDelegate* _OnAnimationRebuild; // 0x118
		::Spine::Unity::UpdateBonesDelegate* _BeforeApply; // 0x120
		::Spine::Unity::UpdateBonesDelegate* _UpdateLocal; // 0x128
		::Spine::Unity::UpdateBonesDelegate* _UpdateWorld; // 0x130
		::Spine::Unity::UpdateBonesDelegate* _UpdateComplete; // 0x138
		::Spine::Unity::UpdateTiming* updateTiming; // 0x140
		::System::Boolean unscaledTime; // 0x144
		::System::String* _animationName; // 0x148
		::System::Boolean loop; // 0x150
		::System::Single timeScale; // 0x154

		::Spine::AnimationState* get_AnimationState()
		{
			return (return (::Spine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONSTATE_OFFSET))(nullptr);
		}

		::System::Void add__OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__ONANIMATIONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void remove__OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__ONANIMATIONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void add__BeforeApply(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__BEFOREAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void remove__BeforeApply(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__BEFOREAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void add__UpdateLocal(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__UPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove__UpdateLocal(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void add__UpdateWorld(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void remove__UpdateWorld(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void add__UpdateComplete(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void remove__UpdateComplete(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_ONANIMATIONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_ONANIMATIONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void add_BeforeApply(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_BEFOREAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void remove_BeforeApply(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_BEFOREAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void add_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_UPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void add_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void remove_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void add_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::UpdateTiming* get_UpdateTiming()
		{
			return (return (::Spine::Unity::UpdateTiming*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_UPDATETIMING_OFFSET))(nullptr);
		}

		::System::Void set_UpdateTiming(::Spine::Unity::UpdateTiming* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateTiming*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_SET_UPDATETIMING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UnscaledTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_UNSCALEDTIME_OFFSET))(nullptr);
		}

		::System::Void set_UnscaledTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_SET_UNSCALEDTIME_OFFSET))(arg, nullptr);
		}

		::System::String* get_AnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONNAME_OFFSET))(nullptr);
		}

		::System::Void set_AnimationName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_SET_ANIMATIONNAME_OFFSET))(str, nullptr);
		}

		::Spine::Unity::SkeletonAnimation* AddToGameObject(::UnityEngine::GameObject* arg, ::Spine::Unity::SkeletonDataAsset* arg, ::System::Boolean arg)
		{
			return (return (::Spine::Unity::SkeletonAnimation*(*)(::UnityEngine::GameObject*, ::Spine::Unity::SkeletonDataAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADDTOGAMEOBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Spine::Unity::SkeletonAnimation* NewSkeletonAnimationGameObject(::Spine::Unity::SkeletonDataAsset* arg, ::System::Boolean arg)
		{
			return (return (::Spine::Unity::SkeletonAnimation*(*)(::Spine::Unity::SkeletonDataAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_NEWSKELETONANIMATIONGAMEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_CLEARSTATE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_UPDATE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateAnimationStatus(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_UPDATEANIMATIONSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_APPLYANIMATION_OFFSET))(nullptr);
		}

		::System::Void AfterAnimationApplied()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_AFTERANIMATIONAPPLIED_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnBecameVisible()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ONBECAMEVISIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

