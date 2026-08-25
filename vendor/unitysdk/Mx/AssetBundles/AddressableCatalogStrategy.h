#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RuntimePlatform; }

#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x144AE50)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GETURLROOT_OFFSET UNITYSDK_OFFSET(0x144AF90)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GET_LOCALROOT_OFFSET UNITYSDK_OFFSET(0x144B160)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GET_REMOTECATALOGHASHURL_OFFSET UNITYSDK_OFFSET(0x144B170)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_LOADLOCALCATALOG_OFFSET UNITYSDK_OFFSET(0x144B180)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GET_REMOTECATALOGURL_OFFSET UNITYSDK_OFFSET(0x144B1D0)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_CLEARLOCAL_OFFSET UNITYSDK_OFFSET(0x144B1E0)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x144B1F0)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_WRITEBUNDLECATALOG_OFFSET UNITYSDK_OFFSET(0x144B3F0)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_UPDATEREMOTECATALOG_OFFSET UNITYSDK_OFFSET(0x144B400)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GET_LOCALCATALOGHASHPATH_OFFSET UNITYSDK_OFFSET(0x144B460)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_WRITEBUNDLECATALOGHASH_OFFSET UNITYSDK_OFFSET(0x144B450)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GET_LOCALCATALOGHASH_OFFSET UNITYSDK_OFFSET(0x144B470)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x144B480)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_SET_LOCALCATALOGHASH_OFFSET UNITYSDK_OFFSET(0x144B580)
#define MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GET_LOCALCATALOGPATH_OFFSET UNITYSDK_OFFSET(0x144B590)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int AddressableCatalogStrategy_TypeDefinitionIndex = 14978;

	class AddressableCatalogStrategy : public Il2CppObject
	{
	public:
		::System::String* _LocalRoot_k__BackingField; // 0x10
		::System::String* _LocalCatalogPath_k__BackingField; // 0x18
		::System::String* _LocalCatalogHashPath_k__BackingField; // 0x20
		::System::Uri* _RemoteCatalogURL_k__BackingField; // 0x28
		::System::Uri* _RemoteCatalogHashURL_k__BackingField; // 0x30
		::System::String* _LocalCatalogHash_k__BackingField; // 0x38

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* GetURLRoot(::UnityEngine::RuntimePlatform* arg)
		{
			return ((::System::String*(*)(::UnityEngine::RuntimePlatform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GETURLROOT_OFFSET))(arg, nullptr);
		}

		::System::String* get_LocalRoot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GET_LOCALROOT_OFFSET))(nullptr);
		}

		::System::Uri* get_RemoteCatalogHashURL()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GET_REMOTECATALOGHASHURL_OFFSET))(nullptr);
		}

		::System::Boolean LoadLocalCatalog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_LOADLOCALCATALOG_OFFSET))(nullptr);
		}

		::System::Uri* get_RemoteCatalogURL()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GET_REMOTECATALOGURL_OFFSET))(nullptr);
		}

		::System::Void ClearLocal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_CLEARLOCAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void WriteBundleCatalog(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_WRITEBUNDLECATALOG_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateRemoteCatalog(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_UPDATEREMOTECATALOG_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_LocalCatalogHashPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GET_LOCALCATALOGHASHPATH_OFFSET))(nullptr);
		}

		::System::Void WriteBundleCatalogHash(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_WRITEBUNDLECATALOGHASH_OFFSET))(str, nullptr);
		}

		::System::String* get_LocalCatalogHash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GET_LOCALCATALOGHASH_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void set_LocalCatalogHash(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_SET_LOCALCATALOGHASH_OFFSET))(str, nullptr);
		}

		::System::String* get_LocalCatalogPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ADDRESSABLECATALOGSTRATEGY_GET_LOCALCATALOGPATH_OFFSET))(nullptr);
		}

	};
}

