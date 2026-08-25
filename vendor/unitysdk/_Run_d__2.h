#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionWaitForPlayerSelectCharacters; }
namespace MX::MinigameCCG { class CCGPlayer; }

#define <RUN>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E808C0)
#define <RUN>D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E80EC0)

	inline static constexpr unsigned int <Run>d__2_TypeDefinitionIndex = 21148;

	class <Run>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionWaitForPlayerSelectCharacters* __4__this; // 0x28
		::MX::MinigameCCG::CCGPlayer* _player_5__2; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUN>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUN>D__2_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

