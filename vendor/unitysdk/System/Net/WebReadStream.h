#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBREADSTREAM_GET_OPERATION_OFFSET UNITYSDK_OFFSET(0x9A86AC0)
#define SYSTEM_NET_WEBREADSTREAM_GET_INNERSTREAM_OFFSET UNITYSDK_OFFSET(0x9A86AD0)
#define SYSTEM_NET_WEBREADSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A86AE0)
#define SYSTEM_NET_WEBREADSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9A86B60)
#define SYSTEM_NET_WEBREADSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9A86BB0)
#define SYSTEM_NET_WEBREADSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9A86C00)
#define SYSTEM_NET_WEBREADSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x9A86C50)
#define SYSTEM_NET_WEBREADSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9A86C60)
#define SYSTEM_NET_WEBREADSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9A86C70)
#define SYSTEM_NET_WEBREADSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9A86C80)
#define SYSTEM_NET_WEBREADSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x9A86CD0)
#define SYSTEM_NET_WEBREADSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9A86D20)
#define SYSTEM_NET_WEBREADSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x9A86D70)
#define SYSTEM_NET_WEBREADSTREAM_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9A86DC0)
#define SYSTEM_NET_WEBREADSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9A86F40)
#define SYSTEM_NET_WEBREADSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x9A87230)
#define SYSTEM_NET_WEBREADSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x9A87470)
#define SYSTEM_NET_WEBREADSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x9A875B0)
#define SYSTEM_NET_WEBREADSTREAM_PROCESSREADASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_WEBREADSTREAM_FINISHREADING_OFFSET UNITYSDK_OFFSET(0x9A87710)
#define SYSTEM_NET_WEBREADSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A87830)

namespace System::Net
{
	inline static constexpr unsigned int WebReadStream_TypeDefinitionIndex = 29818;

	class WebReadStream : public Il2CppObject
	{
	public:
		::System::Net::WebOperation* _Operation_k__BackingField; // 0x28
		::System::IO::Stream* _InnerStream_k__BackingField; // 0x30
		::System::Boolean disposed; // 0x38

		::System::Net::WebOperation* get_Operation()
		{
			return (return (::System::Net::WebOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_GET_OPERATION_OFFSET))(nullptr);
		}

		::System::IO::Stream* get_InnerStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_GET_INNERSTREAM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::WebOperation* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Exception* GetException(::System::Exception* arg)
		{
			return (return (::System::Exception*(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_GETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_ENDREAD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_READASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ProcessReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_PROCESSREADASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_FINISHREADING_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREADSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

