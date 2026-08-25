#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class NXPatcherPatch; }

#define NEXON_PUB_NXPATCHERDOWNLOADER_DOWNLOADPATCH_OFFSET UNITYSDK_OFFSET(0x954C910)
#define NEXON_PUB_NXPATCHERDOWNLOADER_STOPDOWNLOADPATCH_OFFSET UNITYSDK_OFFSET(0x954CB40)
#define NEXON_PUB_NXPATCHERDOWNLOADER_DOWNLOADFILE_OFFSET UNITYSDK_OFFSET(0x954CAD0)
#define NEXON_PUB_NXPATCHERDOWNLOADER_CHECKDOWNLOADEDFILE_OFFSET UNITYSDK_OFFSET(0x954CB70)
#define NEXON_PUB_NXPATCHERDOWNLOADER_UPDATEDOWNLOADPROGRESS_OFFSET UNITYSDK_OFFSET(0x954D2B0)
#define NEXON_PUB_NXPATCHERDOWNLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x954D410)

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXPatcherDownloader_TypeDefinitionIndex = 37436;

	class NXPatcherDownloader : public Il2CppObject
	{
	public:
		::Nexon::Pub::NXPatcherPatch* _patch; // 0x18
		Il2CppObject* _progressCallback; // 0x20
		Il2CppObject* _downloadedCallback; // 0x28
		Il2CppObject* _completeCallback; // 0x30
		Il2CppObject* _downloadQueue; // 0x38
		::System::Boolean isStop; // 0x40

		::System::Void DownloadPatch(::Nexon::Pub::NXPatcherPatch* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherPatch*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERDOWNLOADER_DOWNLOADPATCH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StopDownloadPatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERDOWNLOADER_STOPDOWNLOADPATCH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DownloadFile()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERDOWNLOADER_DOWNLOADFILE_OFFSET))(nullptr);
		}

		::System::Void CheckDownloadedFile(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERDOWNLOADER_CHECKDOWNLOADEDFILE_OFFSET))(str, str, nullptr);
		}

		::System::Void UpdateDownloadProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERDOWNLOADER_UPDATEDOWNLOADPROGRESS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERDOWNLOADER_.CTOR_OFFSET))(nullptr);
		}

	};
}

