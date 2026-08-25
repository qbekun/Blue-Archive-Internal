#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_INVALIDDATAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B88240)
#define SYSTEM_IO_INVALIDDATAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B88290)
#define SYSTEM_IO_INVALIDDATAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B882B0)

namespace System::IO
{
	inline static constexpr unsigned int InvalidDataException_TypeDefinitionIndex = 29624;

	class InvalidDataException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_INVALIDDATAEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_INVALIDDATAEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_INVALIDDATAEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

