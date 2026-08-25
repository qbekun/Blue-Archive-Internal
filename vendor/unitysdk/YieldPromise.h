#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define YIELDPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD8DB0)
#define YIELDPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD5060)
#define YIELDPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DD8E10)
#define YIELDPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DD8F60)
#define YIELDPROMISE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD8E00)
#define YIELDPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DD8FC0)
#define YIELDPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x9DD9060)
#define YIELDPROMISE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DD9070)
#define YIELDPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x9DD9180)
#define YIELDPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD9220)

	inline static constexpr unsigned int YieldPromise_TypeDefinitionIndex = 35902;

	class YieldPromise : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		YieldPromise* nextNode; // 0x10
		::System::Threading::CancellationToken* cancellationToken; // 0x18
		::System::Threading::CancellationTokenRegistration* cancellationTokenRegistration; // 0x20
		::System::Boolean cancelImmediately; // 0x38
		Il2CppObject* core; // 0x40

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + YIELDPROMISE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::IUniTaskSource* Create(::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg, int16_t&* arg)
		{
			return (return (::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + YIELDPROMISE_CREATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + YIELDPROMISE_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + YIELDPROMISE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YIELDPROMISE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + YIELDPROMISE_MOVENEXT_OFFSET))(nullptr);
		}

		YieldPromise&* get_NextNode()
		{
			return (return (YieldPromise&*(*)(::PVOID))((::PBYTE)hIl2Cpp + YIELDPROMISE_GET_NEXTNODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YIELDPROMISE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + YIELDPROMISE_TRYRETURN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + YIELDPROMISE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

	};

