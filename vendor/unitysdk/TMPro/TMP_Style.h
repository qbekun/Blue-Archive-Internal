#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_Style; }

#define TMPRO_TMP_STYLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA17B1B0)
#define TMPRO_TMP_STYLE_SET_HASHCODE_OFFSET UNITYSDK_OFFSET(0xA17B1C0)
#define TMPRO_TMP_STYLE_REFRESHSTYLE_OFFSET UNITYSDK_OFFSET(0xA17B1D0)
#define TMPRO_TMP_STYLE_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0xA17B4E0)
#define TMPRO_TMP_STYLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17B4F0)
#define TMPRO_TMP_STYLE_GET_STYLECLOSINGDEFINITION_OFFSET UNITYSDK_OFFSET(0xA17B590)
#define TMPRO_TMP_STYLE_GET_STYLEOPENINGDEFINITION_OFFSET UNITYSDK_OFFSET(0xA17B5A0)
#define TMPRO_TMP_STYLE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA17B5B0)
#define TMPRO_TMP_STYLE_GET_NORMALSTYLE_OFFSET UNITYSDK_OFFSET(0xA17B5F0)
#define TMPRO_TMP_STYLE_GET_STYLECLOSINGTAGARRAY_OFFSET UNITYSDK_OFFSET(0xA17B6C0)
#define TMPRO_TMP_STYLE_GET_STYLEOPENINGTAGARRAY_OFFSET UNITYSDK_OFFSET(0xA17B6D0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Style_TypeDefinitionIndex = 33726;

	class TMP_Style : public Il2CppObject
	{
	public:
		::TMPro::TMP_Style* k_NormalStyle; // 0x0
		::System::String* m_Name; // 0x10
		::System::Int32 m_HashCode; // 0x18
		::System::String* m_OpeningDefinition; // 0x20
		::System::String* m_ClosingDefinition; // 0x28
		::Il2CppArray<::System::Object*>* m_OpeningTagArray; // 0x30
		::Il2CppArray<::System::Object*>* m_ClosingTagArray; // 0x38
		::Il2CppArray<::System::Object*>* m_OpeningTagUnicodeArray; // 0x40
		::Il2CppArray<::System::Object*>* m_ClosingTagUnicodeArray; // 0x48

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_hashCode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_SET_HASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_REFRESHSTYLE_OFFSET))(nullptr);
		}

		::System::Int32 get_hashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_HASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::String* get_styleClosingDefinition()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_STYLECLOSINGDEFINITION_OFFSET))(nullptr);
		}

		::System::String* get_styleOpeningDefinition()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_STYLEOPENINGDEFINITION_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_SET_NAME_OFFSET))(str, nullptr);
		}

		::TMPro::TMP_Style* get_NormalStyle()
		{
			return (return (::TMPro::TMP_Style*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_NORMALSTYLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_styleClosingTagArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_STYLECLOSINGTAGARRAY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_styleOpeningTagArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_STYLEOPENINGTAGARRAY_OFFSET))(nullptr);
		}

	};
}

