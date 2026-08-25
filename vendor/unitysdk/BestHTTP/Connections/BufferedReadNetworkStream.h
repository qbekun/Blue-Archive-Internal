#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Extensions { class ReadOnlyBufferedStream; }

#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x9025D0)
#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x902620)
#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9026D0)
#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x902720)
#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x902750)
#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9027A0)
#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9027F0)
#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x902840)
#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x902870)
#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9028C0)
#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x902910)
#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x902950)
#define BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x9029A0)

namespace BestHTTP::Connections
{
	inline static constexpr unsigned int BufferedReadNetworkStream_TypeDefinitionIndex = 23425;

	class BufferedReadNetworkStream : public Il2CppObject
	{
	public:
		::BestHTTP::Extensions::ReadOnlyBufferedStream* readStream; // 0x28
		::System::IO::Stream* innerStream; // 0x30

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_CLOSE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_BUFFEREDREADNETWORKSTREAM_FLUSH_OFFSET))(nullptr);
		}

	};
}

