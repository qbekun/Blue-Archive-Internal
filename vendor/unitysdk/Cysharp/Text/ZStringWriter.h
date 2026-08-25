#pragma once
#include "../../unitysdk.h"

namespace Cysharp::Text { class Utf16ValueStringBuilder; }

#define CYSHARP_TEXT_ZSTRINGWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4F8C30)
#define CYSHARP_TEXT_ZSTRINGWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4F8C80)
#define CYSHARP_TEXT_ZSTRINGWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0xA4F8D20)
#define CYSHARP_TEXT_ZSTRINGWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4F8D40)
#define CYSHARP_TEXT_ZSTRINGWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0xA4F8FA0)
#define CYSHARP_TEXT_ZSTRINGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0xA4F9030)
#define CYSHARP_TEXT_ZSTRINGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0xA4F91E0)
#define CYSHARP_TEXT_ZSTRINGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0xA4F9430)
#define CYSHARP_TEXT_ZSTRINGWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0xA4F9690)
#define CYSHARP_TEXT_ZSTRINGWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0xA4F9750)
#define CYSHARP_TEXT_ZSTRINGWRITER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0xA4F9810)
#define CYSHARP_TEXT_ZSTRINGWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0xA4F98E0)
#define CYSHARP_TEXT_ZSTRINGWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0xA4F99A0)
#define CYSHARP_TEXT_ZSTRINGWRITER_WRITELINEASYNC_OFFSET UNITYSDK_OFFSET(0xA4F9A60)
#define CYSHARP_TEXT_ZSTRINGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0xA4F9B30)
#define CYSHARP_TEXT_ZSTRINGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0xA4F9BF0)
#define CYSHARP_TEXT_ZSTRINGWRITER_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0xA4F9F60)
#define CYSHARP_TEXT_ZSTRINGWRITER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4FA010)
#define CYSHARP_TEXT_ZSTRINGWRITER_ASSERTNOTDISPOSED_OFFSET UNITYSDK_OFFSET(0xA4F9170)

namespace Cysharp::Text
{
	inline static constexpr unsigned int ZStringWriter_TypeDefinitionIndex = 34730;

	class ZStringWriter : public Il2CppObject
	{
	public:
		::Cysharp::Text::Utf16ValueStringBuilder* sb; // 0x30
		::System::Boolean isOpen; // 0x40
		::System::Text::UnicodeEncoding* encoding; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IFormatProvider* arg)
		{
			((::System::Void(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Void Write(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_WRITE_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::Char arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_WRITEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::String* str)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_WRITEASYNC_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_WRITEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::System::Char arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_WRITELINEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::System::String* str)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_WRITELINEASYNC_OFFSET))(str, nullptr);
		}

		::System::Threading::Tasks::Task* WriteLineAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_WRITELINEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_FLUSHASYNC_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void AssertNotDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ZSTRINGWRITER_ASSERTNOTDISPOSED_OFFSET))(nullptr);
		}

	};
}

