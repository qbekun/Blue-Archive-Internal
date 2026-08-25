#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionWaitForPlayerSetFrontStriker; }

#define <RUN>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E81AA0)
#define <RUN>D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E82F80)

	inline static constexpr unsigned int <Run>d__4_TypeDefinitionIndex = 21151;

	class <Run>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionWaitForPlayerSetFrontStriker* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUN>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUN>D__4_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

