#pragma once
#include "unitysdk.h"

class MXVibrationType;
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ClipCaps; }

#define USESCALEDSHADERTIMECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x2052F10)
#define USESCALEDSHADERTIMECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x2052FC0)
#define USESCALEDSHADERTIMECLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2052FD0)

	inline static constexpr unsigned int UseScaledShaderTimeClip_TypeDefinitionIndex = 3328;

	class UseScaledShaderTimeClip : public Il2CppObject
	{
	public:
		MXVibrationType* VibrationType; // 0x18

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + USESCALEDSHADERTIMECLIP_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + USESCALEDSHADERTIMECLIP_GET_CLIPCAPS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USESCALEDSHADERTIMECLIP_.CTOR_OFFSET))(nullptr);
		}

	};

