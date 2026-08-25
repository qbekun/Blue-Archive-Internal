#pragma once
#include "unitysdk.h"

#define FAILINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x940860)

	inline static constexpr unsigned int FailInfo_TypeDefinitionIndex = 21641;

	class FailInfo : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FAILINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};

