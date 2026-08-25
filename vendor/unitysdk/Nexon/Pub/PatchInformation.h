#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class DownloadSize; }

#define NEXON_PUB_PATCHINFORMATION_SET_TOTALDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x954C4F0)
#define NEXON_PUB_PATCHINFORMATION_SET_CURRENTDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x954C500)
#define NEXON_PUB_PATCHINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C510)

namespace Nexon::Pub
{
	inline static constexpr unsigned int PatchInformation_TypeDefinitionIndex = 37548;

	class PatchInformation : public Il2CppObject
	{
	public:
		Build* _BuildStatus_k__BackingField; // 0x10
		Patch* _PatchStatus_k__BackingField; // 0x14
		::Nexon::Pub::DownloadSize* _TotalDownloadSize_k__BackingField; // 0x18
		::Nexon::Pub::DownloadSize* _CurrentDownloadSize_k__BackingField; // 0x20

		::System::Void set_TotalDownloadSize(::Nexon::Pub::DownloadSize* arg)
		{
			((::System::Void(*)(::Nexon::Pub::DownloadSize*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_PATCHINFORMATION_SET_TOTALDOWNLOADSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentDownloadSize(::Nexon::Pub::DownloadSize* arg)
		{
			((::System::Void(*)(::Nexon::Pub::DownloadSize*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_PATCHINFORMATION_SET_CURRENTDOWNLOADSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_PATCHINFORMATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

