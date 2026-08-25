#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class <>c__DisplayClass93_0;
class Awaiter;

#define <<CREATECHARACTERECHELON>G__LOADALLECHELONCHARACTERS|1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24F68D0)
#define <<CREATECHARACTERECHELON>G__LOADALLECHELONCHARACTERS|1>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x24F6DC0)

	inline static constexpr unsigned int <<CreateCharacterEchelon>g__LoadAllEchelonCharacters|1>d_TypeDefinitionIndex = 6035;

	class <<CreateCharacterEchelon>g__LoadAllEchelonCharacters|1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		<>c__DisplayClass93_0* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CREATECHARACTERECHELON>G__LOADALLECHELONCHARACTERS|1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<CREATECHARACTERECHELON>G__LOADALLECHELONCHARACTERS|1>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

