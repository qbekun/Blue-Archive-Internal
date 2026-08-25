#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_INVALIDCONSTRAINTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970C0E0)
#define SYSTEM_DATA_INVALIDCONSTRAINTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970C100)
#define SYSTEM_DATA_INVALIDCONSTRAINTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x970C150)

namespace System::Data
{
	inline static constexpr unsigned int InvalidConstraintException_TypeDefinitionIndex = 32172;

	class InvalidConstraintException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INVALIDCONSTRAINTEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INVALIDCONSTRAINTEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INVALIDCONSTRAINTEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

