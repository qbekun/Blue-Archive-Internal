#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COST_PREVIEWCOST_OFFSET UNITYSDK_OFFSET(0x1DEBA90)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC120)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COST_SETCOST_OFFSET UNITYSDK_OFFSET(0x1DEBDA0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DEB060)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COST_ACTIVEALL_OFFSET UNITYSDK_OFFSET(0x1DEC040)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_HUD_Cost_TypeDefinitionIndex = 20691;

	class UICardGame_InGame_HUD_Cost : public Il2CppObject
	{
	public:
		UILabel* costValue; // 0x18
		UIGrid* grid; // 0x20
		::UnityEngine::GameObject* costInsufficient; // 0x28
		::Il2CppArray<::System::Object*>* costElements; // 0x30
		::MX::MinigameCCG::CCGPlayer* player; // 0x38
		::System::Int32 maxCost; // 0x40

		::System::Void PreviewCost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COST_PREVIEWCOST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COST_SETCOST_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COST_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ActiveAll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COST_ACTIVEALL_OFFSET))(arg, nullptr);
		}

	};
}

