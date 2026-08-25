#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_CONSTRAINTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970BEA0)
#define SYSTEM_DATA_CONSTRAINTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970BEC0)
#define SYSTEM_DATA_CONSTRAINTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970BF10)

namespace System::Data
{
	inline static constexpr unsigned int ConstraintException_TypeDefinitionIndex = 32168;

	class ConstraintException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

