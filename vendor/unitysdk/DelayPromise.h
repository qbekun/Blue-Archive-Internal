#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define DELAYPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDA9A0)
#define DELAYPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x9DDAA70)
#define DELAYPROMISE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DDAB20)
#define DELAYPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DDAB30)
#define DELAYPROMISE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DDAC20)
#define DELAYPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDAD30)
#define DELAYPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DDAD90)
#define DELAYPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDAEE0)
#define DELAYPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD6FE0)
#define DELAYPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x9DDAF30)

	inline static constexpr unsigned int DelayPromise_TypeDefinitionIndex = 35910;

	class DelayPromise : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		DelayPromise* nextNode; // 0x10
		::System::Int32 initialFrame; // 0x18
		::System::Single delayTimeSpan; // 0x1C
		::System::Single elapsed; // 0x20
		::System::Threading::CancellationToken* cancellationToken; // 0x28
		::System::Threading::CancellationTokenRegistration* cancellationTokenRegistration; // 0x30
		::System::Boolean cancelImmediately; // 0x48
		Il2CppObject* core; // 0x50

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYPROMISE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Boolean TryReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYPROMISE_TRYRETURN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYPROMISE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYPROMISE_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYPROMISE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + DELAYPROMISE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + DELAYPROMISE_GETRESULT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + DELAYPROMISE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::TimeSpan* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg, int16_t&* arg)
		{
			return (return (::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::TimeSpan*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + DELAYPROMISE_CREATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		DelayPromise&* get_NextNode()
		{
			return (return (DelayPromise&*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYPROMISE_GET_NEXTNODE_OFFSET))(nullptr);
		}

	};

