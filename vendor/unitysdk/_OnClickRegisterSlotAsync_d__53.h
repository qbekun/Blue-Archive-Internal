#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIEventContentClueViewModel;

#define <ONCLICKREGISTERSLOTASYNC>D__53_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x249CE90)
#define <ONCLICKREGISTERSLOTASYNC>D__53_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x249D6C0)

	inline static constexpr unsigned int <OnClickRegisterSlotAsync>d__53_TypeDefinitionIndex = 5768;

	class <OnClickRegisterSlotAsync>d__53 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::System::Int32 slotId; // 0x28
		UIEventContentClueViewModel* __4__this; // 0x30
		Il2CppObject* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONCLICKREGISTERSLOTASYNC>D__53_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <ONCLICKREGISTERSLOTASYNC>D__53_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

