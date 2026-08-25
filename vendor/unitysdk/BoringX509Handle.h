#pragma once
#include "unitysdk.h"

#define BORINGX509HANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB9C90)
#define BORINGX509HANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9ABF4A0)
#define BORINGX509HANDLE_STEALHANDLE_OFFSET UNITYSDK_OFFSET(0x9ABF560)

	inline static constexpr unsigned int BoringX509Handle_TypeDefinitionIndex = 29124;

	class BoringX509Handle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BORINGX509HANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGX509HANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

		::System::Int32 StealHandle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGX509HANDLE_STEALHANDLE_OFFSET))(nullptr);
		}

	};

