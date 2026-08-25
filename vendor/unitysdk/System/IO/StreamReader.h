#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_STREAMREADER_CHECKASYNCTASKINPROGRESS_OFFSET UNITYSDK_OFFSET(0x92F2740)
#define SYSTEM_IO_STREAMREADER_THROWASYNCIOINPROGRESS_OFFSET UNITYSDK_OFFSET(0x92F27F0)
#define SYSTEM_IO_STREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F2850)
#define SYSTEM_IO_STREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F2950)
#define SYSTEM_IO_STREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F2990)
#define SYSTEM_IO_STREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F2C50)
#define SYSTEM_IO_STREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F29D0)
#define SYSTEM_IO_STREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F2DD0)
#define SYSTEM_IO_STREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F2E10)
#define SYSTEM_IO_STREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F3120)
#define SYSTEM_IO_STREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F3140)
#define SYSTEM_IO_STREAMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F2E50)
#define SYSTEM_IO_STREAMREADER_INIT_OFFSET UNITYSDK_OFFSET(0x92F2C70)
#define SYSTEM_IO_STREAMREADER_INIT_OFFSET UNITYSDK_OFFSET(0x92F3160)
#define SYSTEM_IO_STREAMREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x92F3180)
#define SYSTEM_IO_STREAMREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92F31A0)
#define SYSTEM_IO_STREAMREADER_GET_CURRENTENCODING_OFFSET UNITYSDK_OFFSET(0x92F3270)
#define SYSTEM_IO_STREAMREADER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x92F3280)
#define SYSTEM_IO_STREAMREADER_GET_LEAVEOPEN_OFFSET UNITYSDK_OFFSET(0x92F3260)
#define SYSTEM_IO_STREAMREADER_GET_ENDOFSTREAM_OFFSET UNITYSDK_OFFSET(0x92F3290)
#define SYSTEM_IO_STREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x92F3330)
#define SYSTEM_IO_STREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x92F33F0)
#define SYSTEM_IO_STREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x92F34B0)
#define SYSTEM_IO_STREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x92F3910)
#define SYSTEM_IO_STREAMREADER_READSPAN_OFFSET UNITYSDK_OFFSET(0x92F3690)
#define SYSTEM_IO_STREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x92F3D70)
#define SYSTEM_IO_STREAMREADER_COMPRESSBUFFER_OFFSET UNITYSDK_OFFSET(0x92F3EA0)
#define SYSTEM_IO_STREAMREADER_DETECTENCODING_OFFSET UNITYSDK_OFFSET(0x92F3EE0)
#define SYSTEM_IO_STREAMREADER_ISPREAMBLE_OFFSET UNITYSDK_OFFSET(0x92F4170)
#define SYSTEM_IO_STREAMREADER_READBUFFER_OFFSET UNITYSDK_OFFSET(0x92F4290)
#define SYSTEM_IO_STREAMREADER_READBUFFER_OFFSET UNITYSDK_OFFSET(0x92F39D0)
#define SYSTEM_IO_STREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x92F4440)
#define SYSTEM_IO_STREAMREADER_READASYNC_OFFSET UNITYSDK_OFFSET(0x92F46B0)
#define SYSTEM_IO_STREAMREADER_READASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x92F49E0)
#define SYSTEM_IO_STREAMREADER_READBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0x92F4B90)
#define SYSTEM_IO_STREAMREADER_DATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x92F4C90)
#define SYSTEM_IO_STREAMREADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92F4CA0)

namespace System::IO
{
	inline static constexpr unsigned int StreamReader_TypeDefinitionIndex = 25241;

	class StreamReader : public Il2CppObject
	{
	public:
		::System::IO::StreamReader* Null; // 0x0
		::System::IO::Stream* _stream; // 0x18
		::System::Text::Encoding* _encoding; // 0x20
		::System::Text::Decoder* _decoder; // 0x28
		::Il2CppArray<::System::Object*>* _byteBuffer; // 0x30
		::Il2CppArray<::System::Object*>* _charBuffer; // 0x38
		::System::Int32 _charPos; // 0x40
		::System::Int32 _charLen; // 0x44
		::System::Int32 _byteLen; // 0x48
		::System::Int32 _bytePos; // 0x4C
		::System::Int32 _maxCharsPerBuffer; // 0x50
		::System::Boolean _detectEncoding; // 0x54
		::System::Boolean _checkPreamble; // 0x55
		::System::Boolean _isBlocked; // 0x56
		::System::Boolean _closable; // 0x57
		::System::Threading::Tasks::Task* _asyncReadTask; // 0x58

		::System::Void CheckAsyncTaskInProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_CHECKASYNCTASKINPROGRESS_OFFSET))(nullptr);
		}

		::System::Void ThrowAsyncIOInProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_THROWASYNCIOINPROGRESS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Text::Encoding* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Text::Encoding* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Text::Encoding*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Text::Encoding* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::IO::Stream* arg, ::System::Text::Encoding* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_INIT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Text::Encoding* get_CurrentEncoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_GET_CURRENTENCODING_OFFSET))(nullptr);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_GET_BASESTREAM_OFFSET))(nullptr);
		}

		::System::Boolean get_LeaveOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_GET_LEAVEOPEN_OFFSET))(nullptr);
		}

		::System::Boolean get_EndOfStream()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_GET_ENDOFSTREAM_OFFSET))(nullptr);
		}

		::System::Int32 Peek()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_PEEK_OFFSET))(nullptr);
		}

		::System::Int32 Read()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READ_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Read(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READ_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadSpan(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READSPAN_OFFSET))(arg, nullptr);
		}

		::System::String* ReadToEnd()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READTOEND_OFFSET))(nullptr);
		}

		::System::Void CompressBuffer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_COMPRESSBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void DetectEncoding()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_DETECTENCODING_OFFSET))(nullptr);
		}

		::System::Boolean IsPreamble()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_ISPREAMBLE_OFFSET))(nullptr);
		}

		::System::Int32 ReadBuffer()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 ReadBuffer(Il2CppObject* arg, bool&* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ReadLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READLINE_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadAsyncInternal(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READASYNCINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadBufferAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_READBUFFERASYNC_OFFSET))(nullptr);
		}

		::System::Boolean DataAvailable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_DATAAVAILABLE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

