#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioClip; }
class Trigger;

#define UIPLAYSOUND_GET_CANPLAY_OFFSET UNITYSDK_OFFSET(0xA0AB70)
#define UIPLAYSOUND_ONPRESS_OFFSET UNITYSDK_OFFSET(0xA0AC30)
#define UIPLAYSOUND_ONHOVER_OFFSET UNITYSDK_OFFSET(0xA0ACF0)
#define UIPLAYSOUND_ONCLICK_OFFSET UNITYSDK_OFFSET(0xA0ADB0)
#define UIPLAYSOUND_PLAY_OFFSET UNITYSDK_OFFSET(0xA0AE50)
#define UIPLAYSOUND_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0AED0)
#define UIPLAYSOUND_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA0AEF0)
#define UIPLAYSOUND_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA0AF80)
#define UIPLAYSOUND_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA0B010)

	inline static constexpr unsigned int UIPlaySound_TypeDefinitionIndex = 53;

	class UIPlaySound : public Il2CppObject
	{
	public:
		::UnityEngine::AudioClip* audioClip; // 0x18
		Trigger* trigger; // 0x20
		::System::Single volume; // 0x24
		::System::Single pitch; // 0x28
		::System::Boolean mIsOver; // 0x2C

		::System::Boolean get_canPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYSOUND_GET_CANPLAY_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYSOUND_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYSOUND_ONHOVER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYSOUND_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYSOUND_PLAY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYSOUND_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYSOUND_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYSOUND_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYSOUND_ONSELECT_OFFSET))(arg, nullptr);
		}

	};

