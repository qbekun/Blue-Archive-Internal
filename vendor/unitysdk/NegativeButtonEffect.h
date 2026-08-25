#pragma once
#include "unitysdk.h"

namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define NEGATIVEBUTTONEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CB29C0)
#define NEGATIVEBUTTONEFFECT_ONFOCUSED_OFFSET UNITYSDK_OFFSET(0x9CB2E50)
#define NEGATIVEBUTTONEFFECT_ONUNFOCUSED_OFFSET UNITYSDK_OFFSET(0x9CB2D40)
#define NEGATIVEBUTTONEFFECT_ONPRESSED_OFFSET UNITYSDK_OFFSET(0x9CB2F60)
#define NEGATIVEBUTTONEFFECT_ONUNPRESSED_OFFSET UNITYSDK_OFFSET(0x9CB2F70)

	inline static constexpr unsigned int NegativeButtonEffect_TypeDefinitionIndex = 27181;

	class NegativeButtonEffect : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Button* _button; // 0x10
		::UnityEngine::UI::Text* _text; // 0x18

		::System::Void .ctor(::UnityEngine::UI::Button* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Button*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATIVEBUTTONEFFECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnFocused(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATIVEBUTTONEFFECT_ONFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnfocused(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATIVEBUTTONEFFECT_ONUNFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnPressed(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATIVEBUTTONEFFECT_ONPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnpressed(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + NEGATIVEBUTTONEFFECT_ONUNPRESSED_OFFSET))(arg, nullptr);
		}

	};

