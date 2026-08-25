#pragma once
#include "../../unitysdk.h"

#define MX_ASSETBUNDLES_IPATCHSTRATEGY_GET_LOCALCATALOGPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_IPATCHSTRATEGY_GET_LOCALCATALOGHASH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_IPATCHSTRATEGY_GET_LOCALROOT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_IPATCHSTRATEGY_GET_LOCALCATALOGHASHPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_IPATCHSTRATEGY_CLEARLOCAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_IPATCHSTRATEGY_GET_REMOTECATALOGURL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_IPATCHSTRATEGY_GET_REMOTECATALOGHASHURL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_IPATCHSTRATEGY_LOADLOCALCATALOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_IPATCHSTRATEGY_UPDATEREMOTECATALOG_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int IPatchStrategy_TypeDefinitionIndex = 14979;

	class IPatchStrategy : public Il2CppObject
	{
	public:
		::System::String* get_LocalCatalogPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_IPATCHSTRATEGY_GET_LOCALCATALOGPATH_OFFSET))(nullptr);
		}

		::System::String* get_LocalCatalogHash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_IPATCHSTRATEGY_GET_LOCALCATALOGHASH_OFFSET))(nullptr);
		}

		::System::String* get_LocalRoot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_IPATCHSTRATEGY_GET_LOCALROOT_OFFSET))(nullptr);
		}

		::System::String* get_LocalCatalogHashPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_IPATCHSTRATEGY_GET_LOCALCATALOGHASHPATH_OFFSET))(nullptr);
		}

		::System::Void ClearLocal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_IPATCHSTRATEGY_CLEARLOCAL_OFFSET))(nullptr);
		}

		::System::Uri* get_RemoteCatalogURL()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_IPATCHSTRATEGY_GET_REMOTECATALOGURL_OFFSET))(nullptr);
		}

		::System::Uri* get_RemoteCatalogHashURL()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_IPATCHSTRATEGY_GET_REMOTECATALOGHASHURL_OFFSET))(nullptr);
		}

		::System::Boolean LoadLocalCatalog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_IPATCHSTRATEGY_LOADLOCALCATALOG_OFFSET))(nullptr);
		}

		::System::Void UpdateRemoteCatalog(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_IPATCHSTRATEGY_UPDATEREMOTECATALOG_OFFSET))(str, arg, nullptr);
		}

	};
}

