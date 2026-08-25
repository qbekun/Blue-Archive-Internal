#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class FontStyle; }
namespace UnityEngine { class TextAnchor; }
namespace UnityEngine::UIElements { class CursorPositionStylePainterParameters; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class TextNativeSettings; }

#define UNITYENGINE_UIELEMENTS_CURSORPOSITIONSTYLEPAINTERPARAMETERS_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0xA3268F0)
#define UNITYENGINE_UIELEMENTS_CURSORPOSITIONSTYLEPAINTERPARAMETERS_GETTEXTNATIVESETTINGS_OFFSET UNITYSDK_OFFSET(0xA326D40)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CursorPositionStylePainterParameters_TypeDefinitionIndex = 30167;

	class CursorPositionStylePainterParameters : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* rect; // 0x10
		::System::String* text; // 0x20
		::UnityEngine::Font* font; // 0x28
		::System::Int32 fontSize; // 0x30
		::UnityEngine::FontStyle* fontStyle; // 0x34
		::UnityEngine::TextAnchor* anchor; // 0x38
		::System::Single wordWrapWidth; // 0x3C
		::System::Boolean richText; // 0x40
		::System::Int32 cursorIndex; // 0x44

		::UnityEngine::UIElements::CursorPositionStylePainterParameters* GetDefault(::UnityEngine::UIElements::VisualElement* arg, ::System::String* str)
		{
			return (return (::UnityEngine::UIElements::CursorPositionStylePainterParameters*(*)(::UnityEngine::UIElements::VisualElement*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSORPOSITIONSTYLEPAINTERPARAMETERS_GETDEFAULT_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::UIElements::TextNativeSettings* GetTextNativeSettings(::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::TextNativeSettings*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSORPOSITIONSTYLEPAINTERPARAMETERS_GETTEXTNATIVESETTINGS_OFFSET))(arg, nullptr);
		}

	};
}

