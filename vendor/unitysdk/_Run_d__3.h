#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionWaitForPlayerTurnInput; }

#define <RUN>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E84C00)
#define <RUN>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E854D0)

	inline static constexpr unsigned int <Run>d__3_TypeDefinitionIndex = 21155;

	class <Run>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionWaitForPlayerTurnInput* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUN>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUN>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

