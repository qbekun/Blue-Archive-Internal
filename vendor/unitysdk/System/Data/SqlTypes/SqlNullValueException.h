#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97AF310)
#define SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C9C90)
#define SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C9C70)
#define SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C9CB0)
#define SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION_SQLNULLVALUEEXCEPTIONSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x97C9D20)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlNullValueException_TypeDefinitionIndex = 32344;

	class SqlNullValueException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Serialization::SerializationInfo* SqlNullValueExceptionSerialization(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::System::Runtime::Serialization::SerializationInfo*(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION_SQLNULLVALUEEXCEPTIONSERIALIZATION_OFFSET))(arg, arg, nullptr);
		}

	};
}

