#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }
namespace MX::Logic::Battles { class GameStateEventArgs; }

#define MX_VISUAL_BATTLES_INBATTLESUBSCENE_GET_MAINSCENE_OFFSET UNITYSDK_OFFSET(0x1D76F80)
#define MX_VISUAL_BATTLES_INBATTLESUBSCENE_ENTER_OFFSET UNITYSDK_OFFSET(0x1D76F90)
#define MX_VISUAL_BATTLES_INBATTLESUBSCENE_BATTLE_GAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1D771A0)
#define MX_VISUAL_BATTLES_INBATTLESUBSCENE_STARTEXCESSIVETOUCHCHECK_OFFSET UNITYSDK_OFFSET(0x1D77010)
#define MX_VISUAL_BATTLES_INBATTLESUBSCENE_GET_UPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x1D77380)
#define MX_VISUAL_BATTLES_INBATTLESUBSCENE_STOPEXCESSIVETOUCHCHECK_OFFSET UNITYSDK_OFFSET(0x1D772B0)
#define MX_VISUAL_BATTLES_INBATTLESUBSCENE_SET_UPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x1D77390)
#define MX_VISUAL_BATTLES_INBATTLESUBSCENE_LEAVE_OFFSET UNITYSDK_OFFSET(0x1D773A0)
#define MX_VISUAL_BATTLES_INBATTLESUBSCENE_GET_HASPRESENTATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D77410)
#define MX_VISUAL_BATTLES_INBATTLESUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D75BE0)
#define MX_VISUAL_BATTLES_INBATTLESUBSCENE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1D774A0)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int InBattleSubScene_TypeDefinitionIndex = 20310;

	class InBattleSubScene : public Il2CppObject
	{
	public:
		::MX::Visual::Battles::BattleSceneHandler* mainScene; // 0x10
		::System::Int32 _UpdateFrame_k__BackingField; // 0x18

		::MX::Visual::Battles::BattleSceneHandler* get_MainScene()
		{
			return (return (::MX::Visual::Battles::BattleSceneHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_INBATTLESUBSCENE_GET_MAINSCENE_OFFSET))(nullptr);
		}

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_INBATTLESUBSCENE_ENTER_OFFSET))(nullptr);
		}

		::System::Void Battle_GameStateChanged(::System::Object* arg, ::MX::Logic::Battles::GameStateEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::GameStateEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_INBATTLESUBSCENE_BATTLE_GAMESTATECHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExcessiveTouchCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_INBATTLESUBSCENE_STARTEXCESSIVETOUCHCHECK_OFFSET))(nullptr);
		}

		::System::Int32 get_UpdateFrame()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_INBATTLESUBSCENE_GET_UPDATEFRAME_OFFSET))(nullptr);
		}

		::System::Void StopExcessiveTouchCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_INBATTLESUBSCENE_STOPEXCESSIVETOUCHCHECK_OFFSET))(nullptr);
		}

		::System::Void set_UpdateFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_INBATTLESUBSCENE_SET_UPDATEFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_INBATTLESUBSCENE_LEAVE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasPresentationUpdate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_INBATTLESUBSCENE_GET_HASPRESENTATIONUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::BattleSceneHandler* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_INBATTLESUBSCENE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Advance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_INBATTLESUBSCENE_ADVANCE_OFFSET))(nullptr);
		}

	};
}

