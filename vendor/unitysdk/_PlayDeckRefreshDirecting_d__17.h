#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGDeckManager; }

#define <PLAYDECKREFRESHDIRECTING>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E8B600)
#define <PLAYDECKREFRESHDIRECTING>D__17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E8BB60)

	inline static constexpr unsigned int <PlayDeckRefreshDirecting>d__17_TypeDefinitionIndex = 21173;

	class <PlayDeckRefreshDirecting>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGDeckManager* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYDECKREFRESHDIRECTING>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYDECKREFRESHDIRECTING>D__17_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

