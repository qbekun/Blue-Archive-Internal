#pragma once
#include "unitysdk.h"

#define NULLSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x93168F0)
#define NULLSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9316B70)
#define NULLSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9316B80)
#define NULLSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x9316B90)
#define NULLSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9316BA0)
#define NULLSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9316BB0)
#define NULLSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9316BC0)
#define NULLSTREAM_COPYTO_OFFSET UNITYSDK_OFFSET(0x9316BD0)
#define NULLSTREAM_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x9316BE0)
#define NULLSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9316D00)
#define NULLSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x9316D10)
#define NULLSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x9316D20)
#define NULLSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x9316E20)
#define NULLSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x9316EB0)
#define NULLSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x9316F50)
#define NULLSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x9316FE0)
#define NULLSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9317080)
#define NULLSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9317090)
#define NULLSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x93170A0)
#define NULLSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x93170F0)
#define NULLSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x9317140)
#define NULLSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9317150)
#define NULLSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9317160)
#define NULLSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x9317170)
#define NULLSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x9317270)
#define NULLSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x9317340)
#define NULLSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x9317350)
#define NULLSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9317360)
#define NULLSTREAM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9317370)

	inline static constexpr unsigned int NullStream_TypeDefinitionIndex = 25281;

	class NullStream : public Il2CppObject
	{
	public:
		Il2CppObject* s_zeroTask; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_COPYTOASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_FLUSHASYNC_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_ENDREAD_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_BEGINWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_ENDWRITE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Read(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_READ_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_READASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_READASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_WRITEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::ValueTask* WriteAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::ValueTask*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_WRITEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NULLSTREAM_.CCTOR_OFFSET))(nullptr);
		}

	};

