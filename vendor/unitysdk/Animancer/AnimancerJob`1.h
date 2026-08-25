#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Animations { class AnimationScriptPlayable; }
namespace Animancer { class AnimancerPlayable; }

#define ANIMANCER_ANIMANCERJOB`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERJOB`1_DESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERJOB`1_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int AnimancerJob`1_TypeDefinitionIndex = 35167;

	class AnimancerJob`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _Job; // 0x0
		::UnityEngine::Animations::AnimationScriptPlayable* _Playable; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERJOB`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERJOB`1_DESTROY_OFFSET))(nullptr);
		}

		::System::Void CreatePlayable(::Animancer::AnimancerPlayable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERJOB`1_CREATEPLAYABLE_OFFSET))(arg, nullptr);
		}

	};
}

