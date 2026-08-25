#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define CANCELEDRESULTSOURCE`1_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CANCELEDRESULTSOURCE`1_CYSHARP.THREADING.TASKS.IUNITASKSOURCE.GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CANCELEDRESULTSOURCE`1_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CANCELEDRESULTSOURCE`1_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CANCELEDRESULTSOURCE`1_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CANCELEDRESULTSOURCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int CanceledResultSource`1_TypeDefinitionIndex = 35919;

	class CanceledResultSource`1 : public Il2CppObject
	{
	public:
		::System::Threading::CancellationToken* cancellationToken; // 0x0

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CANCELEDRESULTSOURCE`1_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void Cysharp.Threading.Tasks.IUniTaskSource.GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CANCELEDRESULTSOURCE`1_CYSHARP.THREADING.TASKS.IUNITASKSOURCE.GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CANCELEDRESULTSOURCE`1_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANCELEDRESULTSOURCE`1_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		Il2CppObject* GetResult(::System::Int16 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CANCELEDRESULTSOURCE`1_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CANCELEDRESULTSOURCE`1_.CTOR_OFFSET))(arg, nullptr);
		}

	};

