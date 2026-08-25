#pragma once
#include "../../unitysdk.h"

namespace MX::AssetBundles { class TablePatchStrategy; }

#define MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_GET__DATACACHE_OFFSET UNITYSDK_OFFSET(0x1443A50)
#define MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_GET__TABLEPATCHSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1443A60)
#define MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1443A70)
#define MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1443AF0)
#define MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_BUILDCACHE_OFFSET UNITYSDK_OFFSET(0x1443B80)
#define MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1443CB0)
#define MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_BUILDCACHE_OFFSET UNITYSDK_OFFSET(0x1443D00)
#define MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_READBINARY_OFFSET UNITYSDK_OFFSET(0x14441C0)
#define MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_READTEXT_OFFSET UNITYSDK_OFFSET(0x1444840)
#define MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_READBINARY_OFFSET UNITYSDK_OFFSET(0x14442E0)
#define MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_GETBUNDLENAMEFROMRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x14448E0)
#define MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_GETTABLEPATH_OFFSET UNITYSDK_OFFSET(0x14440F0)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int BundleLogicDataReader_TypeDefinitionIndex = 14945;

	class BundleLogicDataReader : public Il2CppObject
	{
	public:
		Il2CppObject* __dataCache_k__BackingField; // 0x10
		::MX::AssetBundles::TablePatchStrategy* __tablePatchStrategy_k__BackingField; // 0x18

		Il2CppObject* get__dataCache()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_GET__DATACACHE_OFFSET))(nullptr);
		}

		::MX::AssetBundles::TablePatchStrategy* get__tablePatchStrategy()
		{
			return ((::MX::AssetBundles::TablePatchStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_GET__TABLEPATCHSTRATEGY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::AssetBundles::TablePatchStrategy* arg)
		{
			((::System::Void(*)(::MX::AssetBundles::TablePatchStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void BuildCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_BUILDCACHE_OFFSET))(nullptr);
		}

		::System::Void ClearCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_CLEARCACHE_OFFSET))(nullptr);
		}

		::System::Void BuildCache(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_BUILDCACHE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadBinary(::System::String* str, ::System::String* str2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_READBINARY_OFFSET))(str, str2, nullptr);
		}

		::System::String* ReadText(::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_READTEXT_OFFSET))(str, str2, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadBinary(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_READBINARY_OFFSET))(str, nullptr);
		}

		::System::String* GetBundleNameFromRelativePath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_GETBUNDLENAMEFROMRELATIVEPATH_OFFSET))(str, nullptr);
		}

		::System::String* GetTablePath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_BUNDLELOGICDATAREADER_GETTABLEPATH_OFFSET))(str, nullptr);
		}

	};
}

