#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define ISCANCELEDSOURCE_CYSHARP.THREADING.TASKS.IUNITASKSOURCE.GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ISCANCELEDSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ISCANCELEDSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ISCANCELEDSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ISCANCELEDSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ISCANCELEDSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IsCanceledSource_TypeDefinitionIndex = 35934;

	class IsCanceledSource : public Il2CppObject
	{
	public:
		Il2CppObject* source; // 0x0

		::System::Void Cysharp.Threading.Tasks.IUniTaskSource.GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ISCANCELEDSOURCE_CYSHARP.THREADING.TASKS.IUNITASKSOURCE.GETRESULT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ISCANCELEDSOURCE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ISCANCELEDSOURCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ISCANCELEDSOURCE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + ISCANCELEDSOURCE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		Il2CppObject* GetResult(::System::Int16 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ISCANCELEDSOURCE_GETRESULT_OFFSET))(arg, nullptr);
		}

	};

