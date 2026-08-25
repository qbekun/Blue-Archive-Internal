#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define EXCEPTIONRESULTSOURCE`1_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCEPTIONRESULTSOURCE`1_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCEPTIONRESULTSOURCE`1_FINALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCEPTIONRESULTSOURCE`1_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCEPTIONRESULTSOURCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCEPTIONRESULTSOURCE`1_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCEPTIONRESULTSOURCE`1_CYSHARP.THREADING.TASKS.IUNITASKSOURCE.GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ExceptionResultSource`1_TypeDefinitionIndex = 35917;

	class ExceptionResultSource`1 : public Il2CppObject
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x0
		::System::Boolean calledGet; // 0x0

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE`1_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE`1_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE`1_FINALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetResult(::System::Int16 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE`1_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE`1_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void Cysharp.Threading.Tasks.IUniTaskSource.GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE`1_CYSHARP.THREADING.TASKS.IUNITASKSOURCE.GETRESULT_OFFSET))(arg, nullptr);
		}

	};

