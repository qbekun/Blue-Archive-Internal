#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYGETURLCALLSETTINGSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC2F0)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyGetUrlCallSettingsResult_TypeDefinitionIndex = 27390;

	class NXPToyGetUrlCallSettingsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYGETURLCALLSETTINGSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

