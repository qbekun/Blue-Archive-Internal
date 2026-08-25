#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DUPLICATENAMEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970BFC0)
#define SYSTEM_DATA_DUPLICATENAMEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970BFE0)
#define SYSTEM_DATA_DUPLICATENAMEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970C030)

namespace System::Data
{
	inline static constexpr unsigned int DuplicateNameException_TypeDefinitionIndex = 32170;

	class DuplicateNameException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DUPLICATENAMEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DUPLICATENAMEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DUPLICATENAMEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

