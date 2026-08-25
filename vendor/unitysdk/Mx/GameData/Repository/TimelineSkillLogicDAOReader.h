#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class SkillLogicDaoReader; }
namespace MX::GameData::DAO::Battle { class TimelineSkillActionDAO&; }

#define MX_GAMEDATA_REPOSITORY_TIMELINESKILLLOGICDAOREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17F97F0)
#define MX_GAMEDATA_REPOSITORY_TIMELINESKILLLOGICDAOREADER_LOAD_OFFSET UNITYSDK_OFFSET(0x17F9840)
#define MX_GAMEDATA_REPOSITORY_TIMELINESKILLLOGICDAOREADER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F9850)
#define MX_GAMEDATA_REPOSITORY_TIMELINESKILLLOGICDAOREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F9910)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int TimelineSkillLogicDAOReader_TypeDefinitionIndex = 15658;

	class TimelineSkillLogicDAOReader : public ::System::Reflection::AssemblyCompanyAttribute
	{
	public:
		::MX::GameData::Repository::SkillLogicDaoReader* _reader; // 0x10

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_TIMELINESKILLLOGICDAOREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 Load()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_TIMELINESKILLLOGICDAOREADER_LOAD_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_TIMELINESKILLLOGICDAOREADER_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::Repository::SkillLogicDaoReader* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::SkillLogicDaoReader*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_TIMELINESKILLLOGICDAOREADER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

