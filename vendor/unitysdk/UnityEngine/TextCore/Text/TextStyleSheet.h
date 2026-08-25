#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class TextStyle; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_GET_STYLES_OFFSET UNITYSDK_OFFSET(0xA2E4E40)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_GETSTYLE_OFFSET UNITYSDK_OFFSET(0xA2E4E50)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_GETSTYLE_OFFSET UNITYSDK_OFFSET(0xA2E5090)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_REFRESHSTYLES_OFFSET UNITYSDK_OFFSET(0xA2E5110)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_LOADSTYLEDICTIONARYINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2E4ED0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E5120)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextStyleSheet_TypeDefinitionIndex = 35614;

	class TextStyleSheet : public Il2CppObject
	{
	public:
		Il2CppObject* m_StyleList; // 0x18
		Il2CppObject* m_StyleLookupDictionary; // 0x20

		Il2CppObject* get_styles()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_GET_STYLES_OFFSET))(nullptr);
		}

		::UnityEngine::TextCore::Text::TextStyle* GetStyle(::System::Int32 arg)
		{
			return (return (::UnityEngine::TextCore::Text::TextStyle*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_GETSTYLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Text::TextStyle* GetStyle(::System::String* str)
		{
			return (return (::UnityEngine::TextCore::Text::TextStyle*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_GETSTYLE_OFFSET))(str, nullptr);
		}

		::System::Void RefreshStyles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_REFRESHSTYLES_OFFSET))(nullptr);
		}

		::System::Void LoadStyleDictionaryInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_LOADSTYLEDICTIONARYINTERNAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_.CTOR_OFFSET))(nullptr);
		}

	};
}

