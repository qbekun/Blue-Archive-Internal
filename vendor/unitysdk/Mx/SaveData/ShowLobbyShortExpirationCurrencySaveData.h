#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOWLOBBYSHORTEXPIRATIONCURRENCYSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF09F0)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShowLobbyShortExpirationCurrencySaveData_TypeDefinitionIndex = 19886;

	class ShowLobbyShortExpirationCurrencySaveData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYSHORTEXPIRATIONCURRENCYSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

