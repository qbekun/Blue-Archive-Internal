#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class Awaiter;

#define <<ONCLICKPURCHASEBUTTON>B__35_3>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x25BA530)
#define <<ONCLICKPURCHASEBUTTON>B__35_3>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x25BAA90)

	inline static constexpr unsigned int <<OnClickPurchaseButton>b__35_3>d_TypeDefinitionIndex = 6268;

	class <<OnClickPurchaseButton>b__35_3>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		Awaiter* __u__1; // 0x28

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKPURCHASEBUTTON>B__35_3>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKPURCHASEBUTTON>B__35_3>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

