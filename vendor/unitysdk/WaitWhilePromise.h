#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define WAITWHILEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDCEA0)
#define WAITWHILEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DDCEF0)
#define WAITWHILEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDD040)
#define WAITWHILEPROMISE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DDD110)
#define WAITWHILEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDD220)
#define WAITWHILEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD7E20)
#define WAITWHILEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x9DDD290)
#define WAITWHILEPROMISE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DDD280)
#define WAITWHILEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DDD340)
#define WAITWHILEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x9DDD4C0)

	inline static constexpr unsigned int WaitWhilePromise_TypeDefinitionIndex = 35925;

	class WaitWhilePromise : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		WaitWhilePromise* nextNode; // 0x10
		Il2CppObject* predicate; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x20
		::System::Threading::CancellationTokenRegistration* cancellationTokenRegistration; // 0x28
		::System::Boolean cancelImmediately; // 0x40
		Il2CppObject* core; // 0x48

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WAITWHILEPROMISE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WAITWHILEPROMISE_GETRESULT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITWHILEPROMISE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITWHILEPROMISE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WAITWHILEPROMISE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::IUniTaskSource* Create(Il2CppObject* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg, int16_t&* arg)
		{
			return (return (::Cysharp::Threading::Tasks::IUniTaskSource*(*)(Il2CppObject*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + WAITWHILEPROMISE_CREATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITWHILEPROMISE_TRYRETURN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITWHILEPROMISE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITWHILEPROMISE_MOVENEXT_OFFSET))(nullptr);
		}

		WaitWhilePromise&* get_NextNode()
		{
			return (return (WaitWhilePromise&*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITWHILEPROMISE_GET_NEXTNODE_OFFSET))(nullptr);
		}

	};

