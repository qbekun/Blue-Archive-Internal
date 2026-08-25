#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOWLOBBYNOTICEPOPUPSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF08A0)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShowLobbyNoticePopupSaveData_TypeDefinitionIndex = 19884;

	class ShowLobbyNoticePopupSaveData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYNOTICEPOPUPSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

