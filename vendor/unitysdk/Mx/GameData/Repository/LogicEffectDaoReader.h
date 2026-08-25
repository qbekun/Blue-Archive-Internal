#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class ReaderConfig; }
namespace MX::GameData::DAO::Battle { class LogicEffectDAO&; }

#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F9180)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17F91D0)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREADER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F9270)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREADER_LOAD_OFFSET UNITYSDK_OFFSET(0x17F92D0)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int LogicEffectDaoReader_TypeDefinitionIndex = 15654;

	class LogicEffectDaoReader : public ::System::Resources::ResourceLocator
	{
	public:
		Il2CppObject* _table; // 0x10
		::MX::GameData::Repository::ReaderConfig* _config; // 0x18

		::System::Void .ctor(::MX::GameData::Repository::ReaderConfig* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::ReaderConfig*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::MX::GameData::DAO::Battle::LogicEffectDAO&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::MX::GameData::DAO::Battle::LogicEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREADER_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Load()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDAOREADER_LOAD_OFFSET))(nullptr);
		}

	};
}

