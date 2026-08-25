#pragma once
#include "../../unitysdk.h"

namespace NPA::OBD { class NXPToyObdDownloadInformation; }

#define NPA_OBD_NXPTOYOBDDOWNLOADRESOURCEPROGRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC620)

namespace NPA::OBD
{
	inline static constexpr unsigned int NXPToyObdDownloadResourceProgress_TypeDefinitionIndex = 27406;

	class NXPToyObdDownloadResourceProgress : public Il2CppObject
	{
	public:
		::NPA::OBD::NXPToyObdDownloadInformation* downloadInformation; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_OBD_NXPTOYOBDDOWNLOADRESOURCEPROGRESS_.CTOR_OFFSET))(nullptr);
		}

	};
}

