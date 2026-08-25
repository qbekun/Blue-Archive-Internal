#pragma once
#include "unitysdk.h"

#define BORINGX509LOOKUPMONOHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC1AB0)
#define BORINGX509LOOKUPMONOHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9AC1D10)

	inline static constexpr unsigned int BoringX509LookupMonoHandle_TypeDefinitionIndex = 29133;

	class BoringX509LookupMonoHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BORINGX509LOOKUPMONOHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGX509LOOKUPMONOHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

