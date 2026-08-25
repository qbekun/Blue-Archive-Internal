#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_WaitForPlayerSetFrontStriker; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSETFRONTSTRIKER_SETINPUTENTITIES_OFFSET UNITYSDK_OFFSET(0x1E80ED0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSETFRONTSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E81230)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSETFRONTSTRIKER_RUN_OFFSET UNITYSDK_OFFSET(0x1E81280)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSETFRONTSTRIKER_WAITFORSETFRONT_OFFSET UNITYSDK_OFFSET(0x1E81400)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSETFRONTSTRIKER_RESPONSESHIFTEVENT_OFFSET UNITYSDK_OFFSET(0x1E815B0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionWaitForPlayerSetFrontStriker_TypeDefinitionIndex = 21154;

	class VisualActionWaitForPlayerSetFrontStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_WaitForPlayerSetFrontStriker* eventInput; // 0x28
		::System::Boolean isForceFrontCharacterSelection; // 0x30

		::System::Void SetInputEntities()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSETFRONTSTRIKER_SETINPUTENTITIES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_WaitForPlayerSetFrontStriker* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_WaitForPlayerSetFrontStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSETFRONTSTRIKER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSETFRONTSTRIKER_RUN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* WaitForSetFront(::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSETFRONTSTRIKER_WAITFORSETFRONT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ResponseShiftEvent(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSETFRONTSTRIKER_RESPONSESHIFTEVENT_OFFSET))(arg, nullptr);
		}

	};
}

