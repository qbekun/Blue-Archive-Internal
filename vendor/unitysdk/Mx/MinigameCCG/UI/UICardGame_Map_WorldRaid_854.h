#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_WORLDRAID_854_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x1E0DEF0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_WORLDRAID_854_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DF70)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_WORLDRAID_854_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x1E0DF80)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Map_WorldRaid_854_TypeDefinitionIndex = 20793;

	class UICardGame_Map_WorldRaid_854 : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* CreateStackUI()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_WORLDRAID_854_CREATESTACKUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_WORLDRAID_854_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_WORLDRAID_854_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

	};
}

