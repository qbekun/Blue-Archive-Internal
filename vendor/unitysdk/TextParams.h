#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Font; }
namespace UnityEngine::UIElements { class FontDefinition; }
namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine { class FontStyle; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class TextAnchor; }
namespace UnityEngine::UIElements { class TextOverflow; }
namespace UnityEngine::UIElements { class TextOverflowPosition; }
namespace UnityEngine::UIElements { class OverflowInternal; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class TextNativeSettings; }

#define TEXTPARAMS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA40B410)
#define TEXTPARAMS_MAKESTYLEBASED_OFFSET UNITYSDK_OFFSET(0xA40B770)
#define TEXTPARAMS_GETTEXTNATIVESETTINGS_OFFSET UNITYSDK_OFFSET(0xA40BBC0)

	inline static constexpr unsigned int TextParams_TypeDefinitionIndex = 30580;

	class TextParams : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* rect; // 0x10
		::System::String* text; // 0x20
		::UnityEngine::Font* font; // 0x28
		::UnityEngine::UIElements::FontDefinition* fontDefinition; // 0x30
		::System::Int32 fontSize; // 0x40
		::UnityEngine::UIElements::Length* letterSpacing; // 0x44
		::UnityEngine::UIElements::Length* wordSpacing; // 0x4C
		::UnityEngine::UIElements::Length* paragraphSpacing; // 0x54
		::UnityEngine::FontStyle* fontStyle; // 0x5C
		::UnityEngine::Color* fontColor; // 0x60
		::UnityEngine::TextAnchor* anchor; // 0x70
		::System::Boolean wordWrap; // 0x74
		::System::Single wordWrapWidth; // 0x78
		::System::Boolean richText; // 0x7C
		::UnityEngine::Color* playmodeTintColor; // 0x80
		::UnityEngine::UIElements::TextOverflow* textOverflow; // 0x90
		::UnityEngine::UIElements::TextOverflowPosition* textOverflowPosition; // 0x94
		::UnityEngine::UIElements::OverflowInternal* overflow; // 0x98
		::UnityEngine::UIElements::IPanel* panel; // 0xA0

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTPARAMS_GETHASHCODE_OFFSET))(nullptr);
		}

		TextParams* MakeStyleBased(::UnityEngine::UIElements::VisualElement* arg, ::System::String* str)
		{
			return (return (TextParams*(*)(::UnityEngine::UIElements::VisualElement*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTPARAMS_MAKESTYLEBASED_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::UIElements::TextNativeSettings* GetTextNativeSettings(TextParams* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::TextNativeSettings*(*)(TextParams*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TEXTPARAMS_GETTEXTNATIVESETTINGS_OFFSET))(arg, arg, nullptr);
		}

	};

