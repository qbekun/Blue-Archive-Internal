#pragma once
#include "unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine { class Coroutine; }

#define UIPCSCREENSHOTTOAST_ONOPEN_OFFSET UNITYSDK_OFFSET(0x2126CC0)
#define UIPCSCREENSHOTTOAST_.CTOR_OFFSET UNITYSDK_OFFSET(0x2126DE0)
#define UIPCSCREENSHOTTOAST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2126DF0)
#define UIPCSCREENSHOTTOAST_COSHOWTOAST_OFFSET UNITYSDK_OFFSET(0x2126D70)

	inline static constexpr unsigned int UIPCScreenshotToast_TypeDefinitionIndex = 3911;

	class UIPCScreenshotToast : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* toastText; // 0x40
		::UnityEngine::Coroutine* _fadeCoroutine; // 0x48

		::System::Void OnOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCSCREENSHOTTOAST_ONOPEN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCSCREENSHOTTOAST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPCSCREENSHOTTOAST_INITIALIZE_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* CoShowToast()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCSCREENSHOTTOAST_COSHOWTOAST_OFFSET))(nullptr);
		}

	};

