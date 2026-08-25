#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }
namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace UnityEngine { class AnimatorClipInfo; }
namespace UnityEngine { class AnimatorStateInfo; }
namespace Spine { class Animation; }
namespace UnityEngine { class AnimatorStateInfo&; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace UnityEngine { class AnimationClip; }

#define MECANIMTRANSLATOR_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x9606B00)
#define MECANIMTRANSLATOR_GET_MECANIMLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x9606B10)
#define MECANIMTRANSLATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x96048A0)
#define MECANIMTRANSLATOR_APPLY_OFFSET UNITYSDK_OFFSET(0x9604FA0)
#define MECANIMTRANSLATOR_TOSPINEANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x9607940)
#define MECANIMTRANSLATOR_GET_MECANIMLAYERNAMES_OFFSET UNITYSDK_OFFSET(0x96079B0)
#define MECANIMTRANSLATOR_INITCLIPINFOSFORLAYERS_OFFSET UNITYSDK_OFFSET(0x9606B90)
#define MECANIMTRANSLATOR_ADD__ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x9607C60)
#define MECANIMTRANSLATOR_GETSTATEUPDATESFROMANIMATOR_OFFSET UNITYSDK_OFFSET(0x9606CF0)
#define MECANIMTRANSLATOR_GETMIXMODE_OFFSET UNITYSDK_OFFSET(0x96072D0)
#define MECANIMTRANSLATOR_GETANIMATORCLIPINFOS_OFFSET UNITYSDK_OFFSET(0x9607030)
#define MECANIMTRANSLATOR_APPLYINTERRUPTIONANIMATION_OFFSET UNITYSDK_OFFSET(0x9607620)
#define MECANIMTRANSLATOR_ONCLIPAPPLIEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9607DA0)
#define MECANIMTRANSLATOR_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x9607330)
#define MECANIMTRANSLATOR_GETACTIVEANIMATIONANDTIME_OFFSET UNITYSDK_OFFSET(0x9607EC0)
#define MECANIMTRANSLATOR_ANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x9607D00)
#define MECANIMTRANSLATOR_GETANIMATORSTATEINFOS_OFFSET UNITYSDK_OFFSET(0x9607200)
#define MECANIMTRANSLATOR_ADD_ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x9608110)
#define MECANIMTRANSLATOR_CLEARCLIPINFOSFORLAYERS_OFFSET UNITYSDK_OFFSET(0x96081B0)
#define MECANIMTRANSLATOR_REMOVE_ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x96083C0)
#define MECANIMTRANSLATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9604AB0)
#define MECANIMTRANSLATOR_GETANIMATION_OFFSET UNITYSDK_OFFSET(0x9607110)
#define MECANIMTRANSLATOR_REMOVE__ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x9608460)

	inline static constexpr unsigned int MecanimTranslator_TypeDefinitionIndex = 35314;

	class MecanimTranslator : public Il2CppObject
	{
	public:
		::System::Single WeightEpsilon; // 0x0
		::System::Boolean autoReset; // 0x10
		::System::Boolean useCustomMixMode; // 0x11
		::Il2CppArray<::System::Object*>* layerMixModes; // 0x18
		::Il2CppArray<::System::Object*>* layerBlendModes; // 0x20
		OnClipAppliedDelegate* _OnClipApplied; // 0x28
		Il2CppObject* animationTable; // 0x30
		Il2CppObject* clipNameHashCodeTable; // 0x38
		Il2CppObject* previousAnimations; // 0x40
		::Il2CppArray<::System::Object*>* layerClipInfos; // 0x48
		::UnityEngine::Animator* animator; // 0x50

		::UnityEngine::Animator* get_Animator()
		{
			return (return (::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_GET_ANIMATOR_OFFSET))(nullptr);
		}

