#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define ASYNCTRIGGERENUMERATOR_DISPOSEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCTRIGGERENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCTRIGGERENUMERATOR_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCTRIGGERENUMERATOR_CYSHARP.THREADING.TASKS.ITRIGGERHANDLER_T_.SET_PREV_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCTRIGGERENUMERATOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCTRIGGERENUMERATOR_CYSHARP.THREADING.TASKS.ITRIGGERHANDLER_T_.SET_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCTRIGGERENUMERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCTRIGGERENUMERATOR_CANCELLATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCTRIGGERENUMERATOR_CYSHARP.THREADING.TASKS.ITRIGGERHANDLER_T_.GET_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCTRIGGERENUMERATOR_CYSHARP.THREADING.TASKS.ITRIGGERHANDLER_T_.GET_PREV_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCTRIGGERENUMERATOR_ONNEXT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int AsyncTriggerEnumerator_TypeDefinitionIndex = 35972;

	class AsyncTriggerEnumerator : public Il2CppObject
	{
	public:
		Il2CppObject* cancellationCallback; // 0x0
		Il2CppObject* parent; // 0x0
		::System::Threading::CancellationToken* cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration* registration; // 0x0
		::System::Boolean isDisposed; // 0x0
		Il2CppObject* _Current_k__BackingField; // 0x0
		Il2CppObject* _Cysharp.Threading.Tasks.ITriggerHandler_T_.Prev_k__BackingField; // 0x0
		Il2CppObject* _Cysharp.Threading.Tasks.ITriggerHandler_T_.Next_k__BackingField; // 0x0

		::Cysharp::Threading::Tasks::UniTask* DisposeAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCTRIGGERENUMERATOR_DISPOSEASYNC_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCTRIGGERENUMERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCTRIGGERENUMERATOR_ONCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void Cysharp.Threading.Tasks.ITriggerHandler_T_.set_Prev(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCTRIGGERENUMERATOR_CYSHARP.THREADING.TASKS.ITRIGGERHANDLER_T_.SET_PREV_OFFSET))(arg, nullptr);
		}

		::System::Void set_Current(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCTRIGGERENUMERATOR_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void Cysharp.Threading.Tasks.ITriggerHandler_T_.set_Next(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCTRIGGERENUMERATOR_CYSHARP.THREADING.TASKS.ITRIGGERHANDLER_T_.SET_NEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCTRIGGERENUMERATOR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void CancellationCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCTRIGGERENUMERATOR_CANCELLATIONCALLBACK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Cysharp.Threading.Tasks.ITriggerHandler_T_.get_Next()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCTRIGGERENUMERATOR_CYSHARP.THREADING.TASKS.ITRIGGERHANDLER_T_.GET_NEXT_OFFSET))(nullptr);
		}

		Il2CppObject* Cysharp.Threading.Tasks.ITriggerHandler_T_.get_Prev()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCTRIGGERENUMERATOR_CYSHARP.THREADING.TASKS.ITRIGGERHANDLER_T_.GET_PREV_OFFSET))(nullptr);
		}

		::System::Void OnNext(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCTRIGGERENUMERATOR_ONNEXT_OFFSET))(arg, nullptr);
		}

	};

