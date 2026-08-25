#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class TextShadow; }
namespace UnityEngine { class Font; }
namespace UnityEngine::UIElements { class FontDefinition; }
namespace UnityEngine { class FontStyle; }
namespace UnityEngine { class TextAnchor; }
namespace UnityEngine::UIElements { class Visibility; }
namespace UnityEngine::UIElements { class WhiteSpace; }
namespace UnityEngine::UIElements { class InheritedData; }
namespace UnityEngine::UIElements { class InheritedData&; }

#define UNITYENGINE_UIELEMENTS_INHERITEDDATA_COPY_OFFSET UNITYSDK_OFFSET(0xA4195D0)
#define UNITYENGINE_UIELEMENTS_INHERITEDDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0xA4195F0)
#define UNITYENGINE_UIELEMENTS_INHERITEDDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA419620)
#define UNITYENGINE_UIELEMENTS_INHERITEDDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA419870)
#define UNITYENGINE_UIELEMENTS_INHERITEDDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4198C0)
#define UNITYENGINE_UIELEMENTS_INHERITEDDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA419970)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int InheritedData_TypeDefinitionIndex = 30633;

	class InheritedData : public Il2CppObject
	{
	public:
		::UnityEngine::Color* color; // 0x10
		::UnityEngine::UIElements::Length* fontSize; // 0x20
		::UnityEngine::UIElements::Length* letterSpacing; // 0x28
		::UnityEngine::UIElements::TextShadow* textShadow; // 0x30
		::UnityEngine::Font* unityFont; // 0x50
		::UnityEngine::UIElements::FontDefinition* unityFontDefinition; // 0x58
		::UnityEngine::FontStyle* unityFontStyleAndWeight; // 0x68
		::UnityEngine::UIElements::Length* unityParagraphSpacing; // 0x6C
		::UnityEngine::TextAnchor* unityTextAlign; // 0x74
		::UnityEngine::Color* unityTextOutlineColor; // 0x78
		::System::Single unityTextOutlineWidth; // 0x88
		::UnityEngine::UIElements::Visibility* visibility; // 0x8C
		::UnityEngine::UIElements::WhiteSpace* whiteSpace; // 0x90
		::UnityEngine::UIElements::Length* wordSpacing; // 0x94

		::UnityEngine::UIElements::InheritedData* Copy()
		{
			return (return (::UnityEngine::UIElements::InheritedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INHERITEDDATA_COPY_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::UnityEngine::UIElements::InheritedData&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::InheritedData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INHERITEDDATA_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::InheritedData* arg, ::UnityEngine::UIElements::InheritedData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::InheritedData*, ::UnityEngine::UIElements::InheritedData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INHERITEDDATA_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::InheritedData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::InheritedData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INHERITEDDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INHERITEDDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INHERITEDDATA_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

