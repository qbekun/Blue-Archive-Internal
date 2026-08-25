#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Auth { class NXPAccountLinkBase; }

#define <CLEARAUTHINFO>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9C738C0)
#define <CLEARAUTHINFO>D__22_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9C73DC0)

	inline static constexpr unsigned int <ClearAuthInfo>d__22_TypeDefinitionIndex = 26954;

	class <ClearAuthInfo>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::NPA::Editor::Auth::NXPAccountLinkBase* __4__this; // 0x38
		Awaiter* __u__1; // 0x40
		::System::Runtime::CompilerServices::TaskAwaiter* __u__2; // 0x48
		Awaiter* __u__3; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLEARAUTHINFO>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CLEARAUTHINFO>D__22_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

