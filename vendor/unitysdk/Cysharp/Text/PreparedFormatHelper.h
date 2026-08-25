#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_PREPAREDFORMATHELPER_UTF16PARSE_OFFSET UNITYSDK_OFFSET(0xA4CD190)
#define CYSHARP_TEXT_PREPAREDFORMATHELPER_UTF8PARSE_OFFSET UNITYSDK_OFFSET(0xA4CD810)

namespace Cysharp::Text
{
	inline static constexpr unsigned int PreparedFormatHelper_TypeDefinitionIndex = 34711;

	class PreparedFormatHelper : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Utf16Parse(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_PREPAREDFORMATHELPER_UTF16PARSE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* Utf8Parse(::System::String* str, ::System::Object[]&* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_PREPAREDFORMATHELPER_UTF8PARSE_OFFSET))(str, arg, nullptr);
		}

	};
}

