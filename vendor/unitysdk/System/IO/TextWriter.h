#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_TEXTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92FD3B0)
#define SYSTEM_IO_TEXTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92FD450)
#define SYSTEM_IO_TEXTWRITER_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x92FD4F0)
#define SYSTEM_IO_TEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x92FD550)
#define SYSTEM_IO_TEXTWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92FD5B0)
#define SYSTEM_IO_TEXTWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92FD5C0)
#define SYSTEM_IO_TEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x92FD620)
#define SYSTEM_IO_TEXTWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_TEXTWRITER_GET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x92FD630)
#define SYSTEM_IO_TEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FD640)
#define SYSTEM_IO_TEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FD650)
#define SYSTEM_IO_TEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FD680)
#define SYSTEM_IO_TEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FD850)
#define SYSTEM_IO_TEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FD8D0)
#define SYSTEM_IO_TEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FD960)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FD9A0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FD9C0)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FDA00)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FDA40)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FDA80)
#define SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FDB90)
#define SYSTEM_IO_TEXTWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x92FDBF0)
#define SYSTEM_IO_TEXTWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x92FDEE0)
#define SYSTEM_IO_TEXTWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x92FE1D0)
#define SYSTEM_IO_TEXTWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x92FE2A0)
#define SYSTEM_IO_TEXTWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x92FE5B0)
#define SYSTEM_IO_TEXTWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x92FE8A0)
#define SYSTEM_IO_TEXTWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x92FEB90)
#define SYSTEM_IO_TEXTWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x92FEEA0)
#define SYSTEM_IO_TEXTWRITER_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x92FEF70)
#define SYSTEM_IO_TEXTWRITER_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92FF230)
#define SYSTEM_IO_TEXTWRITER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92FF3D0)

namespace System::IO
{
	inline static constexpr unsigned int TextWriter_TypeDefinitionIndex = 25254;

	class TextWriter : public Il2CppObject
	{
	public:
		::System::IO::TextWriter* Null; // 0x0
		::Il2CppArray<::System::Object*>* s_coreNewLine; // 0x8
		::Il2CppArray<::System::Object*>* CoreNewLine; // 0x18
		::System::String* CoreNewLineStr; // 0x20
		::System::IFormatProvider* _internalFormatProvider; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IFormatProvider* arg)
		{
			((::System::Void(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::IFormatProvider* get_FormatProvider()
		{
			return (return (::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_GET_FORMATPROVIDER_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::String* get_NewLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_GET_NEWLINE_OFFSET))(nullptr);
		}

		::System::Void Write(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITE_OFFSET))(str, nullptr);
		}

		::System::Void WriteLine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET))(nullptr);
		}

		::System::Void WriteLine(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteLine(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteLine(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET))(str, nullptr);
		}

		::System::Void WriteLine(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteLine(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINE_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::Char arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::String* str)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITEASYNC_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::System::Char arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::System::String* str)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINEASYNC_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_WRITELINEASYNC_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_FLUSHASYNC_OFFSET))(nullptr);
		}

		::System::IO::TextWriter* Synchronized(::System::IO::TextWriter* arg)
		{
			return (return (::System::IO::TextWriter*(*)(::System::IO::TextWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_SYNCHRONIZED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

