#pragma once
#include "../../unitysdk.h"

#define NPA_GAMES_NXPTOYGETCLOUDSAVELISTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD4280)

namespace NPA::Games
{
	inline static constexpr unsigned int NXPToyGetCloudSaveListResult_TypeDefinitionIndex = 27444;

	class NXPToyGetCloudSaveListResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGETCLOUDSAVELISTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

