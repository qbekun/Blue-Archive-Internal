#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnAudioFilterReadHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREAD_OFFSET UNITYSDK_OFFSET(0x9DE3FA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE4020)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE4090)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_OFFSET UNITYSDK_OFFSET(0x9DE4110)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_OFFSET UNITYSDK_OFFSET(0x9DE41F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE42E0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncAudioFilterReadTrigger_TypeDefinitionIndex = 35992;

	class AsyncAudioFilterReadTrigger : public ::FlatData::EventContentType
	{
	public:
		::System::Void OnAudioFilterRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREAD_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* GetOnAudioFilterReadAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* GetOnAudioFilterReadAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnAudioFilterReadAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnAudioFilterReadAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

