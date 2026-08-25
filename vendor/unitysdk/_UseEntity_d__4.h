#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionWaitForPlayerTurnInput; }

#define <USEENTITY>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E854E0)
#define <USEENTITY>D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E85CB0)

	inline static constexpr unsigned int <UseEntity>d__4_TypeDefinitionIndex = 21156;

	class <UseEntity>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionWaitForPlayerTurnInput* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <USEENTITY>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <USEENTITY>D__4_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

