#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class StageSaveDataDAO&; }
namespace MX::GameData::Repository { class StageSaveDataDAO; }
namespace MX::GameData::Repository { class StageSaveDataDBSchema; }

#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F79E0)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_TRYGETVALUEFROMDB_OFFSET UNITYSDK_OFFSET(0x17F7A60)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17F7D60)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x17F7DE0)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F7F50)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_PARSE_OFFSET UNITYSDK_OFFSET(0x17F7FE0)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F80B0)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_GET_CACHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x17F8180)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int StageSaveDataDAORepository_TypeDefinitionIndex = 15640;

	class StageSaveDataDAORepository : public <>c__DisplayClass3_0
	{
	public:
		Il2CppObject* stageSaveDataRowDic; // 0x30

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValueFromDB(::System::String* str, ::MX::GameData::Repository::StageSaveDataDAO&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::GameData::Repository::StageSaveDataDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_TRYGETVALUEFROMDB_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitializeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_INITIALIZEINTERNAL_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameData::Repository::StageSaveDataDAO* Parse(::MX::GameData::Repository::StageSaveDataDBSchema* arg)
		{
			return (return (::MX::GameData::Repository::StageSaveDataDAO*(*)(::MX::GameData::Repository::StageSaveDataDBSchema*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::MX::GameData::Repository::StageSaveDataDAO&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::GameData::Repository::StageSaveDataDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 get_CachedCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAOREPOSITORY_GET_CACHEDCOUNT_OFFSET))(nullptr);
		}

	};
}

