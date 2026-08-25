#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_TEXTREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92FBEF0)
#define SYSTEM_IO_TEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x92FBF00)
#define SYSTEM_IO_TEXTREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92FBF60)
#define SYSTEM_IO_TEXTREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92FBFC0)
#define SYSTEM_IO_TEXTREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x92FBFD0)
#define SYSTEM_IO_TEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x92FBFE0)
#define SYSTEM_IO_TEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x92FBFF0)
#define SYSTEM_IO_TEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x92FC1C0)
#define SYSTEM_IO_TEXTREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x92FC530)
#define SYSTEM_IO_TEXTREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x92FC610)
#define SYSTEM_IO_TEXTREADER_READASYNC_OFFSET UNITYSDK_OFFSET(0x92FC710)
#define SYSTEM_IO_TEXTREADER_READASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x92FC950)
#define SYSTEM_IO_TEXTREADER_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92FCC10)
#define SYSTEM_IO_TEXTREADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92FCD70)

namespace System::IO
{
	inline static constexpr unsigned int TextReader_TypeDefinitionIndex = 25250;

	class TextReader : public Il2CppObject
	{
	public:
		::System::IO::TextReader* Null; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Peek()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_PEEK_OFFSET))(nullptr);
		}

		::System::Int32 Read()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READ_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Read(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READ_OFFSET))(arg, nullptr);
		}

		::System::String* ReadToEnd()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READTOEND_OFFSET))(nullptr);
		}

		::System::String* ReadLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READLINE_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadAsyncInternal(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_READASYNCINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::TextReader* Synchronized(::System::IO::TextReader* arg)
		{
			return (return (::System::IO::TextReader*(*)(::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCHRONIZED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

