#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Text; }
namespace RuntimeInspectorNamespace { class UISkin; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Vector2; }

#define RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETHEIGHT_OFFSET UNITYSDK_OFFSET(0x9586220)
#define RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETSKINBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x958EFA0)
#define RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETSKINBUTTON_OFFSET UNITYSDK_OFFSET(0x958F010)
#define RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETANCHORMINMAXINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x958F0F0)
#define RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETSKININPUTFIELDTEXT_OFFSET UNITYSDK_OFFSET(0x95862C0)
#define RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETWIDTH_OFFSET UNITYSDK_OFFSET(0x958F180)
#define RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETSKINTEXT_OFFSET UNITYSDK_OFFSET(0x958F1D0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int SkinUtils_TypeDefinitionIndex = 35731;

	class SkinUtils : public Il2CppObject
	{
	public:
		::System::Void SetHeight(::UnityEngine::UI::LayoutElement* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UI::LayoutElement*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSkinButtonText(::UnityEngine::UI::Text* arg, ::RuntimeInspectorNamespace::UISkin* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Text*, ::RuntimeInspectorNamespace::UISkin*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETSKINBUTTONTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSkinButton(::UnityEngine::UI::Button* arg, ::RuntimeInspectorNamespace::UISkin* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Button*, ::RuntimeInspectorNamespace::UISkin*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETSKINBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetAnchorMinMaxInputField(::UnityEngine::RectTransform* arg, ::UnityEngine::RectTransform* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETANCHORMINMAXINPUTFIELD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetSkinInputFieldText(::UnityEngine::UI::Text* arg, ::RuntimeInspectorNamespace::UISkin* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Text*, ::RuntimeInspectorNamespace::UISkin*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETSKININPUTFIELDTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetWidth(::UnityEngine::UI::LayoutElement* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UI::LayoutElement*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSkinText(::UnityEngine::UI::Text* arg, ::RuntimeInspectorNamespace::UISkin* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Text*, ::RuntimeInspectorNamespace::UISkin*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINUTILS_SETSKINTEXT_OFFSET))(arg, arg, nullptr);
		}

	};
}

