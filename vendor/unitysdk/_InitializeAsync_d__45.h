#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIEventContentClueViewModel;

#define <INITIALIZEASYNC>D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x249C1D0)
#define <INITIALIZEASYNC>D__45_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x249C780)

	inline static constexpr unsigned int <InitializeAsync>d__45_TypeDefinitionIndex = 5764;

	class <InitializeAsync>d__45 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIEventContentClueViewModel* __4__this; // 0x28
		Il2CppObject* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZEASYNC>D__45_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZEASYNC>D__45_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

