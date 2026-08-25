#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::Internal { class ValueStopwatch; }
namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define DELAYREALTIMEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDB7A0)
#define DELAYREALTIMEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x9DDB870)
#define DELAYREALTIMEPROMISE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DDB880)
#define DELAYREALTIMEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDB990)
#define DELAYREALTIMEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x9DDB9F0)
#define DELAYREALTIMEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD6BE0)
#define DELAYREALTIMEPROMISE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DDBA90)
#define DELAYREALTIMEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DDBB00)
#define DELAYREALTIMEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDBC50)
#define DELAYREALTIMEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DDBCA0)

	inline static constexpr unsigned int DelayRealtimePromise_TypeDefinitionIndex = 35914;

	class DelayRealtimePromise : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		DelayRealtimePromise* nextNode; // 0x10
		::System::Int64 delayTimeSpanTicks; // 0x18
		::Cysharp::Threading::Tasks::Internal::ValueStopwatch* stopwatch; // 0x20
		::System::Threading::CancellationToken* cancellationToken; // 0x28
		::System::Threading::CancellationTokenRegistration* cancellationTokenRegistration; // 0x30
		::System::Boolean cancelImmediately; // 0x48
		Il2CppObject* core; // 0x50

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYREALTIMEPROMISE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		DelayRealtimePromise&* get_NextNode()
		{
			return (return (DelayRealtimePromise&*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYREALTIMEPROMISE_GET_NEXTNODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYREALTIMEPROMISE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + DELAYREALTIMEPROMISE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYREALTIMEPROMISE_TRYRETURN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::TimeSpan* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg, int16_t&* arg)
		{
			return (return (::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::TimeSpan*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + DELAYREALTIMEPROMISE_CREATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYREALTIMEPROMISE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + DELAYREALTIMEPROMISE_GETRESULT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + DELAYREALTIMEPROMISE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYREALTIMEPROMISE_MOVENEXT_OFFSET))(nullptr);
		}

	};

