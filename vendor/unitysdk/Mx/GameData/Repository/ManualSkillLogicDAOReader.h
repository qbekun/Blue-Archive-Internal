#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class SkillLogicDaoReader; }
namespace MX::GameData::DAO::Battle { class ManualSkillDAO&; }

#define MX_GAMEDATA_REPOSITORY_MANUALSKILLLOGICDAOREADER_LOAD_OFFSET UNITYSDK_OFFSET(0x17F9960)
#define MX_GAMEDATA_REPOSITORY_MANUALSKILLLOGICDAOREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17F9970)
#define MX_GAMEDATA_REPOSITORY_MANUALSKILLLOGICDAOREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F99C0)
#define MX_GAMEDATA_REPOSITORY_MANUALSKILLLOGICDAOREADER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F9A10)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int ManualSkillLogicDAOReader_TypeDefinitionIndex = 15659;

	class ManualSkillLogicDAOReader : public ResourceEnumerator
	{
	public:
		::MX::GameData::Repository::SkillLogicDaoReader* _reader; // 0x10

		::System::Int32 Load()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MANUALSKILLLOGICDAOREADER_LOAD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MANUALSKILLLOGICDAOREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::Repository::SkillLogicDaoReader* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::SkillLogicDaoReader*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MANUALSKILLLOGICDAOREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::MX::GameData::DAO::Battle::ManualSkillDAO&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::GameData::DAO::Battle::ManualSkillDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MANUALSKILLLOGICDAOREADER_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

	};
}

