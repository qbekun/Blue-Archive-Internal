#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class TextStyle; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0xA2E4BF0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_GET_STYLEOPENINGTAGARRAY_OFFSET UNITYSDK_OFFSET(0xA2E4C00)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_GET_STYLECLOSINGTAGARRAY_OFFSET UNITYSDK_OFFSET(0xA2E4C10)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_REFRESHSTYLE_OFFSET UNITYSDK_OFFSET(0xA2E4C20)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextStyle_TypeDefinitionIndex = 35613;

	class TextStyle : public Il2CppObject
	{
	public:
		::UnityEngine::TextCore::Text::TextStyle* k_NormalStyle; // 0x0
		::System::String* m_Name; // 0x10
		::System::Int32 m_HashCode; // 0x18
		::System::String* m_OpeningDefinition; // 0x20
		::System::String* m_ClosingDefinition; // 0x28
		::Il2CppArray<::System::Object*>* m_OpeningTagArray; // 0x30
		::Il2CppArray<::System::Object*>* m_ClosingTagArray; // 0x38
		::Il2CppArray<::System::Object*>* m_OpeningTagUnicodeArray; // 0x40
		::Il2CppArray<::System::Object*>* m_ClosingTagUnicodeArray; // 0x48

		::System::Int32 get_hashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_GET_HASHCODE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_styleOpeningTagArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_GET_STYLEOPENINGTAGARRAY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_styleClosingTagArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_GET_STYLECLOSINGTAGARRAY_OFFSET))(nullptr);
		}

		::System::Void RefreshStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_REFRESHSTYLE_OFFSET))(nullptr);
		}

	};
}

