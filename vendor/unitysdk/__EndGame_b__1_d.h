#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MiniGameCCGEndStageDualResponse; }

#define <<ENDGAME>B__1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E96860)
#define <<ENDGAME>B__1>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E96F40)

	inline static constexpr unsigned int <<EndGame>b__1>d_TypeDefinitionIndex = 21199;

	class <<EndGame>b__1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		<>c__DisplayClass22_0* __4__this; // 0x38
		::MX::NetworkProtocol::MiniGameCCGEndStageDualResponse* response; // 0x40
		Awaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENDGAME>B__1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<ENDGAME>B__1>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

