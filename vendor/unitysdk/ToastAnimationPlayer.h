#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }

#define TOASTANIMATIONPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB74320)
#define TOASTANIMATIONPLAYER_COPLAY_OFFSET UNITYSDK_OFFSET(0xB74390)
#define TOASTANIMATIONPLAYER_COPLAYCLOSEANIMATION_OFFSET UNITYSDK_OFFSET(0xB74440)
#define TOASTANIMATIONPLAYER_COPLAYOPENANIMATION_OFFSET UNITYSDK_OFFSET(0xB744D0)

	inline static constexpr unsigned int ToastAnimationPlayer_TypeDefinitionIndex = 8480;

	class ToastAnimationPlayer : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* toastAnimation; // 0x18
		::System::String* openAnimationName; // 0x20
		::System::String* closeAnimationName; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTANIMATIONPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOASTANIMATIONPLAYER_COPLAY_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayCloseAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTANIMATIONPLAYER_COPLAYCLOSEANIMATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayOpenAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTANIMATIONPLAYER_COPLAYOPENANIMATION_OFFSET))(nullptr);
		}

	};

