#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_EXCEPTIONUTIL_THROWFORMATEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA4CB830)
#define CYSHARP_TEXT_EXCEPTIONUTIL_THROWFORMATERROR_OFFSET UNITYSDK_OFFSET(0xA4CB890)
#define CYSHARP_TEXT_EXCEPTIONUTIL_THROWARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA4CB8F0)

namespace Cysharp::Text
{
	inline static constexpr unsigned int ExceptionUtil_TypeDefinitionIndex = 34670;

	class ExceptionUtil : public Il2CppObject
	{
	public:
		::System::Void ThrowFormatException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_EXCEPTIONUTIL_THROWFORMATEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void ThrowFormatError()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_EXCEPTIONUTIL_THROWFORMATERROR_OFFSET))(nullptr);
		}

		::System::Void ThrowArgumentException(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_EXCEPTIONUTIL_THROWARGUMENTEXCEPTION_OFFSET))(str, nullptr);
		}

	};
}

