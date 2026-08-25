#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace MX::MinigameCCG::Visual { class CCGEffectManager; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::MinigameCCG::Visual { class CCGCardManager; }
namespace MX::MinigameCCG::UI { class CCGToastPosition; }
namespace MX::MinigameCCG::UI { class CCGToastLifetime; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_HUD; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTION_DETACHBUTTONEVENT_OFFSET UNITYSDK_OFFSET(0x1E3BF40)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1E3C110)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_GET_EFFECTMGR_OFFSET UNITYSDK_OFFSET(0x1E3C1A0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_GET_GAME_OFFSET UNITYSDK_OFFSET(0x1E3C220)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_RESPONSESHIFTEVENT_OFFSET UNITYSDK_OFFSET(0x1E3C230)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_ATTACHBUTTONEVENT_OFFSET UNITYSDK_OFFSET(0x1E3C240)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_GET_CARDMGR_OFFSET UNITYSDK_OFFSET(0x1E3C410)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_FLOATTOAST_OFFSET UNITYSDK_OFFSET(0x1E3C490)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C540)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_GET_HUD_OFFSET UNITYSDK_OFFSET(0x1E3CBC0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_SETINPUTENTITIES_OFFSET UNITYSDK_OFFSET(0x1E3CC60)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_HIDETOAST_OFFSET UNITYSDK_OFFSET(0x1E3CC70)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_RESPONSESELECTIONCONFIRMEDEVENT_OFFSET UNITYSDK_OFFSET(0x1E3CD00)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E3CD10)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_RESPONSETURNENDEVENT_OFFSET UNITYSDK_OFFSET(0x1E3CE70)
#define MX_MINIGAMECCG_VISUAL_VISUALACTION_GET_PROCESSOR_OFFSET UNITYSDK_OFFSET(0x1E3CE80)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualAction_TypeDefinitionIndex = 21058;

	class VisualAction : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGGame* _game_k__BackingField; // 0x10
		::MX::MinigameCCG::Visual::CCGFlowProcessor* _processor_k__BackingField; // 0x18
		::System::Boolean isReadyForNextStep; // 0x20

		::System::Void DetachButtonEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_DETACHBUTTONEVENT_OFFSET))(nullptr);
		}

		::System::Threading::CancellationToken* get_CancellationToken()
		{
			return (return (::System::Threading::CancellationToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_GET_CANCELLATIONTOKEN_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::Visual::CCGEffectManager* get_effectMgr()
		{
			return (return (::MX::MinigameCCG::Visual::CCGEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_GET_EFFECTMGR_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGGame* get_game()
		{
			return (return (::MX::MinigameCCG::CCGGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_GET_GAME_OFFSET))(nullptr);
		}

		::System::Boolean ResponseShiftEvent(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_RESPONSESHIFTEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void AttachButtonEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_ATTACHBUTTONEVENT_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::Visual::CCGCardManager* get_cardMgr()
		{
			return (return (::MX::MinigameCCG::Visual::CCGCardManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_GET_CARDMGR_OFFSET))(nullptr);
		}

		::System::Void FloatToast(::MX::MinigameCCG::UI::CCGToastPosition* arg, ::MX::MinigameCCG::UI::CCGToastLifetime* arg, ::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastPosition*, ::MX::MinigameCCG::UI::CCGToastLifetime*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_FLOATTOAST_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::UI::UICardGame_InGame_HUD* get_HUD()
		{
			return (return (::MX::MinigameCCG::UI::UICardGame_InGame_HUD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_GET_HUD_OFFSET))(nullptr);
		}

		::System::Void SetInputEntities()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_SETINPUTENTITIES_OFFSET))(nullptr);
		}

		::System::Void HideToast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_HIDETOAST_OFFSET))(nullptr);
		}

		::System::Boolean ResponseSelectionConfirmedEvent(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_RESPONSESELECTIONCONFIRMEDEVENT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_RUN_OFFSET))(nullptr);
		}

		::System::Boolean ResponseTurnEndEvent(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_RESPONSETURNENDEVENT_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::Visual::CCGFlowProcessor* get_processor()
		{
			return (return (::MX::MinigameCCG::Visual::CCGFlowProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTION_GET_PROCESSOR_OFFSET))(nullptr);
		}

	};
}

