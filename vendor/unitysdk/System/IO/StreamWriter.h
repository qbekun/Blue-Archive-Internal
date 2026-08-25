#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_STREAMWRITER_CHECKASYNCTASKINPROGRESS_OFFSET UNITYSDK_OFFSET(0x92F66A0)
#define SYSTEM_IO_STREAMWRITER_THROWASYNCIOINPROGRESS_OFFSET UNITYSDK_OFFSET(0x92F6750)
#define SYSTEM_IO_STREAMWRITER_GET_UTF8NOBOM_OFFSET UNITYSDK_OFFSET(0x92F67B0)
#define SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F6810)
#define SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F6920)
#define SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F6C60)
#define SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F69F0)
#define SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F6DD0)
#define SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F7180)
#define SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F6EA0)
#define SYSTEM_IO_STREAMWRITER_INIT_OFFSET UNITYSDK_OFFSET(0x92F6C80)
#define SYSTEM_IO_STREAMWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x92F7250)
#define SYSTEM_IO_STREAMWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92F72B0)
#define SYSTEM_IO_STREAMWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x92F7600)
#define SYSTEM_IO_STREAMWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x92F7450)
#define SYSTEM_IO_STREAMWRITER_SET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x92F7620)
#define SYSTEM_IO_STREAMWRITER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x92F7660)
#define SYSTEM_IO_STREAMWRITER_GET_LEAVEOPEN_OFFSET UNITYSDK_OFFSET(0x92F7670)
#define SYSTEM_IO_STREAMWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x92F7680)
#define SYSTEM_IO_STREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92F7690)
#define SYSTEM_IO_STREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92F7700)
#define SYSTEM_IO_STREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92F79D0)
#define SYSTEM_IO_STREAMWRITER_WRITESPAN_OFFSET UNITYSDK_OFFSET(0x92F7E60)
#define SYSTEM_IO_STREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92F8100)
#define SYSTEM_IO_STREAMWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92F83D0)
#define SYSTEM_IO_STREAMWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x92F8730)
#define SYSTEM_IO_STREAMWRITER_WRITEASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x92F88B0)
#define SYSTEM_IO_STREAMWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x92F8A20)
#define SYSTEM_IO_STREAMWRITER_WRITEASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x92F8C30)
#define SYSTEM_IO_STREAMWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x92F8DB0)
#define SYSTEM_IO_STREAMWRITER_WRITEASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x92F90F0)
#define SYSTEM_IO_STREAMWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x92F9290)
#define SYSTEM_IO_STREAMWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x92F9440)
#define SYSTEM_IO_STREAMWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x92F95C0)
#define SYSTEM_IO_STREAMWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x92F9770)
#define SYSTEM_IO_STREAMWRITER_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x92F9AB0)
#define SYSTEM_IO_STREAMWRITER_SET_CHARPOS_PROP_OFFSET UNITYSDK_OFFSET(0x92F9DB0)
#define SYSTEM_IO_STREAMWRITER_SET_HAVEWRITTENPREAMBLE_PROP_OFFSET UNITYSDK_OFFSET(0x92F9DC0)
#define SYSTEM_IO_STREAMWRITER_FLUSHASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x92F9BE0)
#define SYSTEM_IO_STREAMWRITER_FLUSHASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x92F9DD0)
#define SYSTEM_IO_STREAMWRITER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92F9FB0)

namespace System::IO
{
	inline static constexpr unsigned int StreamWriter_TypeDefinitionIndex = 25246;

	class StreamWriter : public Il2CppObject
	{
	public:
		::System::IO::StreamWriter* Null; // 0x0
		::System::IO::Stream* _stream; // 0x30
		::System::Text::Encoding* _encoding; // 0x38
		::System::Text::Encoder* _encoder; // 0x40
		::Il2CppArray<::System::Object*>* _byteBuffer; // 0x48
		::Il2CppArray<::System::Object*>* _charBuffer; // 0x50
		::System::Int32 _charPos; // 0x58
		::System::Int32 _charLen; // 0x5C
		::System::Boolean _autoFlush; // 0x60
		::System::Boolean _haveWrittenPreamble; // 0x61
		::System::Boolean _closable; // 0x62
		::System::Threading::Tasks::Task* _asyncWriteTask; // 0x68

		::System::Void CheckAsyncTaskInProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CHECKASYNCTASKINPROGRESS_OFFSET))(nullptr);
		}

		::System::Void ThrowAsyncIOInProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_THROWASYNCIOINPROGRESS_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_UTF8NoBOM()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_GET_UTF8NOBOM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Text::Encoding* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Text::Encoding*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Text::Encoding* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Text::Encoding*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::IO::Stream* arg, ::System::Text::Encoding* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Text::Encoding*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void Flush(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_FLUSH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_AutoFlush(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_SET_AUTOFLUSH_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_GET_BASESTREAM_OFFSET))(nullptr);
		}

		::System::Boolean get_LeaveOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_GET_LEAVEOPEN_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Void Write(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteSpan(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITESPAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_OFFSET))(str, nullptr);
		}

		::System::Void WriteLine(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITELINE_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::Char arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsyncInternal(::System::IO::StreamWriter* arg, ::System::Char arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::StreamWriter*, ::System::Char, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITEASYNCINTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::String* str)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITEASYNC_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsyncInternal(::System::IO::StreamWriter* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::StreamWriter*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITEASYNCINTERNAL_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsyncInternal(::System::IO::StreamWriter* arg, Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::StreamWriter*, Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITEASYNCINTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITELINEASYNC_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::System::Char arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITELINEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::System::String* str)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITELINEASYNC_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITELINEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_FLUSHASYNC_OFFSET))(nullptr);
		}

		::System::Void set_CharPos_Prop(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_SET_CHARPOS_PROP_OFFSET))(arg, nullptr);
		}

		::System::Void set_HaveWrittenPreamble_Prop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_SET_HAVEWRITTENPREAMBLE_PROP_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsyncInternal(::System::Boolean arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_FLUSHASYNCINTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsyncInternal(::System::IO::StreamWriter* arg, ::System::Boolean arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Text::Encoding* arg, ::System::Text::Encoder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::IO::Stream* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::StreamWriter*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::System::Text::Encoding*, ::System::Text::Encoder*, ::Il2CppArray<::System::Object*>*, ::System::IO::Stream*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_FLUSHASYNCINTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

