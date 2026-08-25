#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGEffectManager; }

#define <PLAYVFX>D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E8D230)
#define <PLAYVFX>D__36_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E8D810)

	inline static constexpr unsigned int <PlayVFX>d__36_TypeDefinitionIndex = 21178;

	class <PlayVFX>d__36 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		Il2CppObject* infos; // 0x28
		::MX::MinigameCCG::Visual::CCGEffectManager* __4__this; // 0x30
		Il2CppObject* __7__wrap1; // 0x38
		Awaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYVFX>D__36_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYVFX>D__36_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

