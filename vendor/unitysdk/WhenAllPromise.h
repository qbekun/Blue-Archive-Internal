#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define WHENALLPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDD630)
#define WHENALLPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DDD690)
#define WHENALLPROMISE_TRYINVOKECONTINUATION_OFFSET UNITYSDK_OFFSET(0x9DDD700)
#define WHENALLPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDD8D0)
#define WHENALLPROMISE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD8230)
#define WHENALLPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDD920)

	inline static constexpr unsigned int WhenAllPromise_TypeDefinitionIndex = 35927;

	class WhenAllPromise : public Il2CppObject
	{
	public:
		::System::Int32 completeCount; // 0x10
		::System::Int32 tasksLength; // 0x14
		Il2CppObject* core; // 0x18

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WHENALLPROMISE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WHENALLPROMISE_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void TryInvokeContinuation(WhenAllPromise* arg, Awaiter&* arg)
		{
			((::System::Void(*)(WhenAllPromise*, Awaiter&*, ::PVOID))((::PBYTE)hIl2Cpp + WHENALLPROMISE_TRYINVOKECONTINUATION_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WHENALLPROMISE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WHENALLPROMISE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + WHENALLPROMISE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

	};

