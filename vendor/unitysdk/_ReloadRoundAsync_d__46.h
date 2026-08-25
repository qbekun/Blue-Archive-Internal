#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIEventContentClueViewModel;

#define <RELOADROUNDASYNC>D__46_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x249C790)
#define <RELOADROUNDASYNC>D__46_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x249CD40)

	inline static constexpr unsigned int <ReloadRoundAsync>d__46_TypeDefinitionIndex = 5765;

	class <ReloadRoundAsync>d__46 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIEventContentClueViewModel* __4__this; // 0x28
		Il2CppObject* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RELOADROUNDASYNC>D__46_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RELOADROUNDASYNC>D__46_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

