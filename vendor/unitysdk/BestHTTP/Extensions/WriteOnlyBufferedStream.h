#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D7C10)
#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x8D7CC0)
#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x8D7CD0)
#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x8D7CF0)
#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x8D7D00)
#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x8D7D10)
#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x8D7D20)
#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D7D30)
#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x8D7DB0)
#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x8D7EA0)
#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x8D7F00)
#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x8D7F10)
#define BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x8D7F20)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int WriteOnlyBufferedStream_TypeDefinitionIndex = 23357;

	class WriteOnlyBufferedStream : public Il2CppObject
	{
	public:
		::System::Int32 _position; // 0x28
		::Il2CppArray<::System::Object*>* buffer; // 0x30
		::System::IO::Stream* stream; // 0x38

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_WRITEONLYBUFFEREDSTREAM_FLUSH_OFFSET))(nullptr);
		}

	};
}

