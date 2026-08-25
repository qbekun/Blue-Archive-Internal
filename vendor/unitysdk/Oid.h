#pragma once
#include "unitysdk.h"

#define OID_.CTOR_OFFSET UNITYSDK_OFFSET(0x90FE680)

	inline static constexpr unsigned int Oid_TypeDefinitionIndex = 35769;

	class Oid : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + OID_.CTOR_OFFSET))(str, nullptr);
		}

	};

