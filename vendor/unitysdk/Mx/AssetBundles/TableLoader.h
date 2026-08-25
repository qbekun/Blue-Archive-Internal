#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Loader { class ILogicDataReader; }
namespace MX::AssetBundles { class PatchOption; }
namespace MX::AssetBundles { class TableLoader; }

#define MX_ASSETBUNDLES_TABLELOADER_INITIALIZETABLEREADER_OFFSET UNITYSDK_OFFSET(0x144A820)
#define MX_ASSETBUNDLES_TABLELOADER_BUILDCACHE_OFFSET UNITYSDK_OFFSET(0x144A8E0)
#define MX_ASSETBUNDLES_TABLELOADER_INITIALIZETABLEREADER_OFFSET UNITYSDK_OFFSET(0x144A980)
#define MX_ASSETBUNDLES_TABLELOADER_READBINARY_OFFSET UNITYSDK_OFFSET(0x144AA40)
#define MX_ASSETBUNDLES_TABLELOADER_READTEXT_OFFSET UNITYSDK_OFFSET(0x144AB80)
#define MX_ASSETBUNDLES_TABLELOADER_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x144ACC0)
#define MX_ASSETBUNDLES_TABLELOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x144AD60)
#define MX_ASSETBUNDLES_TABLELOADER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x144AD70)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int TableLoader_TypeDefinitionIndex = 14977;

	class TableLoader : public Il2CppObject
	{
	public:
		::MX::Data::Loader::ILogicDataReader* _logicDataReader; // 0x10

		::MX::Data::Loader::ILogicDataReader* InitializeTableReader(::MX::AssetBundles::PatchOption* arg)
		{
			return ((::MX::Data::Loader::ILogicDataReader*(*)(::MX::AssetBundles::PatchOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLELOADER_INITIALIZETABLEREADER_OFFSET))(arg, nullptr);
		}

		::System::Void BuildCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLELOADER_BUILDCACHE_OFFSET))(nullptr);
		}

		::System::Void InitializeTableReader(::MX::Data::Loader::ILogicDataReader* arg)
		{
			((::System::Void(*)(::MX::Data::Loader::ILogicDataReader*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLELOADER_INITIALIZETABLEREADER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadBinary(::System::String* str, ::System::String* str2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLELOADER_READBINARY_OFFSET))(str, str2, nullptr);
		}

		::System::String* ReadText(::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLELOADER_READTEXT_OFFSET))(str, str2, nullptr);
		}

		::System::Void ClearCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLELOADER_CLEARCACHE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLELOADER_.CTOR_OFFSET))(nullptr);
		}

		::MX::AssetBundles::TableLoader* get_Instance()
		{
			return ((::MX::AssetBundles::TableLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLELOADER_GET_INSTANCE_OFFSET))(nullptr);
		}

	};
}

