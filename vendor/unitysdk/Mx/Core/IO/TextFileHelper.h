#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_IO_TEXTFILEHELPER_SAVE_OFFSET UNITYSDK_OFFSET(0x1032D00)
#define MX_CORE_IO_TEXTFILEHELPER_SAVE_OFFSET UNITYSDK_OFFSET(0x1032D30)
#define MX_CORE_IO_TEXTFILEHELPER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1032FE0)
#define MX_CORE_IO_TEXTFILEHELPER_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x10330D0)
#define MX_CORE_IO_TEXTFILEHELPER_APPEND_OFFSET UNITYSDK_OFFSET(0x10331F0)
#define MX_CORE_IO_TEXTFILEHELPER_APPEND_OFFSET UNITYSDK_OFFSET(0x1033220)
#define MX_CORE_IO_TEXTFILEHELPER_LOAD_OFFSET UNITYSDK_OFFSET(0x1033510)
#define MX_CORE_IO_TEXTFILEHELPER_LOAD_OFFSET UNITYSDK_OFFSET(0x1033530)
#define MX_CORE_IO_TEXTFILEHELPER_WRITEUTF8_OFFSET UNITYSDK_OFFSET(0x1033830)
#define MX_CORE_IO_TEXTFILEHELPER_READUTF8_OFFSET UNITYSDK_OFFSET(0x1033860)
#define MX_CORE_IO_TEXTFILEHELPER_READUTF8ASYNC_OFFSET UNITYSDK_OFFSET(0x1034120)
#define MX_CORE_IO_TEXTFILEHELPER_HASBOM_OFFSET UNITYSDK_OFFSET(0x10340E0)

namespace MX::Core::IO
{
	inline static constexpr unsigned int TextFileHelper_TypeDefinitionIndex = 12833;

	class TextFileHelper : public Il2CppObject
	{
	public:
		::System::Void Save(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_TEXTFILEHELPER_SAVE_OFFSET))(str, str2, nullptr);
		}

		::System::Void Save(::System::String* str, ::System::String* str2, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_TEXTFILEHELPER_SAVE_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::String* str, ::System::String* str2)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_TEXTFILEHELPER_WRITEASYNC_OFFSET))(str, str2, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::String* str, ::System::String* str2, ::System::Text::Encoding* arg)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::String*, ::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_TEXTFILEHELPER_WRITEASYNC_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void Append(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_TEXTFILEHELPER_APPEND_OFFSET))(str, str2, nullptr);
		}

		::System::Void Append(::System::String* str, ::System::String* str2, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_TEXTFILEHELPER_APPEND_OFFSET))(str, str2, arg, nullptr);
		}

		::System::String* Load(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_TEXTFILEHELPER_LOAD_OFFSET))(str, nullptr);
		}

		::System::String* Load(::System::String* str, ::System::Text::Encoding* arg)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_TEXTFILEHELPER_LOAD_OFFSET))(str, arg, nullptr);
		}

		::System::Void WriteUtf8(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_TEXTFILEHELPER_WRITEUTF8_OFFSET))(str, str2, nullptr);
		}

		::System::String* ReadUtf8(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_TEXTFILEHELPER_READUTF8_OFFSET))(str, nullptr);
		}

		Il2CppObject* ReadUtf8Async(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return ((Il2CppObject*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_TEXTFILEHELPER_READUTF8ASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasBom(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_TEXTFILEHELPER_HASBOM_OFFSET))(arg, nullptr);
		}

	};
}

