#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Font; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine::UIElements { class FontDefinition; }

#define UNITYENGINE_UIELEMENTS_FONTDEFINITION_GET_FONT_OFFSET UNITYSDK_OFFSET(0xA4112D0)
#define UNITYENGINE_UIELEMENTS_FONTDEFINITION_GET_FONTASSET_OFFSET UNITYSDK_OFFSET(0xA4112E0)
#define UNITYENGINE_UIELEMENTS_FONTDEFINITION_FROMFONT_OFFSET UNITYSDK_OFFSET(0xA4112F0)
#define UNITYENGINE_UIELEMENTS_FONTDEFINITION_FROMSDFFONT_OFFSET UNITYSDK_OFFSET(0xA411330)
#define UNITYENGINE_UIELEMENTS_FONTDEFINITION_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0xA411370)
#define UNITYENGINE_UIELEMENTS_FONTDEFINITION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA4114D0)
#define UNITYENGINE_UIELEMENTS_FONTDEFINITION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA411560)
#define UNITYENGINE_UIELEMENTS_FONTDEFINITION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4115E0)
#define UNITYENGINE_UIELEMENTS_FONTDEFINITION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA411620)
#define UNITYENGINE_UIELEMENTS_FONTDEFINITION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA40B6A0)
#define UNITYENGINE_UIELEMENTS_FONTDEFINITION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA4116B0)
#define UNITYENGINE_UIELEMENTS_FONTDEFINITION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA411700)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FontDefinition_TypeDefinitionIndex = 30601;

	class FontDefinition : public Il2CppObject
	{
	public:
		::UnityEngine::Font* m_Font; // 0x10
		::UnityEngine::TextCore::Text::FontAsset* m_FontAsset; // 0x18

		::UnityEngine::Font* get_font()
		{
			return (return (::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FONTDEFINITION_GET_FONT_OFFSET))(nullptr);
		}

		::UnityEngine::TextCore::Text::FontAsset* get_fontAsset()
		{
			return (return (::UnityEngine::TextCore::Text::FontAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FONTDEFINITION_GET_FONTASSET_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::FontDefinition* FromFont(::UnityEngine::Font* arg)
		{
			return (return (::UnityEngine::UIElements::FontDefinition*(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FONTDEFINITION_FROMFONT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::FontDefinition* FromSDFFont(::UnityEngine::TextCore::Text::FontAsset* arg)
		{
			return (return (::UnityEngine::UIElements::FontDefinition*(*)(::UnityEngine::TextCore::Text::FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FONTDEFINITION_FROMSDFFONT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::FontDefinition* FromObject(::System::Object* arg)
		{
			return (return (::UnityEngine::UIElements::FontDefinition*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FONTDEFINITION_FROMOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FONTDEFINITION_ISEMPTY_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FONTDEFINITION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::FontDefinition* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::FontDefinition*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FONTDEFINITION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FONTDEFINITION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FONTDEFINITION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::FontDefinition* arg, ::UnityEngine::UIElements::FontDefinition* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::FontDefinition*, ::UnityEngine::UIElements::FontDefinition*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FONTDEFINITION_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::UIElements::FontDefinition* arg, ::UnityEngine::UIElements::FontDefinition* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::FontDefinition*, ::UnityEngine::UIElements::FontDefinition*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FONTDEFINITION_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};
}

