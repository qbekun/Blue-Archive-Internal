#pragma once
#include "../../unitysdk.h"

namespace Spine { class AnimationState; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector2&; }
namespace Spine { class TrackEntry; }

#define SPINE_UNITY_SKELETONROOTMOTION_GETREMAININGROOTMOTION_OFFSET UNITYSDK_OFFSET(0x95F5EF0)
#define SPINE_UNITY_SKELETONROOTMOTION_GETROOTMOTIONINFO_OFFSET UNITYSDK_OFFSET(0x95F5F80)
#define SPINE_UNITY_SKELETONROOTMOTION_GET_ADDITIONALSCALE_OFFSET UNITYSDK_OFFSET(0x95F5FF0)
#define SPINE_UNITY_SKELETONROOTMOTION_RESET_OFFSET UNITYSDK_OFFSET(0x95F6070)
#define SPINE_UNITY_SKELETONROOTMOTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95F6090)
#define SPINE_UNITY_SKELETONROOTMOTION_CALCULATEANIMATIONSMOVEMENTDELTA_OFFSET UNITYSDK_OFFSET(0x95F61B0)
#define SPINE_UNITY_SKELETONROOTMOTION_CALCULATEANIMATIONSROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0x95F6500)
#define SPINE_UNITY_SKELETONROOTMOTION_APPLYMIXALPHATODELTA_OFFSET UNITYSDK_OFFSET(0x95F6440)
#define SPINE_UNITY_SKELETONROOTMOTION_APPLYMIXALPHATODELTA_OFFSET UNITYSDK_OFFSET(0x95F66C0)
#define SPINE_UNITY_SKELETONROOTMOTION_GETMIXALPHA_OFFSET UNITYSDK_OFFSET(0x95F6780)
#define SPINE_UNITY_SKELETONROOTMOTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x95F6840)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRootMotion_TypeDefinitionIndex = 35297;

	class SkeletonRootMotion : public Il2CppObject
	{
	public:
		::System::Int32 DefaultAnimationTrackFlags; // 0x0
		::System::Int32 animationTrackFlags; // 0xF0
		::Spine::AnimationState* animationState; // 0xF8
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x100

		::UnityEngine::Vector2* GetRemainingRootMotion(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_GETREMAININGROOTMOTION_OFFSET))(arg, nullptr);
		}

		RootMotionInfo* GetRootMotionInfo(::System::Int32 arg)
		{
			return (return (RootMotionInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_GETROOTMOTIONINFO_OFFSET))(arg, nullptr);
		}

		::System::Single get_AdditionalScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_GET_ADDITIONALSCALE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_RESET_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_INITIALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* CalculateAnimationsMovementDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_CALCULATEANIMATIONSMOVEMENTDELTA_OFFSET))(nullptr);
		}

		::System::Single CalculateAnimationsRotationDelta()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_CALCULATEANIMATIONSROTATIONDELTA_OFFSET))(nullptr);
		}

		::System::Void ApplyMixAlphaToDelta(::UnityEngine::Vector2&* arg, ::Spine::TrackEntry* arg, ::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::Spine::TrackEntry*, ::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_APPLYMIXALPHATODELTA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyMixAlphaToDelta(float&* arg, ::Spine::TrackEntry* arg, ::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(float&*, ::Spine::TrackEntry*, ::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_APPLYMIXALPHATODELTA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetMixAlpha(float&* arg, ::Spine::TrackEntry* arg, ::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(float&*, ::Spine::TrackEntry*, ::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_GETMIXALPHA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

