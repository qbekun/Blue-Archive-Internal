#pragma once
#include "unitysdk.h"

#define EXCEPTIONUTIL_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA4E1950)

	inline static constexpr unsigned int ExceptionUtil_TypeDefinitionIndex = 34718;

	class ExceptionUtil : public Il2CppObject
	{
	public:
		::System::Void ThrowArgumentOutOfRangeException(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONUTIL_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(str, nullptr);
		}

	};

