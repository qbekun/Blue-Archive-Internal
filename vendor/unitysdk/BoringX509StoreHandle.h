#pragma once
#include "unitysdk.h"

#define BORINGX509STOREHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC2AB0)
#define BORINGX509STOREHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9AC3110)

	inline static constexpr unsigned int BoringX509StoreHandle_TypeDefinitionIndex = 29141;

	class BoringX509StoreHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BORINGX509STOREHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGX509STOREHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

