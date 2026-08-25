#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGEvent; }

#define MX_MINIGAMECCG_CCGBEHAVIOUR_USER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7450)
#define MX_MINIGAMECCG_CCGBEHAVIOUR_USER_PLAYINPUTEVENT_OFFSET UNITYSDK_OFFSET(0x1DB7480)
#define MX_MINIGAMECCG_CCGBEHAVIOUR_USER_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1DB7620)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGBehaviour_User_TypeDefinitionIndex = 20444;

	class CCGBehaviour_User : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _player_k__BackingField; // 0x20

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_USER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayInputEvent(::MX::MinigameCCG::CCGEvent* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::CCGEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_USER_PLAYINPUTEVENT_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_player()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_USER_GET_PLAYER_OFFSET))(nullptr);
		}

	};
}

