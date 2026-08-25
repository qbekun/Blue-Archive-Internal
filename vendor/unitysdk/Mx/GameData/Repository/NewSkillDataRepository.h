#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SkillLogicData; }
namespace MX::GameData::Repository { class LevelSkillDataDBSchema; }
namespace MX::Logic::Data { class SkillLogicData&; }
namespace MX::Logic::Data { class NewSkillActionData; }
namespace MX::Logic::Data { class PassiveSkillData; }
namespace MX::Logic::Data { class ManualSkillData; }
namespace MX::Logic::Data { class BattleSetting; }
namespace MX::Logic::Data { class HeroSetting; }

#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_GET_CACHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x17F9DB0)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x17F9E60)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17F9FD0)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_PARSE_OFFSET UNITYSDK_OFFSET(0x17FA0F0)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_TRYGETLEVELSKILLDATA_OFFSET UNITYSDK_OFFSET(0x17FA200)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_CONVERT_OFFSET UNITYSDK_OFFSET(0x17FA500)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_LOADLEVELSKILLDATAGROUP_OFFSET UNITYSDK_OFFSET(0x17FA700)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F9FE0)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_FINDSKILL_OFFSET UNITYSDK_OFFSET(0x17FA740)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_FINDACTIVE_OFFSET UNITYSDK_OFFSET(0x17FA870)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_FINDPASSIVE_OFFSET UNITYSDK_OFFSET(0x17FA8C0)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_FINDMANUAL_OFFSET UNITYSDK_OFFSET(0x17FA910)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_FIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_LOADSKILLDATA_OFFSET UNITYSDK_OFFSET(0x17FA960)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_LOADSKILLDATA_OFFSET UNITYSDK_OFFSET(0x17FB5F0)
#define MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x17FBE60)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int NewSkillDataRepository_TypeDefinitionIndex = 15669;

	class NewSkillDataRepository : public ::MXUnderCover::UCSplitDownloadAsset
	{
	public:
		Il2CppObject* skillActionDataDic; // 0x30
		Il2CppObject* passiveSkillDataDic; // 0x38
		Il2CppObject* manualSkillDataDic; // 0x40

		::System::Int32 get_CachedCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_GET_CACHEDCOUNT_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_INITIALIZEINTERNAL_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillLogicData* Parse(::MX::GameData::Repository::LevelSkillDataDBSchema* arg)
		{
			return (return (::MX::Logic::Data::SkillLogicData*(*)(::MX::GameData::Repository::LevelSkillDataDBSchema*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetLevelSkillData(::System::String* str, ::MX::Logic::Data::SkillLogicData&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::Logic::Data::SkillLogicData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_TRYGETLEVELSKILLDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Convert(::MX::Logic::Data::SkillLogicData* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::Data::SkillLogicData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_CONVERT_OFFSET))(arg, nullptr);
		}

		::System::Boolean LoadLevelSkillDataGroup(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_LOADLEVELSKILLDATAGROUP_OFFSET))(str, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_CLEAR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillLogicData* FindSkill(::System::String* str)
		{
			return (return (::MX::Logic::Data::SkillLogicData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_FINDSKILL_OFFSET))(str, nullptr);
		}

		::MX::Logic::Data::NewSkillActionData* FindActive(::System::String* str)
		{
			return (return (::MX::Logic::Data::NewSkillActionData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_FINDACTIVE_OFFSET))(str, nullptr);
		}

		::MX::Logic::Data::PassiveSkillData* FindPassive(::System::String* str)
		{
			return (return (::MX::Logic::Data::PassiveSkillData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_FINDPASSIVE_OFFSET))(str, nullptr);
		}

		::MX::Logic::Data::ManualSkillData* FindManual(::System::String* str)
		{
			return (return (::MX::Logic::Data::ManualSkillData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_FINDMANUAL_OFFSET))(str, nullptr);
		}

		Il2CppObject* Find(Il2CppObject* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_FIND_OFFSET))(arg, str, nullptr);
		}

		::System::Void LoadSkillData(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_LOADSKILLDATA_OFFSET))(arg, nullptr);
		}

		::System::Void LoadSkillData(::System::Int64 arg, ::MX::Logic::Data::HeroSetting* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int64, ::MX::Logic::Data::HeroSetting*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_LOADSKILLDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_NEWSKILLDATAREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

