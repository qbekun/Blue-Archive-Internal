#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }

#define MX_VISUAL_BATTLES_PREPARESUBSCENE__ENTERBATTLE_B__11_1_OFFSET UNITYSDK_OFFSET(0x1D79310)
#define MX_VISUAL_BATTLES_PREPARESUBSCENE_PLAYENGAGETIMELINE_OFFSET UNITYSDK_OFFSET(0x1D79420)
#define MX_VISUAL_BATTLES_PREPARESUBSCENE_GETRAIDTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1D79490)
#define MX_VISUAL_BATTLES_PREPARESUBSCENE_GET_MAINSCENE_OFFSET UNITYSDK_OFFSET(0x1D796C0)
#define MX_VISUAL_BATTLES_PREPARESUBSCENE_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1D796D0)
#define MX_VISUAL_BATTLES_PREPARESUBSCENE__ENTERBATTLE_B__11_4_OFFSET UNITYSDK_OFFSET(0x1D7A1F0)
#define MX_VISUAL_BATTLES_PREPARESUBSCENE_ENTER_OFFSET UNITYSDK_OFFSET(0x1D7A270)
#define MX_VISUAL_BATTLES_PREPARESUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D75B30)
#define MX_VISUAL_BATTLES_PREPARESUBSCENE_GETELIMINATERAIDTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1D7A5F0)
#define MX_VISUAL_BATTLES_PREPARESUBSCENE_GETWORLDRAIDTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1D7A760)
#define MX_VISUAL_BATTLES_PREPARESUBSCENE_GETGROUNDTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1D7A8D0)
#define MX_VISUAL_BATTLES_PREPARESUBSCENE_LEAVE_OFFSET UNITYSDK_OFFSET(0x1D7ABF0)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int PrepareSubScene_TypeDefinitionIndex = 20320;

	class PrepareSubScene : public Il2CppObject
	{
	public:
		::MX::Visual::Battles::BattleSceneHandler* mainScene; // 0x10

		::System::Void _EnterBattle_b__11_1(UIBattle* arg)
		{
			((::System::Void(*)(UIBattle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PREPARESUBSCENE__ENTERBATTLE_B__11_1_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayEngageTimeline()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PREPARESUBSCENE_PLAYENGAGETIMELINE_OFFSET))(nullptr);
		}

		::System::String* GetRaidTimelinePath(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PREPARESUBSCENE_GETRAIDTIMELINEPATH_OFFSET))(arg, nullptr);
		}

		::MX::Visual::Battles::BattleSceneHandler* get_MainScene()
		{
			return (return (::MX::Visual::Battles::BattleSceneHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PREPARESUBSCENE_GET_MAINSCENE_OFFSET))(nullptr);
		}

		::System::Void EnterBattle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PREPARESUBSCENE_ENTERBATTLE_OFFSET))(nullptr);
		}

		::System::Void _EnterBattle_b__11_4(UIBattle* arg)
		{
			((::System::Void(*)(UIBattle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PREPARESUBSCENE__ENTERBATTLE_B__11_4_OFFSET))(arg, nullptr);
		}

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PREPARESUBSCENE_ENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::BattleSceneHandler* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PREPARESUBSCENE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetEliminateRaidTimelinePath(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PREPARESUBSCENE_GETELIMINATERAIDTIMELINEPATH_OFFSET))(arg, nullptr);
		}

		::System::String* GetWorldRaidTimelinePath(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PREPARESUBSCENE_GETWORLDRAIDTIMELINEPATH_OFFSET))(arg, nullptr);
		}

		::System::String* GetGroundTimelinePath(bool&* arg)
		{
			return (return (::System::String*(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PREPARESUBSCENE_GETGROUNDTIMELINEPATH_OFFSET))(arg, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_PREPARESUBSCENE_LEAVE_OFFSET))(nullptr);
		}

	};
}

