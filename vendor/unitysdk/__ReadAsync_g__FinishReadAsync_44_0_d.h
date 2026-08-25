#pragma once
#include "unitysdk.h"

#define <<READASYNC>G__FINISHREADASYNC|44_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9318B60)
#define <<READASYNC>G__FINISHREADASYNC|44_0>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9318F20)

	inline static constexpr unsigned int <<ReadAsync>g__FinishReadAsync|44_0>d_TypeDefinitionIndex = 25287;

	class <<ReadAsync>g__FinishReadAsync|44_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		Il2CppObject* readTask; // 0x38
		::Il2CppArray<::System::Object*>* localBuffer; // 0x40
		Il2CppObject* localDestination; // 0x48
		Il2CppObject* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<READASYNC>G__FINISHREADASYNC|44_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<READASYNC>G__FINISHREADASYNC|44_0>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

