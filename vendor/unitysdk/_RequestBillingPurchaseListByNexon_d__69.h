#pragma once
#include "unitysdk.h"

class BattlePassTask;

#define <REQUESTBILLINGPURCHASELISTBYNEXON>D__69_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x218B350)
#define <REQUESTBILLINGPURCHASELISTBYNEXON>D__69_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x218B9C0)

	inline static constexpr unsigned int <RequestBillingPurchaseListByNexon>d__69_TypeDefinitionIndex = 4080;

	class <RequestBillingPurchaseListByNexon>d__69 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		BattlePassTask* __4__this; // 0x30
		Il2CppObject* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTBILLINGPURCHASELISTBYNEXON>D__69_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <REQUESTBILLINGPURCHASELISTBYNEXON>D__69_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

