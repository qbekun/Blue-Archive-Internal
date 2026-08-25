#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace Spine::Unity { class SkeletonMecanim; }
namespace Spine { class Animation; }

#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x95F40F0)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_GETREMAININGROOTMOTION_OFFSET UNITYSDK_OFFSET(0x95F43C0)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95F4CC0)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_CALCULATEANIMATIONSMOVEMENTDELTA_OFFSET UNITYSDK_OFFSET(0x95F51C0)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x95F5210)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_GETROOTMOTIONINFO_OFFSET UNITYSDK_OFFSET(0x95F5B70)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_RESET_OFFSET UNITYSDK_OFFSET(0x95F5E00)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_GET_SKELETONMECANIM_OFFSET UNITYSDK_OFFSET(0x95F5E30)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_CALCULATEANIMATIONSROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0x95F5ED0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanimRootMotion_TypeDefinitionIndex = 35296;

	class SkeletonMecanimRootMotion : public Il2CppObject
	{
	public:
		::System::Int32 DefaultMecanimLayerFlags; // 0x0
		::System::Int32 mecanimLayerFlags; // 0xF0
		::UnityEngine::Vector2* movementDelta; // 0xF4
		::System::Single rotationDelta; // 0xFC
		::Spine::Unity::SkeletonMecanim* skeletonMecanim; // 0x100

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetRemainingRootMotion(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_GETREMAININGROOTMOTION_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_INITIALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* CalculateAnimationsMovementDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_CALCULATEANIMATIONSMOVEMENTDELTA_OFFSET))(nullptr);
		}

		::System::Void OnClipApplied(::Spine::Animation* arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::Animation*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_ONCLIPAPPLIED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		RootMotionInfo* GetRootMotionInfo(::System::Int32 arg)
		{
			return (return (RootMotionInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_GETROOTMOTIONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_RESET_OFFSET))(nullptr);
		}

		::Spine::Unity::SkeletonMecanim* get_SkeletonMecanim()
		{
			return (return (::Spine::Unity::SkeletonMecanim*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_GET_SKELETONMECANIM_OFFSET))(nullptr);
		}

		::System::Single CalculateAnimationsRotationDelta()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_CALCULATEANIMATIONSROTATIONDELTA_OFFSET))(nullptr);
		}

	};
}

