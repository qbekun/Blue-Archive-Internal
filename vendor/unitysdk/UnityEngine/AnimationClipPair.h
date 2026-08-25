#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_ANIMATIONCLIPPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1CC0B0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationClipPair_TypeDefinitionIndex = 36468;

	class AnimationClipPair : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationClip* originalClip; // 0x10
		::UnityEngine::AnimationClip* overrideClip; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIPPAIR_.CTOR_OFFSET))(nullptr);
		}

	};
}

