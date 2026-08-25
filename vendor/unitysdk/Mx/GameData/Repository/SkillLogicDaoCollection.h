#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class SkillLogicDAO; }

#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F9390)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOCOLLECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17F93D0)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOCOLLECTION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17F93E0)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x17F94A0)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int SkillLogicDaoCollection_TypeDefinitionIndex = 15655;

	class SkillLogicDaoCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::NullOutputStream
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOCOLLECTION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOCOLLECTION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::String* GetKeyForItem(::MX::GameData::DAO::Battle::SkillLogicDAO* arg)
		{
			return (return (::System::String*(*)(::MX::GameData::DAO::Battle::SkillLogicDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

	};
}

