#pragma once
#include "../../unitysdk.h"

#define NPA_GAMES_NXPTOYDELETECLOUDSAVERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD3FE0)

namespace NPA::Games
{
	inline static constexpr unsigned int NXPToyDeleteCloudSaveResult_TypeDefinitionIndex = 27441;

	class NXPToyDeleteCloudSaveResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYDELETECLOUDSAVERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

