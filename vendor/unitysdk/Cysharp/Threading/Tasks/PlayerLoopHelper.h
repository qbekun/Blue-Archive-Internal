#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Internal { class ContinuationQueue; }
namespace Cysharp::Threading::Tasks::Internal { class PlayerLoopRunner; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }
namespace UnityEngine::LowLevel { class PlayerLoopSystem&; }
namespace Cysharp::Threading::Tasks { class InjectPlayerLoopTimings; }
namespace Cysharp::Threading::Tasks { class IPlayerLoopItem; }
namespace UnityEngine::LowLevel { class PlayerLoopSystem; }

#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_THROWINVALIDLOOPTIMING_OFFSET UNITYSDK_OFFSET(0x9DD2150)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9DD21F0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_ISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x9DD09A0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_MAINTHREADID_OFFSET UNITYSDK_OFFSET(0x9DD3480)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x9DD34D0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ADDACTION_OFFSET UNITYSDK_OFFSET(0x9DD1120)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_UNITYSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x9DD3A60)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_REMOVERUNNER_OFFSET UNITYSDK_OFFSET(0x9DD3AB0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DD3BC0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ADDCONTINUATION_OFFSET UNITYSDK_OFFSET(0x9DD3F40)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTRUNNER_OFFSET UNITYSDK_OFFSET(0x9DD4380)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTUNITASKSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x9DD3010)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_FINDLOOPSYSTEMINDEX_OFFSET UNITYSDK_OFFSET(0x9DD2EE0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTLOOP_OFFSET UNITYSDK_OFFSET(0x9DD2BE0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int PlayerLoopHelper_TypeDefinitionIndex = 35893;

	class PlayerLoopHelper : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::Internal::ContinuationQueue* ThrowMarkerContinuationQueue; // 0x0
		::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner* ThrowMarkerPlayerLoopRunner; // 0x8
		::System::Int32 mainThreadId; // 0x10
		::System::String* applicationDataPath; // 0x18
		::System::Threading::SynchronizationContext* unitySynchronizationContext; // 0x20
		::Il2CppArray<::System::Object*>* yielders; // 0x28
		::Il2CppArray<::System::Object*>* runners; // 0x30

		::System::Void ThrowInvalidLoopTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming* arg)
		{
			((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_THROWINVALIDLOOPTIMING_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::UnityEngine::LowLevel::PlayerLoopSystem&* arg, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* arg)
		{
			((::System::Void(*)(::UnityEngine::LowLevel::PlayerLoopSystem&*, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsMainThread()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_ISMAINTHREAD_OFFSET))(nullptr);
		}

		::System::Int32 get_MainThreadId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_MAINTHREADID_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INIT_OFFSET))(nullptr);
		}

		::System::Void AddAction(::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::Cysharp::Threading::Tasks::IPlayerLoopItem* arg)
		{
			((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::Cysharp::Threading::Tasks::IPlayerLoopItem*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ADDACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::SynchronizationContext* get_UnitySynchronizationContext()
		{
			return (return (::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_UNITYSYNCHRONIZATIONCONTEXT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* RemoveRunner(::UnityEngine::LowLevel::PlayerLoopSystem* arg, ::System::Type* arg, ::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::LowLevel::PlayerLoopSystem*, ::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_REMOVERUNNER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void AddContinuation(::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ADDCONTINUATION_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* InsertRunner(::UnityEngine::LowLevel::PlayerLoopSystem* arg, ::System::Boolean arg, ::System::Type* arg, ::Cysharp::Threading::Tasks::Internal::ContinuationQueue* arg, ::System::Type* arg, ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::LowLevel::PlayerLoopSystem*, ::System::Boolean, ::System::Type*, ::Cysharp::Threading::Tasks::Internal::ContinuationQueue*, ::System::Type*, ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTRUNNER_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* InsertUniTaskSynchronizationContext(::UnityEngine::LowLevel::PlayerLoopSystem* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::LowLevel::PlayerLoopSystem*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTUNITASKSYNCHRONIZATIONCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindLoopSystemIndex(::Il2CppArray<::System::Object*>* arg, ::System::Type* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_FINDLOOPSYSTEMINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InsertLoop(::Il2CppArray<::System::Object*>* arg, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* arg, ::System::Type* arg, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Type* arg, ::System::Type* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings*, ::System::Type*, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings*, ::System::Int32, ::System::Boolean, ::System::Type*, ::System::Type*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTLOOP_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

