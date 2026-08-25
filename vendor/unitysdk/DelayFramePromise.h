#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define DELAYFRAMEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DDA290)
#define DELAYFRAMEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDA3E0)
#define DELAYFRAMEPROMISE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DDA430)
#define DELAYFRAMEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD6020)
#define DELAYFRAMEPROMISE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DDA540)
#define DELAYFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDA550)
#define DELAYFRAMEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDA620)
#define DELAYFRAMEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x9DDA680)
#define DELAYFRAMEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DDA730)
#define DELAYFRAMEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x9DDA830)

	inline static constexpr unsigned int DelayFramePromise_TypeDefinitionIndex = 35908;

	class DelayFramePromise : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		DelayFramePromise* nextNode; // 0x10
		::System::Int32 initialFrame; // 0x18
		::System::Int32 delayFrameCount; // 0x1C
		::System::Threading::CancellationToken* cancellationToken; // 0x20
		::System::Threading::CancellationTokenRegistration* cancellationTokenRegistration; // 0x28
		::System::Boolean cancelImmediately; // 0x40
		::System::Int32 currentFrameCount; // 0x44
		Il2CppObject* core; // 0x48

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + DELAYFRAMEPROMISE_GETRESULT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + DELAYFRAMEPROMISE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYFRAMEPROMISE_.CCTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Int32 arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg, int16_t&* arg)
		{
			return (return (::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + DELAYFRAMEPROMISE_CREATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYFRAMEPROMISE_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + DELAYFRAMEPROMISE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYFRAMEPROMISE_TRYRETURN_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYFRAMEPROMISE_MOVENEXT_OFFSET))(nullptr);
		}

		DelayFramePromise&* get_NextNode()
		{
			return (return (DelayFramePromise&*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYFRAMEPROMISE_GET_NEXTNODE_OFFSET))(nullptr);
		}

	};

