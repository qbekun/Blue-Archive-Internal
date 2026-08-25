#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define DELAYIGNORETIMESCALEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDB0A0)
#define DELAYIGNORETIMESCALEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x9DDB0F0)
#define DELAYIGNORETIMESCALEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDB1A0)
#define DELAYIGNORETIMESCALEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDB200)
#define DELAYIGNORETIMESCALEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DDB2D0)
#define DELAYIGNORETIMESCALEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x9DDB3C0)
#define DELAYIGNORETIMESCALEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD6780)
#define DELAYIGNORETIMESCALEPROMISE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DDB3E0)
#define DELAYIGNORETIMESCALEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DDB4F0)
#define DELAYIGNORETIMESCALEPROMISE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DDB3D0)

	inline static constexpr unsigned int DelayIgnoreTimeScalePromise_TypeDefinitionIndex = 35912;

	class DelayIgnoreTimeScalePromise : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		DelayIgnoreTimeScalePromise* nextNode; // 0x10
		::System::Single delayFrameTimeSpan; // 0x18
		::System::Single elapsed; // 0x1C
		::System::Int32 initialFrame; // 0x20
		::System::Threading::CancellationToken* cancellationToken; // 0x28
		::System::Threading::CancellationTokenRegistration* cancellationTokenRegistration; // 0x30
		::System::Boolean cancelImmediately; // 0x48
		Il2CppObject* core; // 0x50

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + DELAYIGNORETIMESCALEPROMISE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYIGNORETIMESCALEPROMISE_TRYRETURN_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + DELAYIGNORETIMESCALEPROMISE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYIGNORETIMESCALEPROMISE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYIGNORETIMESCALEPROMISE_MOVENEXT_OFFSET))(nullptr);
		}

		DelayIgnoreTimeScalePromise&* get_NextNode()
		{
			return (return (DelayIgnoreTimeScalePromise&*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYIGNORETIMESCALEPROMISE_GET_NEXTNODE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::TimeSpan* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg, int16_t&* arg)
		{
			return (return (::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::TimeSpan*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + DELAYIGNORETIMESCALEPROMISE_CREATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYIGNORETIMESCALEPROMISE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + DELAYIGNORETIMESCALEPROMISE_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYIGNORETIMESCALEPROMISE_.CTOR_OFFSET))(nullptr);
		}

	};

