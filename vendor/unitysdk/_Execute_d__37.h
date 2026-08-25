#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGEvent; }

#define <EXECUTE>D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E901C0)
#define <EXECUTE>D__37_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E912D0)

	inline static constexpr unsigned int <Execute>d__37_TypeDefinitionIndex = 21188;

	class <Execute>d__37 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGFlowProcessor* __4__this; // 0x28
		::MX::MinigameCCG::CCGGame* _game; // 0x30
		Il2CppObject* _behaviours_5__2; // 0x38
		Il2CppObject* __7__wrap2; // 0x40
		::MX::MinigameCCG::CCGEvent* _ev_5__4; // 0x48
		Il2CppObject* __7__wrap4; // 0x50
		Awaiter* __u__1; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__37_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__37_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

