#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C9AF0)
#define SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97B0F90)
#define SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C9B40)
#define SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C9B60)
#define SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION_SQLTYPEEXCEPTIONSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x97C9BB0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlTypeException_TypeDefinitionIndex = 32343;

	class SqlTypeException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Serialization::SerializationInfo* SqlTypeExceptionSerialization(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::System::Runtime::Serialization::SerializationInfo*(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION_SQLTYPEEXCEPTIONSERIALIZATION_OFFSET))(arg, arg, nullptr);
		}

	};
}

