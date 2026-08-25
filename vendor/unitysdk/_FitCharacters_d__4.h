#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
class InteractiveWorldRaidCommandPlayInteractionAnim;
class Awaiter;

#define <FITCHARACTERS>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x259B930)
#define <FITCHARACTERS>D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259C020)

	inline static constexpr unsigned int <FitCharacters>d__4_TypeDefinitionIndex = 291;

	class <FitCharacters>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x18
		::System::Threading::CancellationToken* cancelToken; // 0x20
		InteractiveWorldRaidCommandPlayInteractionAnim* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FITCHARACTERS>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <FITCHARACTERS>D__4_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

