#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_VALUETASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_ASTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_GETTASKFORVALUETASKSOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_GET_ISCOMPLETEDSUCCESSFULLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_CONFIGUREAWAIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_VALUETASK`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ValueTask`1_TypeDefinitionIndex = 24143;

	class ValueTask`1 : public Il2CppObject
	{
	public:
		Il2CppObject* s_canceledTask; // 0x0
		::System::Object* _obj; // 0x0
		Il2CppObject* _result; // 0x0
		::System::Int16 _token; // 0x0
		::System::Boolean _continueOnCapturedContext; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, Il2CppObject* arg, ::System::Int16 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, Il2CppObject*, ::System::Int16, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_EQUALS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AsTask()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_ASTASK_OFFSET))(nullptr);
		}

		Il2CppObject* GetTaskForValueTaskSource(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_GETTASKFORVALUETASKSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCompletedSuccessfully()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_GET_ISCOMPLETEDSUCCESSFULLY_OFFSET))(nullptr);
		}

		Il2CppObject* get_Result()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_GET_RESULT_OFFSET))(nullptr);
		}

		Il2CppObject* GetAwaiter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_GETAWAITER_OFFSET))(nullptr);
		}

		Il2CppObject* ConfigureAwait(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_CONFIGUREAWAIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK`1_TOSTRING_OFFSET))(nullptr);
		}

	};
}

