#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOWLOBBYSHORTEXPIRATIONITEMSAVDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF09E0)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShowLobbyShortExpirationItemSavdData_TypeDefinitionIndex = 19885;

	class ShowLobbyShortExpirationItemSavdData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYSHORTEXPIRATIONITEMSAVDDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

