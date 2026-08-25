#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG::Visual { class VisualActionWaitForPlayerSetFrontStriker; }
namespace UnityEngine { class ParticleSystem; }

#define <WAITFORSETFRONT>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E82F90)
#define <WAITFORSETFRONT>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E84210)

	inline static constexpr unsigned int <WaitForSetFront>d__5_TypeDefinitionIndex = 21152;

	class <WaitForSetFront>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::CCGEntity* entity; // 0x28
		::MX::MinigameCCG::Visual::VisualActionWaitForPlayerSetFrontStriker* __4__this; // 0x30
		::System::Int32 _selectedEntity_5__2; // 0x38
		::System::String* _message_5__3; // 0x40
		::UnityEngine::ParticleSystem* _effect_5__4; // 0x48
		::System::String* _effectKey_5__5; // 0x50
		Awaiter* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORSETFRONT>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WAITFORSETFRONT>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

