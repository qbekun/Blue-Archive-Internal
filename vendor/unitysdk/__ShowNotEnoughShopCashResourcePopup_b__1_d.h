#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
class <>c__DisplayClass200_0;
class Awaiter;

#define <<SHOWNOTENOUGHSHOPCASHRESOURCEPOPUP>B__1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FFA8C0)
#define <<SHOWNOTENOUGHSHOPCASHRESOURCEPOPUP>B__1>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1FFADF0)

	inline static constexpr unsigned int <<ShowNotEnoughShopCashResourcePopup>b__1>d_TypeDefinitionIndex = 3095;

	class <<ShowNotEnoughShopCashResourcePopup>b__1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x18
		<>c__DisplayClass200_0* __4__this; // 0x20
		Awaiter* __u__1; // 0x28

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SHOWNOTENOUGHSHOPCASHRESOURCEPOPUP>B__1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<SHOWNOTENOUGHSHOPCASHRESOURCEPOPUP>B__1>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

