#pragma once
#include "unitysdk.h"

#define BORINGPKCS12HANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96E1BB0)
#define BORINGPKCS12HANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x96E22E0)

	inline static constexpr unsigned int BoringPkcs12Handle_TypeDefinitionIndex = 29106;

	class BoringPkcs12Handle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BORINGPKCS12HANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGPKCS12HANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

