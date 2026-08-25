#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x94B7DC0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET UNITYSDK_OFFSET(0x94B7DD0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET UNITYSDK_OFFSET(0x94B7F20)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET UNITYSDK_OFFSET(0x94B8010)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET UNITYSDK_OFFSET(0x94B8150)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET UNITYSDK_OFFSET(0x94B7E80)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x94B8330)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_CREATESTRINGWRITER_OFFSET UNITYSDK_OFFSET(0x94B8410)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOCHARASUNICODE_OFFSET UNITYSDK_OFFSET(0x94B84D0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORGIVINGCASESENSITIVEFIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOCAMELCASE_OFFSET UNITYSDK_OFFSET(0x94B8570)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOLOWER_OFFSET UNITYSDK_OFFSET(0x94B89B0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOSNAKECASE_OFFSET UNITYSDK_OFFSET(0x94B8A30)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOKEBABCASE_OFFSET UNITYSDK_OFFSET(0x94B8DB0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOSEPARATEDCASE_OFFSET UNITYSDK_OFFSET(0x94B8A40)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISHIGHSURROGATE_OFFSET UNITYSDK_OFFSET(0x94B8DC0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISLOWSURROGATE_OFFSET UNITYSDK_OFFSET(0x94B8E10)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x94B8E60)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_REPLACE_OFFSET UNITYSDK_OFFSET(0x94B8E80)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x94B8EA0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ENDSWITH_OFFSET UNITYSDK_OFFSET(0x94B8EE0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TRIM_OFFSET UNITYSDK_OFFSET(0x94B8F20)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int StringUtils_TypeDefinitionIndex = 31900;

	class StringUtils : public Il2CppObject
	{
	public:
		::System::String* CarriageReturnLineFeed; // 0x0
		::System::String* Empty; // 0x0
		::System::Char CarriageReturn; // 0x0
		::System::Char LineFeed; // 0x0
		::System::Char Tab; // 0x0

		::System::Boolean IsNullOrEmpty(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISNULLOREMPTY_OFFSET))(str, nullptr);
		}

		::System::String* FormatWith(::System::String* str, ::System::IFormatProvider* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* FormatWith(::System::String* str, ::System::IFormatProvider* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* FormatWith(::System::String* str, ::System::IFormatProvider* arg, ::System::Object* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::System::Object*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::String* FormatWith(::System::String* str, ::System::IFormatProvider* arg, ::System::Object* arg, ::System::Object* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* FormatWith(::System::String* str, ::System::IFormatProvider* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean IsWhiteSpace(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::IO::StringWriter* CreateStringWriter(::System::Int32 arg)
		{
			return (return (::System::IO::StringWriter*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_CREATESTRINGWRITER_OFFSET))(arg, nullptr);
		}

		::System::Void ToCharAsUnicode(::System::Char arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Char, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOCHARASUNICODE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ForgivingCaseSensitiveFind(Il2CppObject* arg, Il2CppObject* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORGIVINGCASESENSITIVEFIND_OFFSET))(arg, arg, str, nullptr);
		}

		::System::String* ToCamelCase(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOCAMELCASE_OFFSET))(str, nullptr);
		}

		::System::Char ToLower(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOLOWER_OFFSET))(arg, nullptr);
		}

		::System::String* ToSnakeCase(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOSNAKECASE_OFFSET))(str, nullptr);
		}

		::System::String* ToKebabCase(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOKEBABCASE_OFFSET))(str, nullptr);
		}

		::System::String* ToSeparatedCase(::System::String* str, ::System::Char arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOSEPARATEDCASE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsHighSurrogate(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISHIGHSURROGATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLowSurrogate(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISLOWSURROGATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::System::String* str, ::System::Char arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_INDEXOF_OFFSET))(str, arg, nullptr);
		}

		::System::String* Replace(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_REPLACE_OFFSET))(str, str, str, nullptr);
		}

		::System::Boolean StartsWith(::System::String* str, ::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_STARTSWITH_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean EndsWith(::System::String* str, ::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ENDSWITH_OFFSET))(str, arg, nullptr);
		}

		::System::String* Trim(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TRIM_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

