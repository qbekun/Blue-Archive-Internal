#pragma once
#include "../../../../unitysdk.h"

namespace MX::AppData::DAO::Battle { class LogicEffectVisualDAO; }

#define MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x1CE6F00)
#define MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALCOLLECTION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CE6F20)
#define MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALCOLLECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE6FE0)
#define MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6FF0)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int LogicEffectVisualCollection_TypeDefinitionIndex = 19871;

	class LogicEffectVisualCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::MemoryInputStream
	{
	public:
		::System::String* GetKeyForItem(::MX::AppData::DAO::Battle::LogicEffectVisualDAO* arg)
		{
			return (return (::System::String*(*)(::MX::AppData::DAO::Battle::LogicEffectVisualDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALCOLLECTION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALCOLLECTION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

