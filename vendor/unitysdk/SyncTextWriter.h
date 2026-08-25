#pragma once
#include "unitysdk.h"

#define SYNCTEXTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92FF350)
#define SYNCTEXTWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x92FF5E0)
#define SYNCTEXTWRITER_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x92FF610)
#define SYNCTEXTWRITER_GET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x92FF640)
#define SYNCTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x92FF670)
#define SYNCTEXTWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92FF6A0)
#define SYNCTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x92FF750)
#define SYNCTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FF780)
#define SYNCTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FF7B0)
#define SYNCTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FF7E0)
#define SYNCTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FF810)
#define SYNCTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FF840)
#define SYNCTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92FF880)
#define SYNCTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FF8B0)
#define SYNCTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FF8E0)
#define SYNCTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FF910)
#define SYNCTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FF940)
#define SYNCTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FF970)
#define SYNCTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x92FF9A0)
#define SYNCTEXTWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x92FF9D0)
#define SYNCTEXTWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x92FFA90)
#define SYNCTEXTWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x92FFB50)
#define SYNCTEXTWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x92FFC20)
#define SYNCTEXTWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x92FFCE0)
#define SYNCTEXTWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x92FFDA0)
#define SYNCTEXTWRITER_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x92FFE70)

	inline static constexpr unsigned int SyncTextWriter_TypeDefinitionIndex = 25252;

	class SyncTextWriter : public Il2CppObject
	{
	public:
		::System::IO::TextWriter* _out; // 0x30

		::System::Void .ctor(::System::IO::TextWriter* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::IFormatProvider* get_FormatProvider()
		{
			return (return (::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_GET_FORMATPROVIDER_OFFSET))(nullptr);
		}

		::System::String* get_NewLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_GET_NEWLINE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void Write(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITE_OFFSET))(str, nullptr);
		}

		::System::Void WriteLine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITELINE_OFFSET))(nullptr);
		}

		::System::Void WriteLine(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITELINE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteLine(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITELINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteLine(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITELINE_OFFSET))(str, nullptr);
		}

		::System::Void WriteLine(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITELINE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteLine(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITELINE_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::Char arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::String* str)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITEASYNC_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::System::Char arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITELINEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::System::String* str)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITELINEASYNC_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_WRITELINEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTWRITER_FLUSHASYNC_OFFSET))(nullptr);
		}

	};

