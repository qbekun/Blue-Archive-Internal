#pragma once
#include "unitysdk.h"

namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define POSITIVEBUTTONEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CB2A40)
#define POSITIVEBUTTONEFFECT_ONFOCUSED_OFFSET UNITYSDK_OFFSET(0x9CB2C10)
#define POSITIVEBUTTONEFFECT_ONUNFOCUSED_OFFSET UNITYSDK_OFFSET(0x9CB2AE0)
#define POSITIVEBUTTONEFFECT_ONPRESSED_OFFSET UNITYSDK_OFFSET(0x9CB2D20)
#define POSITIVEBUTTONEFFECT_ONUNPRESSED_OFFSET UNITYSDK_OFFSET(0x9CB2D30)

	inline static constexpr unsigned int PositiveButtonEffect_TypeDefinitionIndex = 27180;

	class PositiveButtonEffect : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Button* _button; // 0x10
		::UnityEngine::UI::Text* _text; // 0x18

		::System::Void .ctor(::UnityEngine::UI::Button* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Button*, ::PVOID))((::PBYTE)hIl2Cpp + POSITIVEBUTTONEFFECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnFocused(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + POSITIVEBUTTONEFFECT_ONFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnfocused(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + POSITIVEBUTTONEFFECT_ONUNFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnPressed(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + POSITIVEBUTTONEFFECT_ONPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnpressed(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + POSITIVEBUTTONEFFECT_ONUNPRESSED_OFFSET))(arg, nullptr);
		}

	};

