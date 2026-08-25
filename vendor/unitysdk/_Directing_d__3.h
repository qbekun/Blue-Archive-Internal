#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionKillStriker; }

#define <DIRECTING>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E6E580)
#define <DIRECTING>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E6ECF0)

	inline static constexpr unsigned int <Directing>d__3_TypeDefinitionIndex = 21111;

	class <Directing>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		CCGVisualStriker* striker; // 0x28
		::MX::MinigameCCG::Visual::VisualActionKillStriker* __4__this; // 0x30
		<>c__DisplayClass3_0* __8__1; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DIRECTING>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DIRECTING>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

