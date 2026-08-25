#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_ASSETBUNDLEINFORMATION_SET_TOTALBYTES_OFFSET UNITYSDK_OFFSET(0x954BF80)
#define NEXON_PUB_ASSETBUNDLEINFORMATION_SET_LOADEDBYTES_OFFSET UNITYSDK_OFFSET(0x954BF90)
#define NEXON_PUB_ASSETBUNDLEINFORMATION_SET_LOADPROGRESS_OFFSET UNITYSDK_OFFSET(0x954BFA0)
#define NEXON_PUB_ASSETBUNDLEINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x954B470)

namespace Nexon::Pub
{
	inline static constexpr unsigned int AssetBundleInformation_TypeDefinitionIndex = 37538;

	class AssetBundleInformation : public Il2CppObject
	{
	public:
		::System::Int64 _TotalBytes_k__BackingField; // 0x10
		::System::Int64 _LoadedBytes_k__BackingField; // 0x18
		::System::Single _LoadProgress_k__BackingField; // 0x20

		::System::Void set_TotalBytes(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_ASSETBUNDLEINFORMATION_SET_TOTALBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void set_LoadedBytes(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_ASSETBUNDLEINFORMATION_SET_LOADEDBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void set_LoadProgress(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_ASSETBUNDLEINFORMATION_SET_LOADPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_ASSETBUNDLEINFORMATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

