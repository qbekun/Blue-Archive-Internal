#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_UNITASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASK`1_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASK`1_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASK`1_ASUNITASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASK`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASK`1_SUPPRESSCANCELLATIONTHROW_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASK`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask`1_TypeDefinitionIndex = 35936;

	class UniTask`1 : public Il2CppObject
	{
	public:
		Il2CppObject* source; // 0x0
		Il2CppObject* result; // 0x0
		::System::Int16 token; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* get_Status()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK`1_GET_STATUS_OFFSET))(nullptr);
		}

		Il2CppObject* GetAwaiter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK`1_GETAWAITER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* AsUniTask()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK`1_ASUNITASK_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SuppressCancellationThrow()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK`1_SUPPRESSCANCELLATIONTHROW_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK`1_TOSTRING_OFFSET))(nullptr);
		}

	};
}

