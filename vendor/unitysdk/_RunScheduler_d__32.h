#pragma once
#include "unitysdk.h"

#define <RUNSCHEDULER>D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A7CF00)
#define <RUNSCHEDULER>D__32_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A7DC70)

	inline static constexpr unsigned int <RunScheduler>d__32_TypeDefinitionIndex = 29795;

	class <RunScheduler>d__32 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::ServicePointScheduler* __4__this; // 0x30
		::Il2CppArray<::System::Object*>* _operationArray_5__2; // 0x38
		::Il2CppArray<::System::Object*>* _idleArray_5__3; // 0x40
		Il2CppObject* _taskList_5__4; // 0x48
		Il2CppObject* _schedulerTask_5__5; // 0x50
		::System::Boolean _finalCleanup_5__6; // 0x58
		Il2CppObject* __u__1; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUNSCHEDULER>D__32_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUNSCHEDULER>D__32_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

