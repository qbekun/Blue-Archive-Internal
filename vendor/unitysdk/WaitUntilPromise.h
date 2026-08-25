#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define WAITUNTILPROMISE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DDC710)
#define WAITUNTILPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x9DDC720)
#define WAITUNTILPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDC7D0)
#define WAITUNTILPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD7A30)
#define WAITUNTILPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDC820)
#define WAITUNTILPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDC8F0)
#define WAITUNTILPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x9DDC950)
#define WAITUNTILPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DDC960)
#define WAITUNTILPROMISE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DDCAB0)
#define WAITUNTILPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DDCBC0)

	inline static constexpr unsigned int WaitUntilPromise_TypeDefinitionIndex = 35921;

	class WaitUntilPromise : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		WaitUntilPromise* nextNode; // 0x10
		Il2CppObject* predicate; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x20
		::System::Threading::CancellationTokenRegistration* cancellationTokenRegistration; // 0x28
		::System::Boolean cancelImmediately; // 0x40
		Il2CppObject* core; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE_TRYRETURN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::IUniTaskSource* Create(Il2CppObject* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg, int16_t&* arg)
		{
			return (return (::Cysharp::Threading::Tasks::IUniTaskSource*(*)(Il2CppObject*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE_CREATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		WaitUntilPromise&* get_NextNode()
		{
			return (return (WaitUntilPromise&*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE_GET_NEXTNODE_OFFSET))(nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITUNTILPROMISE_MOVENEXT_OFFSET))(nullptr);
		}

	};

