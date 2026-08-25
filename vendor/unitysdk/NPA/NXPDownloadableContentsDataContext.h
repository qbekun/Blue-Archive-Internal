#pragma once
#include "../unitysdk.h"

#define NPA_NXPDOWNLOADABLECONTENTSDATACONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDE2C0)

namespace NPA
{
	inline static constexpr unsigned int NXPDownloadableContentsDataContext_TypeDefinitionIndex = 25777;

	class NXPDownloadableContentsDataContext : public Il2CppObject
	{
	public:
		Il2CppObject* PartnerAppListForWebAPIKey; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPDOWNLOADABLECONTENTSDATACONTEXT_.CTOR_OFFSET))(nullptr);
		}

	};
}

