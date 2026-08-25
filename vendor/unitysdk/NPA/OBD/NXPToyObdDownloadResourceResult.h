#pragma once
#include "../../unitysdk.h"

#define NPA_OBD_NXPTOYOBDDOWNLOADRESOURCERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC630)

namespace NPA::OBD
{
	inline static constexpr unsigned int NXPToyObdDownloadResourceResult_TypeDefinitionIndex = 27408;

	class NXPToyObdDownloadResourceResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_OBD_NXPTOYOBDDOWNLOADRESOURCERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

