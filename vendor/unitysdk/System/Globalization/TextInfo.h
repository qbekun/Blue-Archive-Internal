#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_INVARIANT_OFFSET UNITYSDK_OFFSET(0x92A24B0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x92A2A70)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x92A2AE0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x92A2B20)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x92A2C70)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x92A2C80)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_CULTURENAME_OFFSET UNITYSDK_OFFSET(0x92A2D10)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x92A2D20)
#define SYSTEM_GLOBALIZATION_TEXTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x92A2D30)
#define SYSTEM_GLOBALIZATION_TEXTINFO_READONLY_OFFSET UNITYSDK_OFFSET(0x92A2DB0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_SETREADONLYSTATE_OFFSET UNITYSDK_OFFSET(0x92A2E90)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_OFFSET UNITYSDK_OFFSET(0x92A2EA0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_OFFSET UNITYSDK_OFFSET(0x92A3500)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERASCIIINVARIANT_OFFSET UNITYSDK_OFFSET(0x92A3000)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_OFFSET UNITYSDK_OFFSET(0x92A3650)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_OFFSET UNITYSDK_OFFSET(0x92A3BE0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERASCIIINVARIANT_OFFSET UNITYSDK_OFFSET(0x92A36A0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ISASCII_OFFSET UNITYSDK_OFFSET(0x92A2EF0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISASCIICASINGSAMEASINVARIANT_OFFSET UNITYSDK_OFFSET(0x92A2F00)
#define SYSTEM_GLOBALIZATION_TEXTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x92A3D30)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92A3DC0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92A3DF0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOTITLECASE_OFFSET UNITYSDK_OFFSET(0x92A3E40)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ADDNONLETTER_OFFSET UNITYSDK_OFFSET(0x92A4320)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ADDTITLECASELETTER_OFFSET UNITYSDK_OFFSET(0x92A41C0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ISWORDSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A4310)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ISLETTERCATEGORY_OFFSET UNITYSDK_OFFSET(0x92A4300)
#define SYSTEM_GLOBALIZATION_TEXTINFO_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x92A43B0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_OFFSET UNITYSDK_OFFSET(0x92A3C50)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_OFFSET UNITYSDK_OFFSET(0x92A3570)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_OFFSET UNITYSDK_OFFSET(0x92A36C0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_OFFSET UNITYSDK_OFFSET(0x92A3020)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERASCIIINVARIANT_OFFSET UNITYSDK_OFFSET(0x92A43C0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_CHANGECASE_OFFSET UNITYSDK_OFFSET(0x92A4440)
#define SYSTEM_GLOBALIZATION_TEXTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x92A4580)

namespace System::Globalization
{
	inline static constexpr unsigned int TextInfo_TypeDefinitionIndex = 24998;

	class TextInfo : public Il2CppObject
	{
	public:
		::System::String* m_listSeparator; // 0x10
		::System::Boolean m_isReadOnly; // 0x18
		::System::String* m_cultureName; // 0x20
		::System::Globalization::CultureData* m_cultureData; // 0x28
		::System::String* m_textInfoName; // 0x30
		Il2CppObject* m_IsAsciiCasingSameAsInvariant; // 0x38
		::System::Globalization::TextInfo* s_Invariant; // 0x0
		::System::String* customCultureName; // 0x40
		::System::Int32 m_nDataItem; // 0x48
		::System::Boolean m_useUserOverride; // 0x4C
		::System::Int32 m_win32LangID; // 0x50
		::System::Int32 wordSeparatorMask; // 0x0

		::System::Globalization::TextInfo* get_Invariant()
		{
			return (return (::System::Globalization::TextInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_INVARIANT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Globalization::CultureData* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZING_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeserialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_OFFSET))(nullptr);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONSERIALIZING_OFFSET))(arg, nullptr);
		}

		::System::String* get_CultureName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_CULTURENAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_CLONE_OFFSET))(nullptr);
		}

		::System::Globalization::TextInfo* ReadOnly(::System::Globalization::TextInfo* arg)
		{
			return (return (::System::Globalization::TextInfo*(*)(::System::Globalization::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_READONLY_OFFSET))(arg, nullptr);
		}

		::System::Void SetReadOnlyState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_SETREADONLYSTATE_OFFSET))(arg, nullptr);
		}

		::System::Char ToLower(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_OFFSET))(arg, nullptr);
		}

		::System::String* ToLower(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_OFFSET))(str, nullptr);
		}

		::System::Char ToLowerAsciiInvariant(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERASCIIINVARIANT_OFFSET))(arg, nullptr);
		}

		::System::Char ToUpper(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_OFFSET))(arg, nullptr);
		}

		::System::String* ToUpper(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_OFFSET))(str, nullptr);
		}

		::System::Char ToUpperAsciiInvariant(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERASCIIINVARIANT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAscii(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ISASCII_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAsciiCasingSameAsInvariant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISASCIICASINGSAMEASINVARIANT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToTitleCase(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOTITLECASE_OFFSET))(str, nullptr);
		}

		::System::Int32 AddNonLetter(::System::Text::StringBuilder&* arg, ::System::String&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Text::StringBuilder&*, ::System::String&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ADDNONLETTER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 AddTitlecaseLetter(::System::Text::StringBuilder&* arg, ::System::String&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Text::StringBuilder&*, ::System::String&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ADDTITLECASELETTER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsWordSeparator(::System::Globalization::UnicodeCategory* arg)
		{
			return (return (::System::Boolean(*)(::System::Globalization::UnicodeCategory*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ISWORDSEPARATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLetterCategory(::System::Globalization::UnicodeCategory* arg)
		{
			return (return (::System::Boolean(*)(::System::Globalization::UnicodeCategory*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ISLETTERCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::String* ToUpperInternal(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_OFFSET))(str, nullptr);
		}

		::System::String* ToLowerInternal(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_OFFSET))(str, nullptr);
		}

		::System::Char ToUpperInternal(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Char ToLowerInternal(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void ToUpperAsciiInvariant(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERASCIIINVARIANT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ChangeCase(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_CHANGECASE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

