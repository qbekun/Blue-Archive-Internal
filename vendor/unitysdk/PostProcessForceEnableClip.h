#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define POSTPROCESSFORCEENABLECLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x20ED270)
#define POSTPROCESSFORCEENABLECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x20ED280)

	inline static constexpr unsigned int PostProcessForceEnableClip_TypeDefinitionIndex = 3811;

	class PostProcessForceEnableClip : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESSFORCEENABLECLIP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESSFORCEENABLECLIP_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

