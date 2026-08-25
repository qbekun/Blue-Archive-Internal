#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine { class Animation; }
namespace Spine::Unity { class AnimationReferenceAsset; }

#define SPINE_UNITY_ANIMATIONREFERENCEASSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x95E7200)
#define SPINE_UNITY_ANIMATIONREFERENCEASSET_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x95E7220)
#define SPINE_UNITY_ANIMATIONREFERENCEASSET_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95E7250)
#define SPINE_UNITY_ANIMATIONREFERENCEASSET_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x95E7B10)
#define SPINE_UNITY_ANIMATIONREFERENCEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E7B20)
#define SPINE_UNITY_ANIMATIONREFERENCEASSET_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x95E7B30)

namespace Spine::Unity
{
	inline static constexpr unsigned int AnimationReferenceAsset_TypeDefinitionIndex = 35265;

	class AnimationReferenceAsset : public Il2CppObject
	{
	public:
		::System::Boolean QuietSkeletonData; // 0x0
		::Spine::Unity::SkeletonDataAsset* skeletonDataAsset; // 0x18
		::System::String* animationName; // 0x20
		::Spine::Animation* animation; // 0x28

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSET_CLEAR_OFFSET))(nullptr);
		}

		::Spine::Animation* op_Implicit(::Spine::Unity::AnimationReferenceAsset* arg)
		{
			return (return (::Spine::Animation*(*)(::Spine::Unity::AnimationReferenceAsset*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSET_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSET_INITIALIZE_OFFSET))(nullptr);
		}

		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return (return (::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSET_GET_SKELETONDATAASSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSET_.CTOR_OFFSET))(nullptr);
		}

		::Spine::Animation* get_Animation()
		{
			return (return (::Spine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSET_GET_ANIMATION_OFFSET))(nullptr);
		}

	};
}

