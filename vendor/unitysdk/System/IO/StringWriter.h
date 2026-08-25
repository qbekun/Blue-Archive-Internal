#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_STRINGWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x931D210)
#define SYSTEM_IO_STRINGWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x931D380)
#define SYSTEM_IO_STRINGWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x931D3F0)
#define SYSTEM_IO_STRINGWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x931D2A0)
#define SYSTEM_IO_STRINGWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x931D450)
#define SYSTEM_IO_STRINGWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x931D470)
#define SYSTEM_IO_STRINGWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x931D480)
#define SYSTEM_IO_STRINGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931D540)
#define SYSTEM_IO_STRINGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931D580)
#define SYSTEM_IO_STRINGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x931D750)
#define SYSTEM_IO_STRINGWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x931D7A0)
#define SYSTEM_IO_STRINGWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x931D860)
#define SYSTEM_IO_STRINGWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x931D920)
#define SYSTEM_IO_STRINGWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x931D9F0)
#define SYSTEM_IO_STRINGWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x931DAB0)
#define SYSTEM_IO_STRINGWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0x931DB70)
#define SYSTEM_IO_STRINGWRITER_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x931DC40)
#define SYSTEM_IO_STRINGWRITER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x931DCF0)

namespace System::IO
{
	inline static constexpr unsigned int StringWriter_TypeDefinitionIndex = 25293;

	class StringWriter : public Il2CppObject
	{
	public:
		::System::Text::UnicodeEncoding* m_encoding; // 0x0
		::System::Text::StringBuilder* _sb; // 0x30
		::System::Boolean _isOpen; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IFormatProvider* arg)
		{
			((::System::Void(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Text::StringBuilder* arg, ::System::IFormatProvider* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Void Write(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITE_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::Char arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::String* str)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITEASYNC_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::System::Char arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITELINEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::System::String* str)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITELINEASYNC_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITELINEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_FLUSHASYNC_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_TOSTRING_OFFSET))(nullptr);
		}

	};
}

