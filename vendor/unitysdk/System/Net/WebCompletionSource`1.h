#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBCOMPLETIONSOURCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_WEBCOMPLETIONSOURCE`1_GET_CURRENTRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_WEBCOMPLETIONSOURCE`1_GET_TASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_WEBCOMPLETIONSOURCE`1_TRYSETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_WEBCOMPLETIONSOURCE`1_TRYSETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_WEBCOMPLETIONSOURCE`1_TRYSETCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_WEBCOMPLETIONSOURCE`1_TRYSETCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_WEBCOMPLETIONSOURCE`1_TRYSETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_WEBCOMPLETIONSOURCE`1_THROWONERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_WEBCOMPLETIONSOURCE`1_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net
{
	inline static constexpr unsigned int WebCompletionSource`1_TypeDefinitionIndex = 29801;

	class WebCompletionSource`1 : public Il2CppObject
	{
	public:
		Il2CppObject* completion; // 0x0
		Il2CppObject* currentResult; // 0x0

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCOMPLETIONSOURCE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CurrentResult()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCOMPLETIONSOURCE`1_GET_CURRENTRESULT_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* get_Task()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCOMPLETIONSOURCE`1_GET_TASK_OFFSET))(nullptr);
		}

		::System::Boolean TrySetCompleted(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCOMPLETIONSOURCE`1_TRYSETCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCOMPLETIONSOURCE`1_TRYSETCOMPLETED_OFFSET))(nullptr);
		}

		::System::Boolean TrySetCanceled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCOMPLETIONSOURCE`1_TRYSETCANCELED_OFFSET))(nullptr);
		}

		::System::Boolean TrySetCanceled(::System::OperationCanceledException* arg)
		{
			return (return (::System::Boolean(*)(::System::OperationCanceledException*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCOMPLETIONSOURCE`1_TRYSETCANCELED_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetException(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCOMPLETIONSOURCE`1_TRYSETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowOnError()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCOMPLETIONSOURCE`1_THROWONERROR_OFFSET))(nullptr);
		}

		Il2CppObject* WaitForCompletion()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCOMPLETIONSOURCE`1_WAITFORCOMPLETION_OFFSET))(nullptr);
		}

	};
}

