#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }
namespace Cysharp::Threading::Tasks { class UniTaskVoid; }

#define TOCOROUTINEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9DE0490)
#define TOCOROUTINEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9DE04A0)
#define TOCOROUTINEENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DDFE20)
#define TOCOROUTINEENUMERATOR_RUNTASK_OFFSET UNITYSDK_OFFSET(0x9DE04B0)
#define TOCOROUTINEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DE0560)

	inline static constexpr unsigned int ToCoroutineEnumerator_TypeDefinitionIndex = 35954;

	class ToCoroutineEnumerator : public Il2CppObject
	{
	public:
		::System::Boolean completed; // 0x10
		::Cysharp::Threading::Tasks::UniTask* task; // 0x18
		Il2CppObject* exceptionHandler; // 0x28
		::System::Boolean isStarted; // 0x30
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x38

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOCOROUTINEENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOCOROUTINEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Cysharp::Threading::Tasks::UniTask* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TOCOROUTINEENUMERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* RunTask(::Cysharp::Threading::Tasks::UniTask* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::Cysharp::Threading::Tasks::UniTask*, ::PVOID))((::PBYTE)hIl2Cpp + TOCOROUTINEENUMERATOR_RUNTASK_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOCOROUTINEENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

	};

