#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionGamePrepare; }

#define <RUN>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E699D0)
#define <RUN>D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E6A6F0)

	inline static constexpr unsigned int <Run>d__1_TypeDefinitionIndex = 21098;

	class <Run>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionGamePrepare* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUN>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUN>D__1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

