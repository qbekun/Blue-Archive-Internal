#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskVoid; }

#define TOCOROUTINEENUMERATOR`1_RUNTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define TOCOROUTINEENUMERATOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TOCOROUTINEENUMERATOR`1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TOCOROUTINEENUMERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define TOCOROUTINEENUMERATOR`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ToCoroutineEnumerator`1_TypeDefinitionIndex = 35956;

	class ToCoroutineEnumerator`1 : public Il2CppObject
	{
	public:
		::System::Boolean completed; // 0x0
		Il2CppObject* resultHandler; // 0x0
		Il2CppObject* exceptionHandler; // 0x0
		::System::Boolean isStarted; // 0x0
		Il2CppObject* task; // 0x0
		::System::Object* current; // 0x0
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x0

		::Cysharp::Threading::Tasks::UniTaskVoid* RunTask(Il2CppObject* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskVoid*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TOCOROUTINEENUMERATOR`1_RUNTASK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TOCOROUTINEENUMERATOR`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOCOROUTINEENUMERATOR`1_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOCOROUTINEENUMERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOCOROUTINEENUMERATOR`1_MOVENEXT_OFFSET))(nullptr);
		}

	};

