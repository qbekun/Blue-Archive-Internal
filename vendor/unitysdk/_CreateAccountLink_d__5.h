#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Auth { class NXPAccountLinkConsole; }

#define <CREATEACCOUNTLINK>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9C7C330)
#define <CREATEACCOUNTLINK>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9C7CAE0)

	inline static constexpr unsigned int <CreateAccountLink>d__5_TypeDefinitionIndex = 26987;

	class <CreateAccountLink>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::NPA::Editor::Auth::NXPAccountLinkConsole* __4__this; // 0x38
		Il2CppObject* callback; // 0x40
		<>c__DisplayClass5_0* __8__1; // 0x48
		::System::String* inLinkTicket; // 0x50
		::System::String* inRedirectUrl; // 0x58
		Awaiter* __u__1; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEACCOUNTLINK>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CREATEACCOUNTLINK>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

