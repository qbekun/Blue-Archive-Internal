#pragma once
#include "unitysdk.h"

#define BORINGX509CHAINHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABFA10)
#define BORINGX509CHAINHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9AC0070)

	inline static constexpr unsigned int BoringX509ChainHandle_TypeDefinitionIndex = 29126;

	class BoringX509ChainHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BORINGX509CHAINHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGX509CHAINHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

