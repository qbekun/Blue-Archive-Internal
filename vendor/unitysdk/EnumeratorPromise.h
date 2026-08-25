#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AsyncOperation; }
namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace UnityEngine { class WaitForSeconds; }
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define ENUMERATORPROMISE_UNWRAPWAITASYNCOPERATION_OFFSET UNITYSDK_OFFSET(0x9DD04B0)
#define ENUMERATORPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DD0540)
#define ENUMERATORPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD05A0)
#define ENUMERATORPROMISE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD05F0)
#define ENUMERATORPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DD0600)
#define ENUMERATORPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD0A10)
#define ENUMERATORPROMISE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DD0AE0)
#define ENUMERATORPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DD0DF0)
#define ENUMERATORPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x9DD0F00)
#define ENUMERATORPROMISE_UNWRAPWAITFORSECONDS_OFFSET UNITYSDK_OFFSET(0x9DD0F10)
#define ENUMERATORPROMISE_CONSUMEENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9DD0FA0)
#define ENUMERATORPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x9DD0900)
#define ENUMERATORPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x9DCFF80)

	inline static constexpr unsigned int EnumeratorPromise_TypeDefinitionIndex = 35846;

	class EnumeratorPromise : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		EnumeratorPromise* nextNode; // 0x10
		::System::Collections::IEnumerator* innerEnumerator; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x20
		::System::Int32 initialFrame; // 0x28
		::System::Boolean loopRunning; // 0x2C
		::System::Boolean calledGetResult; // 0x2D
		Il2CppObject* core; // 0x30
		::System::Reflection::FieldInfo* waitForSeconds_Seconds; // 0x10

		::System::Collections::IEnumerator* UnwrapWaitAsyncOperation(::UnityEngine::AsyncOperation* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::AsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_UNWRAPWAITASYNCOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_MOVENEXT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_GETRESULT_OFFSET))(arg, nullptr);
		}

		EnumeratorPromise&* get_NextNode()
		{
			return (return (EnumeratorPromise&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_GET_NEXTNODE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* UnwrapWaitForSeconds(::UnityEngine::WaitForSeconds* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::WaitForSeconds*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_UNWRAPWAITFORSECONDS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ConsumeEnumerator(::System::Collections::IEnumerator* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_CONSUMEENUMERATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_TRYRETURN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Collections::IEnumerator* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, int16_t&* arg)
		{
			return (return (::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::Collections::IEnumerator*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMERATORPROMISE_CREATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

