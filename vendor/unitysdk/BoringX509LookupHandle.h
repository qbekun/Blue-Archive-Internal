#pragma once
#include "unitysdk.h"

#define BORINGX509LOOKUPHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC0650)
#define BORINGX509LOOKUPHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9AC1210)

	inline static constexpr unsigned int BoringX509LookupHandle_TypeDefinitionIndex = 29131;

	class BoringX509LookupHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BORINGX509LOOKUPHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGX509LOOKUPHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

