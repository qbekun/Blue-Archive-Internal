#pragma once
#include "unitysdk.h"

#define ICURSORINTERACTABLE_ONFOCUSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICURSORINTERACTABLE_ONUNFOCUSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICURSORINTERACTABLE_ONPRESSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICURSORINTERACTABLE_ONUNPRESSED_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ICursorInteractable_TypeDefinitionIndex = 26476;

	class ICursorInteractable : public Il2CppObject
	{
	public:
		::System::Void OnFocused(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + ICURSORINTERACTABLE_ONFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnfocused(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + ICURSORINTERACTABLE_ONUNFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnPressed(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + ICURSORINTERACTABLE_ONPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnpressed(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + ICURSORINTERACTABLE_ONUNPRESSED_OFFSET))(arg, nullptr);
		}

	};

