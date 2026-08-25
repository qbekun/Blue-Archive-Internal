#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x97CA170)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x97CAB00)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x97CAC20)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x97CACC0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x97CAD60)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x97CAF30)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x97CAF80)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_SEEK_OFFSET UNITYSDK_OFFSET(0x97CB050)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_READ_OFFSET UNITYSDK_OFFSET(0x97CB190)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_WRITE_OFFSET UNITYSDK_OFFSET(0x97CB3F0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_READBYTE_OFFSET UNITYSDK_OFFSET(0x97CB650)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x97CB770)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x97CB840)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_FLUSH_OFFSET UNITYSDK_OFFSET(0x97CB8C0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97CB8E0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCANNOTSEEK_OFFSET UNITYSDK_OFFSET(0x97CAEA0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCANNOTREAD_OFFSET UNITYSDK_OFFSET(0x97CB360)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCANNOTWRITE_OFFSET UNITYSDK_OFFSET(0x97CB5C0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCLOSED_OFFSET UNITYSDK_OFFSET(0x97CADD0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_ISSTREAMCLOSED_OFFSET UNITYSDK_OFFSET(0x97CABA0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlXmlStreamWrapper_TypeDefinitionIndex = 32348;

	class SqlXmlStreamWrapper : public Il2CppObject
	{
	public:
		::System::IO::Stream* _stream; // 0x28
		::System::Int64 _lPosition; // 0x30
		::System::Boolean _isClosed; // 0x38

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_READBYTE_OFFSET))(nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowIfStreamCannotSeek(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCANNOTSEEK_OFFSET))(str, nullptr);
		}

		::System::Void ThrowIfStreamCannotRead(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCANNOTREAD_OFFSET))(str, nullptr);
		}

		::System::Void ThrowIfStreamCannotWrite(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCANNOTWRITE_OFFSET))(str, nullptr);
		}

		::System::Void ThrowIfStreamClosed(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCLOSED_OFFSET))(str, nullptr);
		}

		::System::Boolean IsStreamClosed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_ISSTREAMCLOSED_OFFSET))(nullptr);
		}

	};
}

