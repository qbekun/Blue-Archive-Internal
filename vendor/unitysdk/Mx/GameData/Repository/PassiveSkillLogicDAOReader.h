#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class SkillLogicDaoReader; }
namespace MX::GameData::DAO::Battle { class PassiveSkillDAO&; }

#define MX_GAMEDATA_REPOSITORY_PASSIVESKILLLOGICDAOREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F9AD0)
#define MX_GAMEDATA_REPOSITORY_PASSIVESKILLLOGICDAOREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17F9B20)
#define MX_GAMEDATA_REPOSITORY_PASSIVESKILLLOGICDAOREADER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F9B70)
#define MX_GAMEDATA_REPOSITORY_PASSIVESKILLLOGICDAOREADER_LOAD_OFFSET UNITYSDK_OFFSET(0x17F9C30)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int PassiveSkillLogicDAOReader_TypeDefinitionIndex = 15660;

	class PassiveSkillLogicDAOReader : public ::System::Resources::ResourceSet
	{
	public:
		::MX::GameData::Repository::SkillLogicDaoReader* _reader; // 0x10

		::System::Void .ctor(::MX::GameData::Repository::SkillLogicDaoReader* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::SkillLogicDaoReader*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_PASSIVESKILLLOGICDAOREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_PASSIVESKILLLOGICDAOREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::MX::GameData::DAO::Battle::PassiveSkillDAO&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::GameData::DAO::Battle::PassiveSkillDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_PASSIVESKILLLOGICDAOREADER_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 Load()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_PASSIVESKILLLOGICDAOREADER_LOAD_OFFSET))(nullptr);
		}

	};
}

