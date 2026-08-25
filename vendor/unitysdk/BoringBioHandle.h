#pragma once
#include "unitysdk.h"

#define BORINGBIOHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DB8B0)
#define BORINGBIOHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x96DB8D0)

	inline static constexpr unsigned int BoringBioHandle_TypeDefinitionIndex = 29090;

	class BoringBioHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BORINGBIOHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGBIOHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

