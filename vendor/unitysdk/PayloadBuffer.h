#pragma once
#include "unitysdk.h"

#define PAYLOADBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x610920)
#define PAYLOADBUFFER_TOTRUNCATEDBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x610930)

	inline static constexpr unsigned int PayloadBuffer_TypeDefinitionIndex = 22139;

	class PayloadBuffer : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAYLOADBUFFER_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ToTruncatedByteArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PAYLOADBUFFER_TOTRUNCATEDBYTEARRAY_OFFSET))(arg, nullptr);
		}

	};

