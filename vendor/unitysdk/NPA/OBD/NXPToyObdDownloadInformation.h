#pragma once
#include "../../unitysdk.h"

#define NPA_OBD_NXPTOYOBDDOWNLOADINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC470)

namespace NPA::OBD
{
	inline static constexpr unsigned int NXPToyObdDownloadInformation_TypeDefinitionIndex = 27396;

	class NXPToyObdDownloadInformation : public Il2CppObject
	{
	public:
		::System::Int64 downloadedBytes; // 0x10
		::System::Int64 totalBytes; // 0x18
		::System::Int32 downloadedFileCount; // 0x20
		::System::Int32 totalFileCount; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_OBD_NXPTOYOBDDOWNLOADINFORMATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

