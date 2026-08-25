#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_ANIMATORCLIPINFO_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xA1C6620)
#define UNITYENGINE_ANIMATORCLIPINFO_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA1C66A0)
#define UNITYENGINE_ANIMATORCLIPINFO_INSTANCEIDTOANIMATIONCLIPPPTR_OFFSET UNITYSDK_OFFSET(0xA1C6660)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorClipInfo_TypeDefinitionIndex = 36462;

	class AnimatorClipInfo : public Il2CppObject
	{
	public:
		::System::Int32 m_ClipInstanceID; // 0x10
		::System::Single m_Weight; // 0x14

		::UnityEngine::AnimationClip* get_clip()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCLIPINFO_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Single get_weight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCLIPINFO_GET_WEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationClip* InstanceIDToAnimationClipPPtr(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCLIPINFO_INSTANCEIDTOANIMATIONCLIPPPTR_OFFSET))(arg, nullptr);
		}

	};
}

