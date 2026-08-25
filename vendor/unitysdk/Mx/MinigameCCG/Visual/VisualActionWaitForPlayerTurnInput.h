#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERTURNINPUT_SETINPUTENTITIES_OFFSET UNITYSDK_OFFSET(0x1E84330)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERTURNINPUT_USEENTITY_OFFSET UNITYSDK_OFFSET(0x1E84830)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERTURNINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E849B0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERTURNINPUT_RESPONSETURNENDEVENT_OFFSET UNITYSDK_OFFSET(0x1E84A00)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERTURNINPUT_RUN_OFFSET UNITYSDK_OFFSET(0x1E84A80)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionWaitForPlayerTurnInput_TypeDefinitionIndex = 21157;

	class VisualActionWaitForPlayerTurnInput : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* player; // 0x28

		::System::Void SetInputEntities()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERTURNINPUT_SETINPUTENTITIES_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* UseEntity()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERTURNINPUT_USEENTITY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERTURNINPUT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ResponseTurnEndEvent(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERTURNINPUT_RESPONSETURNENDEVENT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERTURNINPUT_RUN_OFFSET))(nullptr);
		}

	};
}

