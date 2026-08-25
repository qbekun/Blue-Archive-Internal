#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionDamageStriker; }
namespace MX::MinigameCCG { class EventHealthChange; }

#define <PLAYDAMAGEANIMATION>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E64680)
#define <PLAYDAMAGEANIMATION>D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E65130)

	inline static constexpr unsigned int <PlayDamageAnimation>d__9_TypeDefinitionIndex = 21086;

	class <PlayDamageAnimation>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionDamageStriker* __4__this; // 0x28
		::MX::MinigameCCG::EventHealthChange* healthChange; // 0x30
		CCGVisualStriker* _striker_5__2; // 0x38
		::System::Boolean _isActiveSkillLoop_5__3; // 0x40
		Awaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYDAMAGEANIMATION>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYDAMAGEANIMATION>D__9_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

