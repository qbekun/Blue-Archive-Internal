#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOWLOBBYBATTLEPASSNOTICEPOPUPSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0A10)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShowLobbyBattlePassNoticePopupSaveData_TypeDefinitionIndex = 19888;

	class ShowLobbyBattlePassNoticePopupSaveData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYBATTLEPASSNOTICEPOPUPSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

