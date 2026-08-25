#pragma once
#include "unitysdk.h"

#define BORINGX509VERIFYPARAMHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC5010)
#define BORINGX509VERIFYPARAMHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9AC59F0)

	inline static constexpr unsigned int BoringX509VerifyParamHandle_TypeDefinitionIndex = 29148;

	class BoringX509VerifyParamHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BORINGX509VERIFYPARAMHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGX509VERIFYPARAMHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

