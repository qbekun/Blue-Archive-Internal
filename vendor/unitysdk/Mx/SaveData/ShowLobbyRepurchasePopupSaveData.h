#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOWLOBBYREPURCHASEPOPUPSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0A00)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShowLobbyRepurchasePopupSaveData_TypeDefinitionIndex = 19887;

	class ShowLobbyRepurchasePopupSaveData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYREPURCHASEPOPUPSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

