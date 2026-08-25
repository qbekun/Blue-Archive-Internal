#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define NEXTFRAMEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x9DD9450)
#define NEXTFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD9460)
#define NEXTFRAMEPROMISE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD9530)
#define NEXTFRAMEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x9DD9540)
#define NEXTFRAMEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD95E0)
#define NEXTFRAMEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD54A0)
#define NEXTFRAMEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DD9630)
#define NEXTFRAMEPROMISE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DD9690)
#define NEXTFRAMEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DD97A0)
#define NEXTFRAMEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DD9870)

	inline static constexpr unsigned int NextFramePromise_TypeDefinitionIndex = 35904;

	class NextFramePromise : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		NextFramePromise* nextNode; // 0x10
		::System::Int32 frameCount; // 0x18
		Il2CppObject* core; // 0x20
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::System::Threading::CancellationTokenRegistration* cancellationTokenRegistration; // 0x50
		::System::Boolean cancelImmediately; // 0x68

		NextFramePromise&* get_NextNode()
		{
			return (return (NextFramePromise&*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXTFRAMEPROMISE_GET_NEXTNODE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXTFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXTFRAMEPROMISE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXTFRAMEPROMISE_TRYRETURN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + NEXTFRAMEPROMISE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::IUniTaskSource* Create(::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg, int16_t&* arg)
		{
			return (return (::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NEXTFRAMEPROMISE_CREATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + NEXTFRAMEPROMISE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXTFRAMEPROMISE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXTFRAMEPROMISE_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + NEXTFRAMEPROMISE_GETRESULT_OFFSET))(arg, nullptr);
		}

	};

