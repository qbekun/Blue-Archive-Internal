#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_TOASYNC_OFFSET UNITYSDK_OFFSET(0x949A600)
#define NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_CANCELIFREQUESTEDASYNC_OFFSET UNITYSDK_OFFSET(0x949A680)
#define NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_CANCELIFREQUESTEDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_FROMCANCELED_OFFSET UNITYSDK_OFFSET(0x949A710)
#define NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_FROMCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x949A870)
#define NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x949A920)
#define NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x949A9D0)
#define NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_READASYNC_OFFSET UNITYSDK_OFFSET(0x949AAA0)
#define NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_ISCOMPLETEDSUCCESSFULLY_OFFSET UNITYSDK_OFFSET(0x949AB80)
#define NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x949ABB0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int AsyncUtils_TypeDefinitionIndex = 31807;

	class AsyncUtils : public Il2CppObject
	{
	public:
		Il2CppObject* False; // 0x0
		Il2CppObject* True; // 0x8
		::System::Threading::Tasks::Task* CompletedTask; // 0x10

		Il2CppObject* ToAsync(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_TOASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* CancelIfRequestedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_CANCELIFREQUESTEDASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CancelIfRequestedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_CANCELIFREQUESTEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* FromCanceled(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_FROMCANCELED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FromCanceled(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_FROMCANCELED_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::IO::TextWriter* arg, ::System::Char arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::TextWriter*, ::System::Char, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_WRITEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::IO::TextWriter* arg, ::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::TextWriter*, ::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_WRITEASYNC_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::System::IO::TextWriter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::TextWriter*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_WRITEASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadAsync(::System::IO::TextReader* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::IO::TextReader*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_READASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsCompletedSuccessfully(::System::Threading::Tasks::Task* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_ISCOMPLETEDSUCCESSFULLY_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ASYNCUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

