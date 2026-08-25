#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define CANCELEDRESULTSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDC670)
#define CANCELEDRESULTSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD7690)
#define CANCELEDRESULTSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDC680)
#define CANCELEDRESULTSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDC6B0)
#define CANCELEDRESULTSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DDC6C0)

	inline static constexpr unsigned int CanceledResultSource_TypeDefinitionIndex = 35918;

	class CanceledResultSource : public Il2CppObject
	{
	public:
		::System::Threading::CancellationToken* cancellationToken; // 0x10

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANCELEDRESULTSOURCE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CANCELEDRESULTSOURCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CANCELEDRESULTSOURCE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CANCELEDRESULTSOURCE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CANCELEDRESULTSOURCE_GETRESULT_OFFSET))(arg, nullptr);
		}

	};

