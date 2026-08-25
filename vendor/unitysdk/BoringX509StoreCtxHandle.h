#pragma once
#include "unitysdk.h"

#define BORINGX509STORECTXHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC3820)
#define BORINGX509STORECTXHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9AC45B0)

	inline static constexpr unsigned int BoringX509StoreCtxHandle_TypeDefinitionIndex = 29143;

	class BoringX509StoreCtxHandle : public Il2CppObject
	{
	public:
		::System::Boolean dontFree; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BORINGX509STORECTXHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGX509STORECTXHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

