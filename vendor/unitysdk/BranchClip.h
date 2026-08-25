#pragma once
#include "unitysdk.h"

class PlayMode;
namespace UnityEngine::Timeline { class ClipCaps; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define BRANCHCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x20474B0)
#define BRANCHCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x20474C0)
#define BRANCHCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2047660)

	inline static constexpr unsigned int BranchClip_TypeDefinitionIndex = 3271;

	class BranchClip : public Il2CppObject
	{
	public:
		PlayMode* Mode; // 0x18
		::System::Int32 NextSequence; // 0x1C
		::System::String* InteractionResultSaveKey; // 0x20
		::System::Boolean IsZeroFrameStart; // 0x28
		::System::Int32 BranchCount; // 0x2C
		::UnityEngine::Timeline::ClipCaps* _clipCaps_k__BackingField; // 0x30

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIP_GET_CLIPCAPS_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIP_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIP_.CTOR_OFFSET))(nullptr);
		}

	};

