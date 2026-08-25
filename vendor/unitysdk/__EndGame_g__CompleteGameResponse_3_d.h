#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MiniGameCCGCompleteGameResponse; }

#define <<ENDGAME>G__COMPLETEGAMERESPONSE|3>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E963B0)
#define <<ENDGAME>G__COMPLETEGAMERESPONSE|3>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E96850)

	inline static constexpr unsigned int <<EndGame>g__CompleteGameResponse|3>d_TypeDefinitionIndex = 21198;

	class <<EndGame>g__CompleteGameResponse|3>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::MX::NetworkProtocol::MiniGameCCGCompleteGameResponse* rewardResponse; // 0x38
		<>c__DisplayClass22_0* __4__this; // 0x40
		<>c__DisplayClass22_3* __8__1; // 0x48
		Awaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENDGAME>G__COMPLETEGAMERESPONSE|3>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<ENDGAME>G__COMPLETEGAMERESPONSE|3>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

