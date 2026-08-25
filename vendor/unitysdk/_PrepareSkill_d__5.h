#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionSkillVisual; }

#define <PREPARESKILL>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E78090)
#define <PREPARESKILL>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E790E0)

	inline static constexpr unsigned int <PrepareSkill>d__5_TypeDefinitionIndex = 21129;

	class <PrepareSkill>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionSkillVisual* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PREPARESKILL>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PREPARESKILL>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

