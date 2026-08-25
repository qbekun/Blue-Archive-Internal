#pragma once
#include "unitysdk.h"

#define READONLYIPADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B91FF0)

	inline static constexpr unsigned int ReadOnlyIPAddress_TypeDefinitionIndex = 29645;

	class ReadOnlyIPAddress : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + READONLYIPADDRESS_.CTOR_OFFSET))(arg, nullptr);
		}

	};

