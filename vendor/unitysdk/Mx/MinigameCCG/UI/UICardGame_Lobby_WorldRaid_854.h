#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_WORLDRAID_854_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E03E50)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_WORLDRAID_854_CANSTARTNEWGAME_OFFSET UNITYSDK_OFFSET(0x1E03E60)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_WORLDRAID_854_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x1E044B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_WORLDRAID_854___N__0_OFFSET UNITYSDK_OFFSET(0x1E04590)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_WORLDRAID_854_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x1E04600)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Lobby_WorldRaid_854_TypeDefinitionIndex = 20762;

	class UICardGame_Lobby_WorldRaid_854 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_WORLDRAID_854_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CanStartNewGame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_WORLDRAID_854_CANSTARTNEWGAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_WORLDRAID_854_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_WORLDRAID_854___N__0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBY_WORLDRAID_854_CREATESTACKUI_OFFSET))(nullptr);
		}

	};
}

