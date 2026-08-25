#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class CCGVisualCard;
namespace MX::MinigameCCG::Visual { class CCGEffectManager; }
namespace MX::MinigameCCG::Visual { class CCGCardManager; }
class Awaiter;

#define <DESTORYCARD>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA57790)
#define <DESTORYCARD>D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xA58040)

	inline static constexpr unsigned int <DestoryCard>d__7_TypeDefinitionIndex = 491;

	class <DestoryCard>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		CCGVisualCard* card; // 0x28
		::MX::MinigameCCG::Visual::CCGEffectManager* _effectMgr_5__2; // 0x30
		::MX::MinigameCCG::Visual::CCGCardManager* _cardMgr_5__3; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DESTORYCARD>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DESTORYCARD>D__7_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

