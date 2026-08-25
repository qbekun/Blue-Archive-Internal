#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class ReaderConfig; }
namespace MX::Data::Excel { class CharacterExcel&; }

#define MX_GAMEDATA_REPOSITORY_CHARACTEREXCELREADER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F8280)
#define MX_GAMEDATA_REPOSITORY_CHARACTEREXCELREADER_LOAD_OFFSET UNITYSDK_OFFSET(0x17F82E0)
#define MX_GAMEDATA_REPOSITORY_CHARACTEREXCELREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F82F0)
#define MX_GAMEDATA_REPOSITORY_CHARACTEREXCELREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17F83A0)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int CharacterExcelReader_TypeDefinitionIndex = 15642;

	class CharacterExcelReader : public ::MX::Logic::BattleEntities::DummyRaidBossCharacter
	{
	public:
		Il2CppObject* _dict; // 0x10
		::MX::GameData::Repository::ReaderConfig* _config; // 0x18

		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::Data::Excel::CharacterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CharacterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CHARACTEREXCELREADER_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Load()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CHARACTEREXCELREADER_LOAD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::Repository::ReaderConfig* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::ReaderConfig*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CHARACTEREXCELREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CHARACTEREXCELREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

