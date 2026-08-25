#pragma once
#include "../../unitysdk.h"

#define NPA_GAMES_NXPTOYPUTCLOUDSAVERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD4600)

namespace NPA::Games
{
	inline static constexpr unsigned int NXPToyPutCloudSaveResult_TypeDefinitionIndex = 27448;

	class NXPToyPutCloudSaveResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYPUTCLOUDSAVERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

