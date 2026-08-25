#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_FTPDATASTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B97180)
#define SYSTEM_NET_FTPDATASTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B9BEC0)
#define SYSTEM_NET_FTPDATASTREAM_SYSTEM.NET.ICLOSEEX.CLOSEEX_OFFSET UNITYSDK_OFFSET(0x9B9C090)
#define SYSTEM_NET_FTPDATASTREAM_CHECKERROR_OFFSET UNITYSDK_OFFSET(0x9B9C5C0)
#define SYSTEM_NET_FTPDATASTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9B9C610)
#define SYSTEM_NET_FTPDATASTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x9B9C620)
#define SYSTEM_NET_FTPDATASTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9B9C650)
#define SYSTEM_NET_FTPDATASTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9B9C660)
#define SYSTEM_NET_FTPDATASTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9B9C690)
#define SYSTEM_NET_FTPDATASTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9B9C6C0)
#define SYSTEM_NET_FTPDATASTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x9B9C6F0)
#define SYSTEM_NET_FTPDATASTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9B9C800)
#define SYSTEM_NET_FTPDATASTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9B9C940)
#define SYSTEM_NET_FTPDATASTREAM_ASYNCREADCALLBACK_OFFSET UNITYSDK_OFFSET(0x9B9CA60)
#define SYSTEM_NET_FTPDATASTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x9B9CD00)
#define SYSTEM_NET_FTPDATASTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x9B9CF00)
#define SYSTEM_NET_FTPDATASTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x9B9D0E0)
#define SYSTEM_NET_FTPDATASTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x9B9D210)
#define SYSTEM_NET_FTPDATASTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x9B9D300)
#define SYSTEM_NET_FTPDATASTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9B9D330)
#define SYSTEM_NET_FTPDATASTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9B9D360)
#define SYSTEM_NET_FTPDATASTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9B9D390)
#define SYSTEM_NET_FTPDATASTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9B9D3C0)
#define SYSTEM_NET_FTPDATASTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x9B9D3F0)
#define SYSTEM_NET_FTPDATASTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x9B9D420)
#define SYSTEM_NET_FTPDATASTREAM_SETSOCKETTIMEOUTOPTION_OFFSET UNITYSDK_OFFSET(0x9B9D450)

namespace System::Net
{
	inline static constexpr unsigned int FtpDataStream_TypeDefinitionIndex = 29659;

	class FtpDataStream : public Il2CppObject
	{
	public:
		::System::Net::FtpWebRequest* _request; // 0x28
		::System::Net::Sockets::NetworkStream* _networkStream; // 0x30
		::System::Boolean _writeable; // 0x38
		::System::Boolean _readable; // 0x39
		::System::Boolean _isFullyRead; // 0x3A
		::System::Boolean _closing; // 0x3B

		::System::Void .ctor(::System::Net::Sockets::NetworkStream* arg, ::System::Net::FtpWebRequest* arg, ::System::Net::TriState* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::NetworkStream*, ::System::Net::FtpWebRequest*, ::System::Net::TriState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void System.Net.ICloseEx.CloseEx(::System::Net::CloseExState* arg)
		{
			((::System::Void(*)(::System::Net::CloseExState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SYSTEM.NET.ICLOSEEX.CLOSEEX_OFFSET))(arg, nullptr);
		}

		::System::Void CheckError()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_CHECKERROR_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AsyncReadCallback(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_ASYNCREADCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_ENDREAD_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_BEGINWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_ENDWRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanTimeout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_CANTIMEOUT_OFFSET))(nullptr);
		}

		::System::Int32 get_ReadTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_READTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_ReadTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SET_READTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WriteTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_GET_WRITETIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_WriteTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SET_WRITETIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void SetSocketTimeoutOption(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_SETSOCKETTIMEOUTOPTION_OFFSET))(arg, nullptr);
		}

	};
}

