#pragma once
#include "unitysdk.h"

namespace NPA::Auth { class NXPToySignOutResult; }

#define <<SIGNOUT>G__ONSIGNOUTDONE|0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9C73400)
#define <<SIGNOUT>G__ONSIGNOUTDONE|0>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9C73800)

	inline static constexpr unsigned int <<SignOut>g__OnSignOutDone|0>d_TypeDefinitionIndex = 26951;

	class <<SignOut>g__OnSignOutDone|0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::NPA::Auth::NXPToySignOutResult* result; // 0x38
		<>c__DisplayClass19_0* __4__this; // 0x40
		Awaiter* __u__1; // 0x48
		::System::Runtime::CompilerServices::TaskAwaiter* __u__2; // 0x50
		Awaiter* __u__3; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SIGNOUT>G__ONSIGNOUTDONE|0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<SIGNOUT>G__ONSIGNOUTDONE|0>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