		::System::Int32 get_MecanimLayerCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_GET_MECANIMLAYERCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Single ToSpineAnimationTime(::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_TOSPINEANIMATIONTIME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_MecanimLayerNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_GET_MECANIMLAYERNAMES_OFFSET))(nullptr);
		}

		::System::Void InitClipInfosForLayers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_INITCLIPINFOSFORLAYERS_OFFSET))(nullptr);
		}

		::System::Void add__OnClipApplied(OnClipAppliedDelegate* arg)
		{
			((::System::Void(*)(OnClipAppliedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_ADD__ONCLIPAPPLIED_OFFSET))(arg, nullptr);
		}

		::System::Void GetStateUpdatesFromAnimator(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_GETSTATEUPDATESFROMANIMATOR_OFFSET))(arg, nullptr);
		}

		MixMode* GetMixMode(::System::Int32 arg, ::Spine::MixBlend* arg)
		{
			return (return (MixMode*(*)(::System::Int32, ::Spine::MixBlend*, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_GETMIXMODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetAnimatorClipInfos(::System::Int32 arg, bool&* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Int32, bool&*, int32_t&*, int32_t&*, int32_t&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_GETANIMATORCLIPINFOS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ApplyInterruptionAnimation(::Spine::Skeleton* arg, ::System::Boolean arg, ::UnityEngine::AnimatorClipInfo* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg, ::System::Single arg, ::Spine::MixBlend* arg, ::System::Single arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Spine::Skeleton*, ::System::Boolean, ::UnityEngine::AnimatorClipInfo*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::System::Single, ::Spine::MixBlend*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_APPLYINTERRUPTIONANIMATION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void OnClipAppliedCallback(::Spine::Animation* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg, ::System::Single arg, ::System::Boolean arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::Animation*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_ONCLIPAPPLIEDCALLBACK_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ApplyAnimation(::Spine::Skeleton* arg, ::UnityEngine::AnimatorClipInfo* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg, ::System::Single arg, ::Spine::MixBlend* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Spine::Skeleton*, ::UnityEngine::AnimatorClipInfo*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::System::Single, ::Spine::MixBlend*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_APPLYANIMATION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetActiveAnimationAndTime(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_GETACTIVEANIMATIONANDTIME_OFFSET))(arg, nullptr);
		}

		::System::Single AnimationTime(::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_ANIMATIONTIME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void GetAnimatorStateInfos(::System::Int32 arg, bool&* arg, ::UnityEngine::AnimatorStateInfo&* arg, ::UnityEngine::AnimatorStateInfo&* arg, ::UnityEngine::AnimatorStateInfo&* arg, float&* arg)
		{
			((::System::Void(*)(::System::Int32, bool&*, ::UnityEngine::AnimatorStateInfo&*, ::UnityEngine::AnimatorStateInfo&*, ::UnityEngine::AnimatorStateInfo&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_GETANIMATORSTATEINFOS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void add_OnClipApplied(OnClipAppliedDelegate* arg)
		{
			((::System::Void(*)(OnClipAppliedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_ADD_ONCLIPAPPLIED_OFFSET))(arg, nullptr);
		}

		::System::Void ClearClipInfosForLayers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_CLEARCLIPINFOSFORLAYERS_OFFSET))(nullptr);
		}

		::System::Void remove_OnClipApplied(OnClipAppliedDelegate* arg)
		{
			((::System::Void(*)(OnClipAppliedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_REMOVE_ONCLIPAPPLIED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::UnityEngine::Animator* arg, ::Spine::Unity::SkeletonDataAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::Spine::Unity::SkeletonDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::Spine::Animation* GetAnimation(::UnityEngine::AnimationClip* arg)
		{
			return (return (::Spine::Animation*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_GETANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void remove__OnClipApplied(OnClipAppliedDelegate* arg)
		{
			((::System::Void(*)(OnClipAppliedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MECANIMTRANSLATOR_REMOVE__ONCLIPAPPLIED_OFFSET))(arg, nullptr);
		}

	};

