#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class LogicEffectDAO&; }
namespace MX::GameData::DAO::Battle { class LogicEffectDAO; }
namespace MX::GameData::Repository { class LogicEffectDataDBSchema; }

#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x17F46E0)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17F4940)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x17F4950)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F49A0)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_GETLOGICEFFECTDAOLISTBYGROUPID_OFFSET UNITYSDK_OFFSET(0x17F4A30)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_TRYGETLOGICEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x17F4D20)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_GETMAXLEVELLOGICEFFECTDAO_OFFSET UNITYSDK_OFFSET(0x17F5200)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_PARSE_OFFSET UNITYSDK_OFFSET(0x17F5520)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F55A0)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int LogicEffectDAORepository_TypeDefinitionIndex = 15631;

	class LogicEffectDAORepository : public <>c__DisplayClass18_0
	{
	public:
		Il2CppObject* lruCache; // 0x30

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_INITIALIZEINTERNAL_OFFSET))(nullptr);
		}

		::System::Void ClearCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_CLEARCACHE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetLogicEffectDAOListByGroupId(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_GETLOGICEFFECTDAOLISTBYGROUPID_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetLogicEffectData(::System::String* str, ::System::Int32 arg, ::MX::GameData::DAO::Battle::LogicEffectDAO&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::MX::GameData::DAO::Battle::LogicEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_TRYGETLOGICEFFECTDATA_OFFSET))(str, arg, arg, nullptr);
		}

		::MX::GameData::DAO::Battle::LogicEffectDAO* GetMaxLevelLogicEffectDAO(::System::String* str)
		{
			return (return (::MX::GameData::DAO::Battle::LogicEffectDAO*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_GETMAXLEVELLOGICEFFECTDAO_OFFSET))(str, nullptr);
		}

		::MX::GameData::DAO::Battle::LogicEffectDAO* Parse(::MX::GameData::Repository::LogicEffectDataDBSchema* arg)
		{
			return (return (::MX::GameData::DAO::Battle::LogicEffectDAO*(*)(::MX::GameData::Repository::LogicEffectDataDBSchema*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::MX::GameData::DAO::Battle::LogicEffectDAO&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::MX::GameData::DAO::Battle::LogicEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREPOSITORY_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

	};
}

