#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define EXCEPTIONRESULTSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDC020)
#define EXCEPTIONRESULTSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9DDC030)
#define EXCEPTIONRESULTSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DDC5B0)
#define EXCEPTIONRESULTSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDC630)
#define EXCEPTIONRESULTSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD7650)
#define EXCEPTIONRESULTSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDC660)

	inline static constexpr unsigned int ExceptionResultSource_TypeDefinitionIndex = 35916;

	class ExceptionResultSource : public Il2CppObject
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x10
		::System::Boolean calledGet; // 0x18

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCEPTIONRESULTSOURCE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

	};

