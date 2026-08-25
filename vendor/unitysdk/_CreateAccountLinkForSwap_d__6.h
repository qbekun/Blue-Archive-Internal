#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Auth { class NXPAccountLinkConsole; }

#define <CREATEACCOUNTLINKFORSWAP>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9C7D620)
#define <CREATEACCOUNTLINKFORSWAP>D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9C7DDD0)

	inline static constexpr unsigned int <CreateAccountLinkForSwap>d__6_TypeDefinitionIndex = 26989;

	class <CreateAccountLinkForSwap>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::NPA::Editor::Auth::NXPAccountLinkConsole* __4__this; // 0x38
		Il2CppObject* callback; // 0x40
		<>c__DisplayClass6_0* __8__1; // 0x48
		::System::String* inLinkTicket; // 0x50
		::System::String* inRedirectUrl; // 0x58
		Awaiter* __u__1; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEACCOUNTLINKFORSWAP>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CREATEACCOUNTLINKFORSWAP>D__6_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

