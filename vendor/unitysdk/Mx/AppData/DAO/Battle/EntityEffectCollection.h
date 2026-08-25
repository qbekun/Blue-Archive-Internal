#pragma once
#include "../../../../unitysdk.h"

namespace MX::AppData::DAO::Battle { class EntityEffectDAO; }

#define MX_APPDATA_DAO_BATTLE_ENTITYEFFECTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6DD0)
#define MX_APPDATA_DAO_BATTLE_ENTITYEFFECTCOLLECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE6E10)
#define MX_APPDATA_DAO_BATTLE_ENTITYEFFECTCOLLECTION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CE6E20)
#define MX_APPDATA_DAO_BATTLE_ENTITYEFFECTCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x1CE6EE0)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int EntityEffectCollection_TypeDefinitionIndex = 19870;

	class EntityEffectCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::BaseInputStream
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ENTITYEFFECTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ENTITYEFFECTCOLLECTION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ENTITYEFFECTCOLLECTION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::String* GetKeyForItem(::MX::AppData::DAO::Battle::EntityEffectDAO* arg)
		{
			return (return (::System::String*(*)(::MX::AppData::DAO::Battle::EntityEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ENTITYEFFECTCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

	};
}

