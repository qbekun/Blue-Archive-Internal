#pragma once
#include "../../../../unitysdk.h"

namespace MX::AppData::DAO::Battle { class BattleItemEffectDAO; }

#define MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTCOLLECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE7030)
#define MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x1CE7100)
#define MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7120)
#define MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTCOLLECTION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CE7040)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int BattleItemEffectCollection_TypeDefinitionIndex = 19872;

	class BattleItemEffectCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZTree
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTCOLLECTION_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* GetKeyForItem(::MX::AppData::DAO::Battle::BattleItemEffectDAO* arg)
		{
			return (return (::System::String*(*)(::MX::AppData::DAO::Battle::BattleItemEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_BATTLEITEMEFFECTCOLLECTION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

