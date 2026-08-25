#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_UTF16PREPAREDFORMAT`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_TEXT_UTF16PREPAREDFORMAT`2_FORMATTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_TEXT_UTF16PREPAREDFORMAT`2_FORMAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_TEXT_UTF16PREPAREDFORMAT`2_GET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_TEXT_UTF16PREPAREDFORMAT`2_GET_FORMATSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Text
{
	inline static constexpr unsigned int Utf16PreparedFormat`2_TypeDefinitionIndex = 34680;

	class Utf16PreparedFormat`2 : public Il2CppObject
	{
	public:
		::System::String* _FormatString_k__BackingField; // 0x0
		::System::Int32 _MinSize_k__BackingField; // 0x0
		::Il2CppArray<::System::Object*>* segments; // 0x0

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF16PREPAREDFORMAT`2_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void FormatTo(Il2CppObject&* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF16PREPAREDFORMAT`2_FORMATTO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Format(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF16PREPAREDFORMAT`2_FORMAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_MinSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF16PREPAREDFORMAT`2_GET_MINSIZE_OFFSET))(nullptr);
		}

		::System::String* get_FormatString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF16PREPAREDFORMAT`2_GET_FORMATSTRING_OFFSET))(nullptr);
		}

	};
}

