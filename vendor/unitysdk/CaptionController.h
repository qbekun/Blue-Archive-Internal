#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }
class UIPopup_CVCollectionPlayText;

#define CAPTIONCONTROLLER_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x204C140)
#define CAPTIONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204C1D0)
#define CAPTIONCONTROLLER__ONBEHAVIOURPLAY_B__2_0_OFFSET UNITYSDK_OFFSET(0x204C1E0)
#define CAPTIONCONTROLLER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x204C290)
#define CAPTIONCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x204C400)

	inline static constexpr unsigned int CaptionController_TypeDefinitionIndex = 3294;

	class CaptionController : public Il2CppObject
	{
	public:
		::System::String* captionLocalizeKey; // 0x10

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + CAPTIONCONTROLLER_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPTIONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnBehaviourPlay_b__2_0(UIPopup_CVCollectionPlayText* arg)
		{
			((::System::Void(*)(UIPopup_CVCollectionPlayText*, ::PVOID))((::PBYTE)hIl2Cpp + CAPTIONCONTROLLER__ONBEHAVIOURPLAY_B__2_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + CAPTIONCONTROLLER_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAPTIONCONTROLLER_INITIALIZE_OFFSET))(str, nullptr);
		}

	};

