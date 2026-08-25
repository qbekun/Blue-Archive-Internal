#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MXField::UI { class UIFieldHUD_QuestProgressDisplay; }
namespace MXField::Quest { class FieldQuestProgressInfo; }
class Awaiter;

#define <PLAYCOMPLETEQUESTANI>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE98920)
#define <PLAYCOMPLETEQUESTANI>D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xE992E0)

	inline static constexpr unsigned int <PlayCompleteQuestAni>d__19_TypeDefinitionIndex = 10708;

	class <PlayCompleteQuestAni>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MXField::UI::UIFieldHUD_QuestProgressDisplay* __4__this; // 0x28
		::MXField::Quest::FieldQuestProgressInfo* currentQuestProgressInfo; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Single _prevRatio_5__2; // 0x40
		::System::Single _currentRatio_5__3; // 0x44
		::System::Single _elapsed_5__4; // 0x48
		::System::Single _duration_5__5; // 0x4C
		Awaiter* __u__1; // 0x50
		::System::Int32 _nodeIndex_5__6; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOMPLETEQUESTANI>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOMPLETEQUESTANI>D__19_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

