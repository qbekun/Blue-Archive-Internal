#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_InGame_Tooltip_LogicEffectInfo; }
namespace MX::MinigameCCG::UI { class UICardGame_CardTag; }
namespace MX::MinigameCCG { class CCGCharacter; }
namespace MX::MinigameCCG { class ICCGCharacterData; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_HEDIFF_REPOSITION_OFFSET UNITYSDK_OFFSET(0x1DF6C70)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_HEDIFF_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF4C50)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_HEDIFF_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF5030)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_HEDIFF_COLLECTCHILDRENWITHLOGICEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x1DF6CA0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_HEDIFF_CREATELOGICEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x1DF6E50)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_HEDIFF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7680)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_Tooltip_Hediff_TypeDefinitionIndex = 20721;

	class UICardGame_InGame_Tooltip_Hediff : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_LogicEffectInfo* logicEffectInfo_Prefab; // 0x18
		UITable* table; // 0x20
		::MX::MinigameCCG::UI::UICardGame_CardTag* cardTag; // 0x28
		::System::Action* OnRepositon; // 0x30
		Il2CppObject* logicEffectInfos; // 0x38

		::System::Void Reposition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_HEDIFF_REPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::CCGCharacter* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_HEDIFF_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::ICCGCharacterData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ICCGCharacterData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_HEDIFF_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CollectChildrenWithLogicEffectInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_HEDIFF_COLLECTCHILDRENWITHLOGICEFFECTINFO_OFFSET))(nullptr);
		}

		::System::Void CreateLogicEffectInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_HEDIFF_CREATELOGICEFFECTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_HEDIFF_.CTOR_OFFSET))(nullptr);
		}

	};
}

