#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class SkillLogicDAO; }
namespace MX::GameData::Repository { class LevelSkillDataDBSchema; }
namespace MX::GameData::DAO::Battle { class SkillLogicDAO&; }
namespace MX::Logic::Data { class BattleSetting; }
namespace MX::Logic::Data { class HeroSetting; }

#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_GET_CACHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x17F5720)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x17F5800)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17F5970)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_PARSE_OFFSET UNITYSDK_OFFSET(0x17F5A90)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F5B10)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F5980)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_TRYGETVALUEFROMDB_OFFSET UNITYSDK_OFFSET(0x17F5D00)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_CONVERT_OFFSET UNITYSDK_OFFSET(0x17F6000)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_LOADLEVELSKILLDATAGROUP_OFFSET UNITYSDK_OFFSET(0x17F5CC0)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_FIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_LOADSKILLDATA_OFFSET UNITYSDK_OFFSET(0x17F61A0)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_LOADSKILLDATA_OFFSET UNITYSDK_OFFSET(0x17F6E30)
#define MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F7730)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int SkillLogicDAORepository_TypeDefinitionIndex = 15635;

	class SkillLogicDAORepository : public ::Assets::_MX::Program::Scripts::Network::PrefabPoolingSingletonComponent
	{
	public:
		Il2CppObject* skillActionDataDic; // 0x30
		Il2CppObject* passiveSkillDataDic; // 0x38
		Il2CppObject* manualSkillDataDic; // 0x40
		Il2CppObject* selectExSkillDataDic; // 0x48

		::System::Int32 get_CachedCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_GET_CACHEDCOUNT_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_INITIALIZEINTERNAL_OFFSET))(nullptr);
		}

		::MX::GameData::DAO::Battle::SkillLogicDAO* Parse(::MX::GameData::Repository::LevelSkillDataDBSchema* arg)
		{
			return (return (::MX::GameData::DAO::Battle::SkillLogicDAO*(*)(::MX::GameData::Repository::LevelSkillDataDBSchema*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::MX::GameData::DAO::Battle::SkillLogicDAO&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::GameData::DAO::Battle::SkillLogicDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValueFromDB(::System::String* str, ::MX::GameData::DAO::Battle::SkillLogicDAO&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::GameData::DAO::Battle::SkillLogicDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_TRYGETVALUEFROMDB_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Convert(::MX::GameData::DAO::Battle::SkillLogicDAO* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameData::DAO::Battle::SkillLogicDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_CONVERT_OFFSET))(arg, nullptr);
		}

		::System::Boolean LoadLevelSkillDataGroup(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_LOADLEVELSKILLDATAGROUP_OFFSET))(str, nullptr);
		}

		Il2CppObject* Find(Il2CppObject* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_FIND_OFFSET))(arg, str, nullptr);
		}

		::System::Void LoadSkillData(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_LOADSKILLDATA_OFFSET))(arg, nullptr);
		}

		::System::Void LoadSkillData(::System::Int64 arg, ::MX::Logic::Data::HeroSetting* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int64, ::MX::Logic::Data::HeroSetting*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_LOADSKILLDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLLOGICDAOREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

