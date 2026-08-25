#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define WAITUNTILPROMISE`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define WAITUNTILPROMISE`1_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x000000)
#define WAITUNTILPROMISE`1_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define WAITUNTILPROMISE`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define WAITUNTILPROMISE`1_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define WAITUNTILPROMISE`1_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define WAITUNTILPROMISE`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define WAITUNTILPROMISE`1_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define WAITUNTILPROMISE`1_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define WAITUNTILPROMISE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int WaitUntilPromise`1_TypeDefinitionIndex = 35923;

	class WaitUntilPromise`1 : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		Il2CppObject* nextNode; // 0x0
		Il2CppObject* predicate; // 0x0
		Il2CppObject* argument; // 0x0
		::System::Threading::CancellationToken* cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration* cancellationTokenRegistration; // 0x0
		::System::Boolean cancelImmediately; // 0x0
		Il2CppObject* core; // 0x0

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Boolean TryReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE`1_TRYRETURN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE`1_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE`1_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE`1_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::IUniTaskSource* Create(Il2CppObject* arg, Il2CppObject* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg, int16_t&* arg)
		{
			return (return (::Cysharp::Threading::Tasks::IUniTaskSource*(*)(Il2CppObject*, Il2CppObject*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE`1_CREATE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject&* get_NextNode()
		{
			return (return (Il2CppObject&*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE`1_GET_NEXTNODE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE`1_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE`1_.CTOR_OFFSET))(nullptr);
		}

	};

