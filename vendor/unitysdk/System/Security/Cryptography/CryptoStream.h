#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9184700)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9184720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9184A90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x9184AA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9184AB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9184AC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9184B20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9184B80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_HASFLUSHEDFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x9184BE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSHFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x9184BF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x9184E30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x9184E40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x9184FC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9185020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x9185080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x9185390)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x9185440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x9185240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x9185480)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x91854F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9185540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_CHECKREADARGUMENTS_OFFSET UNITYSDK_OFFSET(0x91850D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNCCORE_OFFSET UNITYSDK_OFFSET(0x91855F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x9185770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x9185A60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x9185B10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x9185930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9185B20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_CHECKWRITEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x91857C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNCCORE_OFFSET UNITYSDK_OFFSET(0x9185B90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_CLEAR_OFFSET UNITYSDK_OFFSET(0x9185CF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9185D10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_INITIALIZEBUFFER_OFFSET UNITYSDK_OFFSET(0x9184930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_ASYNCACTIVESEMAPHORE_OFFSET UNITYSDK_OFFSET(0x9185DE0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStream_TypeDefinitionIndex = 24305;

	class CryptoStream : public Il2CppObject
	{
	public:
		::System::IO::Stream* _stream; // 0x28
		::System::Security::Cryptography::ICryptoTransform* _transform; // 0x30
		::System::Security::Cryptography::CryptoStreamMode* _transformMode; // 0x38
		::Il2CppArray<::System::Object*>* _inputBuffer; // 0x40
		::System::Int32 _inputBufferIndex; // 0x48
		::System::Int32 _inputBlockSize; // 0x4C
		::Il2CppArray<::System::Object*>* _outputBuffer; // 0x50
		::System::Int32 _outputBufferIndex; // 0x58
		::System::Int32 _outputBlockSize; // 0x5C
		::System::Boolean _canRead; // 0x60
		::System::Boolean _canWrite; // 0x61
		::System::Boolean _finalBlockTransformed; // 0x62
		::System::Threading::SemaphoreSlim* _lazyAsyncActiveSemaphore; // 0x68
		::System::Boolean _leaveOpen; // 0x70

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Security::Cryptography::ICryptoTransform* arg, ::System::Security::Cryptography::CryptoStreamMode* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Security::Cryptography::ICryptoTransform*, ::System::Security::Cryptography::CryptoStreamMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Security::Cryptography::ICryptoTransform* arg, ::System::Security::Cryptography::CryptoStreamMode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Security::Cryptography::ICryptoTransform*, ::System::Security::Cryptography::CryptoStreamMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasFlushedFinalBlock()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_HASFLUSHEDFINALBLOCK_OFFSET))(nullptr);
		}

		::System::Void FlushFinalBlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSHFINALBLOCK_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSHASYNC_OFFSET))(arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_ENDREAD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsyncInternal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNCINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckReadArguments(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_CHECKREADARGUMENTS_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadAsyncCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNCCORE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_BEGINWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_ENDWRITE_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsyncInternal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNCINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckWriteArguments(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_CHECKWRITEARGUMENTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsyncCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNCCORE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_INITIALIZEBUFFER_OFFSET))(nullptr);
		}

		::System::Threading::SemaphoreSlim* get_AsyncActiveSemaphore()
		{
			return (return (::System::Threading::SemaphoreSlim*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_ASYNCACTIVESEMAPHORE_OFFSET))(nullptr);
		}

	};
}

