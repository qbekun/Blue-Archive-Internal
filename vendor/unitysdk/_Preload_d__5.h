#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG { class ICCGCardData; }

#define <PRELOAD>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E7B770)
#define <PRELOAD>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E7BE90)

	inline static constexpr unsigned int <Preload>d__5_TypeDefinitionIndex = 21134;

	class <Preload>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		CCGVisualCard* card; // 0x28
		::MX::MinigameCCG::ICCGCardData* data; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PRELOAD>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PRELOAD>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

