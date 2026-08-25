#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_READ_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_SEEK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlStreamChars_TypeDefinitionIndex = 32346;

	class SqlStreamChars : public Il2CppObject
	{
	public:
		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_SEEK_OFFSET))(arg, arg, nullptr);
		}

	};
}

