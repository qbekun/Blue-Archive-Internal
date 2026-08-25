#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectData; }
namespace MX::GameData::Repository { class LogicEffectDataDBSchema; }
namespace MX::Logic::Data { class LogicEffectData&; }

#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_FIND_OFFSET UNITYSDK_OFFSET(0x17FC220)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_PARSE_OFFSET UNITYSDK_OFFSET(0x17FC730)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17FC8A0)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x17FC8B0)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_GETMAXLEVELLOGICEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x17FCB10)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_TRYGETLOGICEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x17FC260)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_GETLOGICEFFETDATA_OFFSET UNITYSDK_OFFSET(0x17FCE30)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x17FD130)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x17FD180)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int LogicEffectDataRepository_TypeDefinitionIndex = 15674;

	class LogicEffectDataRepository : public ::MXUnderCover::UCSkillGuideArrow
	{
	public:
		Il2CppObject* lruCache; // 0x30

		::MX::Logic::Data::LogicEffectData* Find(Il2CppObject* arg)
		{
			return (return (::MX::Logic::Data::LogicEffectData*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_FIND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectData* Parse(::MX::GameData::Repository::LogicEffectDataDBSchema* arg)
		{
			return (return (::MX::Logic::Data::LogicEffectData*(*)(::MX::GameData::Repository::LogicEffectDataDBSchema*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_INITIALIZEINTERNAL_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectData* GetMaxLevelLogicEffectData(::System::String* str)
		{
			return (return (::MX::Logic::Data::LogicEffectData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_GETMAXLEVELLOGICEFFECTDATA_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetLogicEffectData(::System::String* str, ::System::Int32 arg, ::MX::Logic::Data::LogicEffectData&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::MX::Logic::Data::LogicEffectData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_TRYGETLOGICEFFECTDATA_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* GetLogicEffetData(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_GETLOGICEFFETDATA_OFFSET))(str, nullptr);
		}

		::System::Void ClearCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_CLEARCACHE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

