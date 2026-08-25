#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class CCGHandManager;
class Awaiter;

#define <USEDCARDDIRECTING>D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26F1F30)
#define <USEDCARDDIRECTING>D__31_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26F2C70)

	inline static constexpr unsigned int <UsedCardDirecting>d__31_TypeDefinitionIndex = 420;

	class <UsedCardDirecting>d__31 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		CCGHandManager* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <USEDCARDDIRECTING>D__31_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <USEDCARDDIRECTING>D__31_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

