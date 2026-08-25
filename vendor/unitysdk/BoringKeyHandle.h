#pragma once
#include "unitysdk.h"

#define BORINGKEYHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96E0F70)
#define BORINGKEYHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x96E11F0)

	inline static constexpr unsigned int BoringKeyHandle_TypeDefinitionIndex = 29102;

	class BoringKeyHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BORINGKEYHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGKEYHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

