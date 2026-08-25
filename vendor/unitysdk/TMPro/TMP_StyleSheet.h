#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_Style; }

#define TMPRO_TMP_STYLESHEET_GET_STYLES_OFFSET UNITYSDK_OFFSET(0xA17B6E0)
#define TMPRO_TMP_STYLESHEET_RESET_OFFSET UNITYSDK_OFFSET(0xA17B6F0)
#define TMPRO_TMP_STYLESHEET_GETSTYLE_OFFSET UNITYSDK_OFFSET(0xA17BA20)
#define TMPRO_TMP_STYLESHEET_GETSTYLE_OFFSET UNITYSDK_OFFSET(0xA17BAA0)
#define TMPRO_TMP_STYLESHEET_REFRESHSTYLES_OFFSET UNITYSDK_OFFSET(0xA17BB70)
#define TMPRO_TMP_STYLESHEET_LOADSTYLEDICTIONARYINTERNAL_OFFSET UNITYSDK_OFFSET(0xA17B700)
#define TMPRO_TMP_STYLESHEET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17BB80)

namespace TMPro
{
	inline static constexpr unsigned int TMP_StyleSheet_TypeDefinitionIndex = 33727;

	class TMP_StyleSheet : public Il2CppObject
	{
	public:
		Il2CppObject* m_StyleList; // 0x18
		Il2CppObject* m_StyleLookupDictionary; // 0x20

		Il2CppObject* get_styles()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_GET_STYLES_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_RESET_OFFSET))(nullptr);
		}

		::TMPro::TMP_Style* GetStyle(::System::Int32 arg)
		{
			return (return (::TMPro::TMP_Style*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_GETSTYLE_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_Style* GetStyle(::System::String* str)
		{
			return (return (::TMPro::TMP_Style*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_GETSTYLE_OFFSET))(str, nullptr);
		}

		::System::Void RefreshStyles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_REFRESHSTYLES_OFFSET))(nullptr);
		}

		::System::Void LoadStyleDictionaryInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_LOADSTYLEDICTIONARYINTERNAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_.CTOR_OFFSET))(nullptr);
		}

	};
}

