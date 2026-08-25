#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG::Visual { class CCGInputState; }
namespace MX::MinigameCCG { class CCGEntityLocation; }

#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_ACTIVEBLACKPANEL_OFFSET UNITYSDK_OFFSET(0x1E87810)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_TRYEXECUTESTART_OFFSET UNITYSDK_OFFSET(0x1E87920)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_INPUTEVENT_OFFSET UNITYSDK_OFFSET(0x1E88280)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E88500)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_GET_ISACTIVEBLACKPANEL_OFFSET UNITYSDK_OFFSET(0x1E88C00)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_EXECUTEEND_OFFSET UNITYSDK_OFFSET(0x1E88550)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_GET_BLACKPANELRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x1E88CF0)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_CANOPENDECK_OFFSET UNITYSDK_OFFSET(0x1E87D90)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER__CANOPENDECK_G__POPULATEBATTLECARDPLACEMENTS|22_0_OFFSET UNITYSDK_OFFSET(0x1E88DC0)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E891C0)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E891D0)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1E891F0)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_ONCLICKENTITY_OFFSET UNITYSDK_OFFSET(0x1E88C50)
#define MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_CANINPUTBLACKPANEL_OFFSET UNITYSDK_OFFSET(0x1E89290)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGInputController_TypeDefinitionIndex = 21168;

	class CCGInputController : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::Visual::CCGFlowProcessor* processor; // 0x18
		::UnityEngine::MeshRenderer* blackPanel; // 0x20
		::UnityEngine::GameObject* deckSpot; // 0x28
		::System::Single longPressThreshold; // 0x30
		::System::Single touchStartTime; // 0x34
		::System::Boolean isLongPress; // 0x38
		::System::Boolean canInputBlackPanel; // 0x39
		CCGVisualEntity* visualEntity; // 0x40
		::MX::MinigameCCG::Visual::CCGInputState* InputState; // 0x0
		Il2CppObject* CanInputEntities; // 0x8

		::System::Void ActiveBlackPanel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_ACTIVEBLACKPANEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryExecuteStart()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_TRYEXECUTESTART_OFFSET))(nullptr);
		}

		::System::Void InputEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_INPUTEVENT_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_EXECUTE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActiveBlackPanel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_GET_ISACTIVEBLACKPANEL_OFFSET))(nullptr);
		}

		::System::Void ExecuteEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_EXECUTEEND_OFFSET))(nullptr);
		}

		::System::Int32 get_BlackPanelRenderQueue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_GET_BLACKPANELRENDERQUEUE_OFFSET))(nullptr);
		}

		::System::Boolean CanOpenDeck(::UnityEngine::GameObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_CANOPENDECK_OFFSET))(arg, nullptr);
		}

		::System::Void _CanOpenDeck_g__PopulateBattleCardPlacements|22_0(Il2CppObject* arg, Il2CppObject* arg, ::MX::MinigameCCG::CCGEntityLocation* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MX::MinigameCCG::CCGEntityLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER__CANOPENDECK_G__POPULATEBATTLECARDPLACEMENTS|22_0_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickEntity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_ONCLICKENTITY_OFFSET))(nullptr);
		}

		::System::Void CanInputBlackPanel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGINPUTCONTROLLER_CANINPUTBLACKPANEL_OFFSET))(arg, nullptr);
		}

	};
}

