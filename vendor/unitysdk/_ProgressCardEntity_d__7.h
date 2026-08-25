#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class VisualActionSelectEntities;
namespace MX::MinigameCCG { class CCGPlayer; }
class Awaiter;

#define <PROGRESSCARDENTITY>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26E4780)
#define <PROGRESSCARDENTITY>D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26E4E10)

	inline static constexpr unsigned int <ProgressCardEntity>d__7_TypeDefinitionIndex = 391;

	class <ProgressCardEntity>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		VisualActionSelectEntities* __4__this; // 0x28
		::MX::MinigameCCG::CCGPlayer* player; // 0x30
		::System::Boolean _canSelection_5__2; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROGRESSCARDENTITY>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PROGRESSCARDENTITY>D__7_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

