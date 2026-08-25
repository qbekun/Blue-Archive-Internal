#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class SkillLogicDaoCollection; }
namespace MX::GameData::Repository { class ReaderConfig; }
namespace MX::GameData::DAO::Battle { class SkillLogicDAO&; }

#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17F94C0)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREADER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F9510)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F9570)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREADER_LOAD_OFFSET UNITYSDK_OFFSET(0x17F95C0)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int SkillLogicDaoReader_TypeDefinitionIndex = 15656;

	class SkillLogicDaoReader : public ::System::Reflection::AmbiguousMatchException
	{
	public:
		::MX::GameData::Repository::SkillLogicDaoCollection* _collection; // 0x10
		::MX::GameData::Repository::ReaderConfig* _config; // 0x18

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::MX::GameData::DAO::Battle::SkillLogicDAO&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::GameData::DAO::Battle::SkillLogicDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREADER_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::Repository::ReaderConfig* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::ReaderConfig*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Load()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREADER_LOAD_OFFSET))(nullptr);
		}

	};
}

