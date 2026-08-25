#pragma once
#include "../../unitysdk.h"

#define MX_ASSETBUNDLES_ASSETSETTINGINFO_SET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1443A00)
#define MX_ASSETBUNDLES_ASSETSETTINGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1443A10)
#define MX_ASSETBUNDLES_ASSETSETTINGINFO_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x1443A20)
#define MX_ASSETBUNDLES_ASSETSETTINGINFO_SET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x1443A30)
#define MX_ASSETBUNDLES_ASSETSETTINGINFO_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1443A40)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int AssetSettingInfo_TypeDefinitionIndex = 14944;

	class AssetSettingInfo : public Il2CppObject
	{
	public:
		::System::String* _Address_k__BackingField; // 0x10
		::System::String* _AssetPath_k__BackingField; // 0x18

		::System::Void set_Address(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ASSETSETTINGINFO_SET_ADDRESS_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ASSETSETTINGINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_AssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ASSETSETTINGINFO_GET_ASSETPATH_OFFSET))(nullptr);
		}

		::System::Void set_AssetPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ASSETSETTINGINFO_SET_ASSETPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_Address()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ASSETSETTINGINFO_GET_ADDRESS_OFFSET))(nullptr);
		}

	};
}

