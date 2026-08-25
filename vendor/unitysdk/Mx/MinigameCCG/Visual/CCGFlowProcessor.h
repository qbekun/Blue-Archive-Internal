#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class SelectionContainer; }
namespace MX::MinigameCCG::Visual { class EntityPhaseState; }
namespace MX::MinigameCCG { class CCGEvent; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG::Visual { class VFXContainer; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_CUREVENTSTATE_OFFSET UNITYSDK_OFFSET(0x1E8FEE0)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_SELECTION_OFFSET UNITYSDK_OFFSET(0x1E8FEF0)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_STATEEND_OFFSET UNITYSDK_OFFSET(0x1E8FF00)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_TARGETVFXCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E8FF10)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1E8FF20)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_TARGETVFXCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E8FF30)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_TARGETENTITIES_OFFSET UNITYSDK_OFFSET(0x1E8FF40)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_TARGETENTITIES_OFFSET UNITYSDK_OFFSET(0x1E8FF50)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_CUREVENTSTATE_OFFSET UNITYSDK_OFFSET(0x1E8FF60)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_SOURCEPHASESTATE_OFFSET UNITYSDK_OFFSET(0x1E8FF70)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_STATECANCEL_OFFSET UNITYSDK_OFFSET(0x1E8FF80)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_SOURCEPHASESTATE_OFFSET UNITYSDK_OFFSET(0x1E8FF90)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_STATECANCEL_OFFSET UNITYSDK_OFFSET(0x1E8FFA0)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_TURNPLAYER_OFFSET UNITYSDK_OFFSET(0x1E8FFB0)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0x1E8FFC0)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E8FFD0)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_STATEEND_OFFSET UNITYSDK_OFFSET(0x1E90180)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1E90190)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_TURNPLAYER_OFFSET UNITYSDK_OFFSET(0x1E901A0)
#define MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E901B0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGFlowProcessor_TypeDefinitionIndex = 21189;

	class CCGFlowProcessor : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGGame* game; // 0x18
		Il2CppObject* _TargetEntities_k__BackingField; // 0x20
		::MX::MinigameCCG::SelectionContainer* _Selection_k__BackingField; // 0x28
		::MX::MinigameCCG::Visual::EntityPhaseState* _SourcePhaseState_k__BackingField; // 0x30
		::MX::MinigameCCG::CCGEvent* _CurEventState_k__BackingField; // 0x38
		::System::Boolean _StateEnd_k__BackingField; // 0x40
		::System::Boolean _StateCancel_k__BackingField; // 0x41
		::MX::MinigameCCG::CCGPlayer* _TurnPlayer_k__BackingField; // 0x48
		::MX::MinigameCCG::Visual::VFXContainer* _TargetVFXContainer_k__BackingField; // 0x50
		::System::Boolean _Loop_k__BackingField; // 0x58

		::MX::MinigameCCG::CCGEvent* get_CurEventState()
		{
			return (return (::MX::MinigameCCG::CCGEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_CUREVENTSTATE_OFFSET))(nullptr);
		}

		::System::Void set_Selection(::MX::MinigameCCG::SelectionContainer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::SelectionContainer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_SELECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_StateEnd()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_STATEEND_OFFSET))(nullptr);
		}

		::System::Void set_TargetVFXContainer(::MX::MinigameCCG::Visual::VFXContainer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::Visual::VFXContainer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_TARGETVFXCONTAINER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Loop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_LOOP_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::Visual::VFXContainer* get_TargetVFXContainer()
		{
			return (return (::MX::MinigameCCG::Visual::VFXContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_TARGETVFXCONTAINER_OFFSET))(nullptr);
		}

		::System::Void set_TargetEntities(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_TARGETENTITIES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TargetEntities()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_TARGETENTITIES_OFFSET))(nullptr);
		}

		::System::Void set_CurEventState(::MX::MinigameCCG::CCGEvent* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_CUREVENTSTATE_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::Visual::EntityPhaseState* get_SourcePhaseState()
		{
			return (return (::MX::MinigameCCG::Visual::EntityPhaseState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_SOURCEPHASESTATE_OFFSET))(nullptr);
		}

		::System::Void set_StateCancel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_STATECANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_SourcePhaseState(::MX::MinigameCCG::Visual::EntityPhaseState* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::Visual::EntityPhaseState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_SOURCEPHASESTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_StateCancel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_STATECANCEL_OFFSET))(nullptr);
		}

		::System::Void set_TurnPlayer(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_TURNPLAYER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::SelectionContainer* get_Selection()
		{
			return (return (::MX::MinigameCCG::SelectionContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_SELECTION_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::MX::MinigameCCG::CCGGame* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::CCGGame*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void set_StateEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_STATEEND_OFFSET))(arg, nullptr);
		}

		::System::Void set_Loop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_SET_LOOP_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_TurnPlayer()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_GET_TURNPLAYER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGFLOWPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

