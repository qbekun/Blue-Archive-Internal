#pragma once
#include "unitysdk.h"

#define NOTSUPPORTEDPROTOCOLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1CD90)

	inline static constexpr unsigned int NotSupportedProtocolException_TypeDefinitionIndex = 26645;

	class NotSupportedProtocolException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NOTSUPPORTEDPROTOCOLEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

	};

