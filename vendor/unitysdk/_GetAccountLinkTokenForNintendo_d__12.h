#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Auth { class NXPAccountLinkBase; }

#define <GETACCOUNTLINKTOKENFORNINTENDO>D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9C71800)
#define <GETACCOUNTLINKTOKENFORNINTENDO>D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9C71D20)

	inline static constexpr unsigned int <GetAccountLinkTokenForNintendo>d__12_TypeDefinitionIndex = 26945;

	class <GetAccountLinkTokenForNintendo>d__12 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		Il2CppObject* callback; // 0x38
		::NPA::Editor::Auth::NXPAccountLinkBase* __4__this; // 0x40
		<>c__DisplayClass12_0* __8__1; // 0x48
		Il2CppObject* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACCOUNTLINKTOKENFORNINTENDO>D__12_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <GETACCOUNTLINKTOKENFORNINTENDO>D__12_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

