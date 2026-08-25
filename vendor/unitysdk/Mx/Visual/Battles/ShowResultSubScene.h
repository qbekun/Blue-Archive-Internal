#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }
namespace MX::Logic::Data { class BattleTypes; }
namespace MX::Visual::Battles { class BattleResultSkipType; }

#define MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_COSHOWBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x1D7C530)
#define MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_GET_MAINSCENE_OFFSET UNITYSDK_OFFSET(0x1D7C5E0)
#define MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_PLAYOPERATORVOICE_OFFSET UNITYSDK_OFFSET(0x1D7C5F0)
#define MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C7E0)
#define MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_COPLAYBEFOREVICTORYTIMELINE_OFFSET UNITYSDK_OFFSET(0x1D7C820)
#define MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_SET_VICTORYINTERACTION_OFFSET UNITYSDK_OFFSET(0x1D7C8B0)
#define MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_ENTER_OFFSET UNITYSDK_OFFSET(0x1D7C8D0)
#define MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_GET_VICTORYINTERACTION_OFFSET UNITYSDK_OFFSET(0x1D7CB20)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int ShowResultSubScene_TypeDefinitionIndex = 20331;

	class ShowResultSubScene : public Il2CppObject
	{
	public:
		::MX::Visual::Battles::BattleSceneHandler* mainScene; // 0x10
		Il2CppObject* _victoryInteraction_k__BackingField; // 0x18

		::System::Collections::IEnumerator* CoShowBattleResult(::MX::Logic::Data::BattleTypes* arg, BattleResultType* arg, ::System::Int64 arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::Logic::Data::BattleTypes*, BattleResultType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_COSHOWBATTLERESULT_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::Visual::Battles::BattleSceneHandler* get_MainScene()
		{
			return (return (::MX::Visual::Battles::BattleSceneHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_GET_MAINSCENE_OFFSET))(nullptr);
		}

		::System::Void PlayOperatorVoice(::MX::Logic::Data::BattleTypes* arg, BattleResultType* arg, ::MX::Visual::Battles::BattleResultSkipType* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleTypes*, BattleResultType*, ::MX::Visual::Battles::BattleResultSkipType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_PLAYOPERATORVOICE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::BattleSceneHandler* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayBeforeVictoryTimeline()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_COPLAYBEFOREVICTORYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void set_victoryInteraction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_SET_VICTORYINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_ENTER_OFFSET))(nullptr);
		}

		Il2CppObject* get_victoryInteraction()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SHOWRESULTSUBSCENE_GET_VICTORYINTERACTION_OFFSET))(nullptr);
		}

	};
}

