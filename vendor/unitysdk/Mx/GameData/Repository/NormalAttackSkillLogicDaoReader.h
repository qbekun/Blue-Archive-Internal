#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class SkillLogicDaoReader; }
namespace MX::GameData::DAO::Battle { class NormalAttackSkillActionDAO&; }

#define MX_GAMEDATA_REPOSITORY_NORMALATTACKSKILLLOGICDAOREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F9680)
#define MX_GAMEDATA_REPOSITORY_NORMALATTACKSKILLLOGICDAOREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17F96D0)
#define MX_GAMEDATA_REPOSITORY_NORMALATTACKSKILLLOGICDAOREADER_LOAD_OFFSET UNITYSDK_OFFSET(0x17F9720)
#define MX_GAMEDATA_REPOSITORY_NORMALATTACKSKILLLOGICDAOREADER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F9730)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int NormalAttackSkillLogicDaoReader_TypeDefinitionIndex = 15657;

	class NormalAttackSkillLogicDaoReader : public ::System::Resources::ResourceReader
	{
	public:
		::MX::GameData::Repository::SkillLogicDaoReader* _reader; // 0x10

		::System::Void .ctor(::MX::GameData::Repository::SkillLogicDaoReader* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::SkillLogicDaoReader*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NORMALATTACKSKILLLOGICDAOREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NORMALATTACKSKILLLOGICDAOREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 Load()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NORMALATTACKSKILLLOGICDAOREADER_LOAD_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::MX::GameData::DAO::Battle::NormalAttackSkillActionDAO&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::GameData::DAO::Battle::NormalAttackSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NORMALATTACKSKILLLOGICDAOREADER_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

	};
}

