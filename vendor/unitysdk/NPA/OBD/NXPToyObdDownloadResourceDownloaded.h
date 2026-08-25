#pragma once
#include "../../unitysdk.h"

#define NPA_OBD_NXPTOYOBDDOWNLOADRESOURCEDOWNLOADED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC610)

namespace NPA::OBD
{
	inline static constexpr unsigned int NXPToyObdDownloadResourceDownloaded_TypeDefinitionIndex = 27405;

	class NXPToyObdDownloadResourceDownloaded : public Il2CppObject
	{
	public:
		::System::String* fileName; // 0x10
		::System::String* filePath; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_OBD_NXPTOYOBDDOWNLOADRESOURCEDOWNLOADED_.CTOR_OFFSET))(nullptr);
		}

	};
}

