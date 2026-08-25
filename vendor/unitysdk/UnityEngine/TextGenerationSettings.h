#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Font; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class FontStyle; }
namespace UnityEngine { class TextAnchor; }
namespace UnityEngine { class VerticalWrapMode; }
namespace UnityEngine { class HorizontalWrapMode; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class TextGenerationSettings; }

#define UNITYENGINE_TEXTGENERATIONSETTINGS_COMPARECOLORS_OFFSET UNITYSDK_OFFSET(0xA2E5610)
#define UNITYENGINE_TEXTGENERATIONSETTINGS_COMPAREVECTOR2_OFFSET UNITYSDK_OFFSET(0xA2E5820)
#define UNITYENGINE_TEXTGENERATIONSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2E5940)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerationSettings_TypeDefinitionIndex = 37662;

	class TextGenerationSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Font* font; // 0x10
		::UnityEngine::Color* color; // 0x18
		::System::Int32 fontSize; // 0x28
		::System::Single lineSpacing; // 0x2C
		::System::Boolean richText; // 0x30
		::System::Single scaleFactor; // 0x34
		::UnityEngine::FontStyle* fontStyle; // 0x38
		::UnityEngine::TextAnchor* textAnchor; // 0x3C
		::System::Boolean alignByGeometry; // 0x40
		::System::Boolean resizeTextForBestFit; // 0x41
		::System::Int32 resizeTextMinSize; // 0x44
		::System::Int32 resizeTextMaxSize; // 0x48
		::System::Boolean updateBounds; // 0x4C
		::UnityEngine::VerticalWrapMode* verticalOverflow; // 0x50
		::UnityEngine::HorizontalWrapMode* horizontalOverflow; // 0x54
		::UnityEngine::Vector2* generationExtents; // 0x58
		::UnityEngine::Vector2* pivot; // 0x60
		::System::Boolean generateOutOfBounds; // 0x68

		::System::Boolean CompareColors(::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATIONSETTINGS_COMPARECOLORS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareVector2(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATIONSETTINGS_COMPAREVECTOR2_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::TextGenerationSettings* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATIONSETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

