#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VFX; }
namespace MX::MinigameCCG::Visual { class CCGEffectManager; }

#define <PLAYVFX>D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E8D820)
#define <PLAYVFX>D__37_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E8E070)

	inline static constexpr unsigned int <PlayVFX>d__37_TypeDefinitionIndex = 21179;

	class <PlayVFX>d__37 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VFX* vfx; // 0x28
		::MX::MinigameCCG::Visual::CCGEffectManager* __4__this; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYVFX>D__37_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYVFX>D__37_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

