#pragma once
#include "unitysdk.h"

#define BORINGX509NAMEHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABEC60)
#define BORINGX509NAMEHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9AC26E0)

	inline static constexpr unsigned int BoringX509NameHandle_TypeDefinitionIndex = 29138;

	class BoringX509NameHandle : public Il2CppObject
	{
	public:
		::System::Boolean dontFree; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BORINGX509NAMEHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGX509NAMEHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

