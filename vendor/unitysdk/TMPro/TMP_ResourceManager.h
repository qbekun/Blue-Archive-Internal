#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_ResourceManager; }
namespace TMPro { class TMP_Settings; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_FontAsset&; }

#define TMPRO_TMP_RESOURCEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA174850)
#define TMPRO_TMP_RESOURCEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA174860)
#define TMPRO_TMP_RESOURCEMANAGER_ADDFONTASSET_OFFSET UNITYSDK_OFFSET(0xA1749A0)
#define TMPRO_TMP_RESOURCEMANAGER_GETTEXTSETTINGS_OFFSET UNITYSDK_OFFSET(0xA174B10)
#define TMPRO_TMP_RESOURCEMANAGER_REBUILDFONTASSETCACHE_OFFSET UNITYSDK_OFFSET(0xA174C20)
#define TMPRO_TMP_RESOURCEMANAGER_TRYGETFONTASSET_OFFSET UNITYSDK_OFFSET(0xA174D20)

namespace TMPro
{
	inline static constexpr unsigned int TMP_ResourceManager_TypeDefinitionIndex = 33709;

	class TMP_ResourceManager : public Il2CppObject
	{
	public:
		::TMPro::TMP_ResourceManager* s_instance; // 0x0
		::TMPro::TMP_Settings* s_TextSettings; // 0x8
		Il2CppObject* s_FontAssetReferences; // 0x10
		Il2CppObject* s_FontAssetReferenceLookup; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void AddFontAsset(::TMPro::TMP_FontAsset* arg)
		{
			((::System::Void(*)(::TMPro::TMP_FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_ADDFONTASSET_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_Settings* GetTextSettings()
		{
			return (return (::TMPro::TMP_Settings*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_GETTEXTSETTINGS_OFFSET))(nullptr);
		}

		::System::Void RebuildFontAssetCache(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_REBUILDFONTASSETCACHE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetFontAsset(::System::Int32 arg, ::TMPro::TMP_FontAsset&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::TMPro::TMP_FontAsset&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_TRYGETFONTASSET_OFFSET))(arg, arg, nullptr);
		}

	};
}

