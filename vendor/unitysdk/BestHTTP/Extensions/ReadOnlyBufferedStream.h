#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D6340)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D6350)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x8D6400)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x8D6610)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D6770)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x8D67E0)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x8D67F0)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x8D6840)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x8D6890)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x8D68E0)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x8D6930)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x8D6980)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x8D69D0)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x8D6A20)
#define BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x8D6A70)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int ReadOnlyBufferedStream_TypeDefinitionIndex = 23353;

	class ReadOnlyBufferedStream : public Il2CppObject
	{
	public:
		::System::IO::Stream* stream; // 0x28
		::System::Int32 READBUFFER; // 0x0
		::Il2CppArray<::System::Object*>* buf; // 0x30
		::System::Int32 available; // 0x38
		::System::Int32 pos; // 0x3C

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_READONLYBUFFEREDSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

