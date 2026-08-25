#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class SkillVisualData; }
namespace MX::Visual::Data { class SkillVisualData&; }
namespace MX::GameData::Repository { class SkillVisualEffectDataDBSchema; }

#define MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17F2190)
#define MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x17F21A0)
#define MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_FIND_OFFSET UNITYSDK_OFFSET(0x17F2310)
#define MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F26B0)
#define MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_REORGANIZECACHE_OFFSET UNITYSDK_OFFSET(0x17F26C0)
#define MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_TRYGETSKILLVISUALDATA_OFFSET UNITYSDK_OFFSET(0x17F2340)
#define MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F2ED0)
#define MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_PARSE_OFFSET UNITYSDK_OFFSET(0x17F2F60)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int VisualEffectDataRepository_TypeDefinitionIndex = 15620;

	class VisualEffectDataRepository : public States
	{
	public:
		Il2CppObject* lruCache; // 0x30

		::System::Void InitializeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_INITIALIZEINTERNAL_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::MX::Visual::Data::SkillVisualData* Find(::System::String* str)
		{
			return (return (::MX::Visual::Data::SkillVisualData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_FIND_OFFSET))(str, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_CLEAR_OFFSET))(nullptr);
		}

		::System::Void ReOrganizeCache(::MX::Visual::Data::SkillVisualData* arg)
		{
			((::System::Void(*)(::MX::Visual::Data::SkillVisualData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_REORGANIZECACHE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetSkillVisualData(::System::String* str, ::MX::Visual::Data::SkillVisualData&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::Visual::Data::SkillVisualData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_TRYGETSKILLVISUALDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::MX::Visual::Data::SkillVisualData* Parse(::MX::GameData::Repository::SkillVisualEffectDataDBSchema* arg)
		{
			return (return (::MX::Visual::Data::SkillVisualData*(*)(::MX::GameData::Repository::SkillVisualEffectDataDBSchema*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_VISUALEFFECTDATAREPOSITORY_PARSE_OFFSET))(arg, nullptr);
		}

	};
}

