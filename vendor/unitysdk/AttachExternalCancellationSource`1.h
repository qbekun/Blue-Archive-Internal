#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskVoid; }
namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define ATTACHEXTERNALCANCELLATIONSOURCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ATTACHEXTERNALCANCELLATIONSOURCE`1_RUNTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ATTACHEXTERNALCANCELLATIONSOURCE`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ATTACHEXTERNALCANCELLATIONSOURCE`1_CYSHARP.THREADING.TASKS.IUNITASKSOURCE.GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ATTACHEXTERNALCANCELLATIONSOURCE`1_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ATTACHEXTERNALCANCELLATIONSOURCE`1_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ATTACHEXTERNALCANCELLATIONSOURCE`1_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ATTACHEXTERNALCANCELLATIONSOURCE`1_CANCELLATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ATTACHEXTERNALCANCELLATIONSOURCE`1_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int AttachExternalCancellationSource`1_TypeDefinitionIndex = 35952;

	class AttachExternalCancellationSource`1 : public Il2CppObject
	{
	public:
		Il2CppObject* cancellationCallbackDelegate; // 0x0
		::System::Threading::CancellationToken* cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration* tokenRegistration; // 0x0
		Il2CppObject* core; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHEXTERNALCANCELLATIONSOURCE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* RunTask(Il2CppObject* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskVoid*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHEXTERNALCANCELLATIONSOURCE`1_RUNTASK_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHEXTERNALCANCELLATIONSOURCE`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Cysharp.Threading.Tasks.IUniTaskSource.GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHEXTERNALCANCELLATIONSOURCE`1_CYSHARP.THREADING.TASKS.IUNITASKSOURCE.GETRESULT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHEXTERNALCANCELLATIONSOURCE`1_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHEXTERNALCANCELLATIONSOURCE`1_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		Il2CppObject* GetResult(::System::Int16 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHEXTERNALCANCELLATIONSOURCE`1_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void CancellationCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHEXTERNALCANCELLATIONSOURCE`1_CANCELLATIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHEXTERNALCANCELLATIONSOURCE`1_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

	};

