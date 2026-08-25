#pragma once
#include "unitysdk.h"

#define CLIPPEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2881FA0)

	inline static constexpr unsigned int ClipperException_TypeDefinitionIndex = 34398;

	class ClipperException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEREXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

	};

