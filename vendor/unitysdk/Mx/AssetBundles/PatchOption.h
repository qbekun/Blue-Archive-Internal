#pragma once
#include "../../unitysdk.h"

namespace MX::AssetBundles { class PatchOption; }

#define MX_ASSETBUNDLES_PATCHOPTION_CREATEEDITOROPTION_OFFSET UNITYSDK_OFFSET(0x144DA40)
#define MX_ASSETBUNDLES_PATCHOPTION_GET_USEMEDIA_OFFSET UNITYSDK_OFFSET(0x144DD80)
#define MX_ASSETBUNDLES_PATCHOPTION_GET_USEBUNDLES_OFFSET UNITYSDK_OFFSET(0x144DD90)
#define MX_ASSETBUNDLES_PATCHOPTION_CREATEAPPOPTION_OFFSET UNITYSDK_OFFSET(0x14452F0)
#define MX_ASSETBUNDLES_PATCHOPTION_GET_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x144DDB0)
#define MX_ASSETBUNDLES_PATCHOPTION_GET_USETABLE_OFFSET UNITYSDK_OFFSET(0x144DDC0)
#define MX_ASSETBUNDLES_PATCHOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x144DD60)
#define MX_ASSETBUNDLES_PATCHOPTION_GET_USEASSET_OFFSET UNITYSDK_OFFSET(0x144DDD0)
#define MX_ASSETBUNDLES_PATCHOPTION_GET_CLEARALL_OFFSET UNITYSDK_OFFSET(0x144DDE0)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int PatchOption_TypeDefinitionIndex = 14988;

	class PatchOption : public Il2CppObject
	{
	public:
		::System::Boolean _UseAsset_k__BackingField; // 0x10
		::System::Boolean _UseMedia_k__BackingField; // 0x11
		::System::Boolean _UseTable_k__BackingField; // 0x12
		::System::Boolean _ClearCache_k__BackingField; // 0x13
		::System::Boolean _ClearAll_k__BackingField; // 0x14

		::MX::AssetBundles::PatchOption* CreateEditorOption()
		{
			return ((::MX::AssetBundles::PatchOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHOPTION_CREATEEDITOROPTION_OFFSET))(nullptr);
		}

		::System::Boolean get_UseMedia()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHOPTION_GET_USEMEDIA_OFFSET))(nullptr);
		}

		::System::Boolean get_UseBundles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHOPTION_GET_USEBUNDLES_OFFSET))(nullptr);
		}

		::MX::AssetBundles::PatchOption* CreateAppOption(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((::MX::AssetBundles::PatchOption*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHOPTION_CREATEAPPOPTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_ClearCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHOPTION_GET_CLEARCACHE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseTable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHOPTION_GET_USETABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHOPTION_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean get_UseAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHOPTION_GET_USEASSET_OFFSET))(nullptr);
		}

		::System::Boolean get_ClearAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHOPTION_GET_CLEARALL_OFFSET))(nullptr);
		}

	};
}

