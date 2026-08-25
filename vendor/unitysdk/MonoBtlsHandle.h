#pragma once
#include "unitysdk.h"

#define MONOBTLSHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DB8C0)
#define MONOBTLSHANDLE_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x96E1620)

	inline static constexpr unsigned int MonoBtlsHandle_TypeDefinitionIndex = 29104;

	class MonoBtlsHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONOBTLSHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsInvalid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOBTLSHANDLE_GET_ISINVALID_OFFSET))(nullptr);
		}

	};

