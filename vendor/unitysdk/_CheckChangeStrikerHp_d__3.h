#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionChangeStrikerHp; }
namespace MX::MinigameCCG { class EventHealthChange; }

#define <CHECKCHANGESTRIKERHP>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E5E370)
#define <CHECKCHANGESTRIKERHP>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E5EC70)

	inline static constexpr unsigned int <CheckChangeStrikerHp>d__3_TypeDefinitionIndex = 21076;

	class <CheckChangeStrikerHp>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionChangeStrikerHp* __4__this; // 0x28
		::MX::MinigameCCG::EventHealthChange* healthChange; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKCHANGESTRIKERHP>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CHECKCHANGESTRIKERHP>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

