#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970BE00)
#define SYSTEM_DATA_DATAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970BE20)
#define SYSTEM_DATA_DATAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970BE70)
#define SYSTEM_DATA_DATAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970BE90)

namespace System::Data
{
	inline static constexpr unsigned int DataException_TypeDefinitionIndex = 32167;

	class DataException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

