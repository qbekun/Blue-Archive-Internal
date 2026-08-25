#pragma once
#include "unitysdk.h"

#define BORINGSSLCTXHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABB460)
#define BORINGSSLCTXHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9ABD240)

	inline static constexpr unsigned int BoringSslCtxHandle_TypeDefinitionIndex = 29115;

	class BoringSslCtxHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BORINGSSLCTXHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGSSLCTXHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

