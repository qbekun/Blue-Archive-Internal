#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class GameObject; }
class UIToggle;

#define UIPOPUP_OPTION_TITLEVIDEOAUDIO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2719950)
#define UIPOPUP_OPTION_TITLEVIDEOAUDIO_ONTOGGLE_OFFSET UNITYSDK_OFFSET(0x2719FF0)
#define UIPOPUP_OPTION_TITLEVIDEOAUDIO_.CTOR_OFFSET UNITYSDK_OFFSET(0x271A050)

	inline static constexpr unsigned int UIPopup_Option_TitleVideoAudio_TypeDefinitionIndex = 7152;

	class UIPopup_Option_TitleVideoAudio : public Il2CppObject
	{
	public:
		::System::Single thumbnailOpacityWhenToggleOff; // 0x18
		UITexture* thumbnail; // 0x20
		::UnityEngine::GameObject* thumbnailRandom; // 0x28
		::UnityEngine::GameObject* uiLock; // 0x30
		::Il2CppArray<::System::Object*>* titleLables; // 0x38
		UIToggle* toggle; // 0x40
		Il2CppObject* excel; // 0x48

		UIToggle* SetData(::System::Object* arg, ::System::Boolean arg2)
		{
			return ((UIToggle*(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TITLEVIDEOAUDIO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnToggle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TITLEVIDEOAUDIO_ONTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TITLEVIDEOAUDIO_.CTOR_OFFSET))(nullptr);
		}

	};

