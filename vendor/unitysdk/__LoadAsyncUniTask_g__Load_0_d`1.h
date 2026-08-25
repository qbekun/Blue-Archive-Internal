#pragma once
#include "unitysdk.h"

#define <<LOADASYNCUNITASK>G__LOAD|0>D`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <<LOADASYNCUNITASK>G__LOAD|0>D`1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <<LoadAsyncUniTask>g__Load|0>d`1_TypeDefinitionIndex = 14957;

	class <<LoadAsyncUniTask>g__Load|0>d`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __t__builder; // 0x0
		Il2CppObject* __4__this; // 0x0
		::System::Threading::CancellationToken* token; // 0x0
		Il2CppObject* _op_5__2; // 0x0
		Il2CppObject* __u__1; // 0x0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<LOADASYNCUNITASK>G__LOAD|0>D`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<LOADASYNCUNITASK>G__LOAD|0>D`1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

