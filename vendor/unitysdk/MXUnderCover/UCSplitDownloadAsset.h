#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_UCSPLITDOWNLOADASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB4870)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCSplitDownloadAsset_TypeDefinitionIndex = 9975;

	class UCSplitDownloadAsset : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SceneNames; // 0x18
		::Il2CppArray<::System::Object*>* ArtLevelNames; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSPLITDOWNLOADASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

