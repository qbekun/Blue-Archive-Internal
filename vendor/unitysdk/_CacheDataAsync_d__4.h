#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionSkillVisual; }
namespace MX::MinigameCCG { class CCGEvent_SkillVisualOnField; }
namespace MX::MinigameCCG::Procedures { class SkillVFXInfo; }

#define <CACHEDATAASYNC>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E76400)
#define <CACHEDATAASYNC>D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E78080)

	inline static constexpr unsigned int <CacheDataAsync>d__4_TypeDefinitionIndex = 21128;

	class <CacheDataAsync>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionSkillVisual* __4__this; // 0x28
		Il2CppObject* _tasks_5__2; // 0x30
		::MX::MinigameCCG::CCGEvent_SkillVisualOnField* _field_5__3; // 0x38
		Il2CppObject* __7__wrap3; // 0x40
		::MX::MinigameCCG::Procedures::SkillVFXInfo* _info_5__5; // 0x58
		Awaiter* __u__1; // 0x60
		Il2CppObject* __7__wrap5; // 0x70
		CCGVisualEntity* _target_5__7; // 0x88

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CACHEDATAASYNC>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CACHEDATAASYNC>D__4_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

