#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLTRUNCATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97BA5D0)
#define SYSTEM_DATA_SQLTYPES_SQLTRUNCATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C9E00)
#define SYSTEM_DATA_SQLTYPES_SQLTRUNCATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C9DE0)
#define SYSTEM_DATA_SQLTYPES_SQLTRUNCATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C9E20)
#define SYSTEM_DATA_SQLTYPES_SQLTRUNCATEEXCEPTION_SQLTRUNCATEEXCEPTIONSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x97C9E90)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlTruncateException_TypeDefinitionIndex = 32345;

	class SqlTruncateException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTRUNCATEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTRUNCATEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTRUNCATEEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTRUNCATEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Serialization::SerializationInfo* SqlTruncateExceptionSerialization(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::System::Runtime::Serialization::SerializationInfo*(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTRUNCATEEXCEPTION_SQLTRUNCATEEXCEPTIONSERIALIZATION_OFFSET))(arg, arg, nullptr);
		}

	};
}

