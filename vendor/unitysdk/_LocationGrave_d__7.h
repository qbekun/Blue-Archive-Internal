#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionDrawCard; }

#define <LOCATIONGRAVE>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E691E0)
#define <LOCATIONGRAVE>D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E69630)

	inline static constexpr unsigned int <LocationGrave>d__7_TypeDefinitionIndex = 21096;

	class <LocationGrave>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionDrawCard* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOCATIONGRAVE>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOCATIONGRAVE>D__7_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

