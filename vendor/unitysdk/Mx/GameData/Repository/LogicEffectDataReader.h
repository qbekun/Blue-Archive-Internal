#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class ReaderConfig; }
namespace MX::Logic::Data { class LogicEffectData&; }

#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREADER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F8AC0)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREADER_LOAD_OFFSET UNITYSDK_OFFSET(0x17F8B20)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17F9090)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F9130)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int LogicEffectDataReader_TypeDefinitionIndex = 15650;

	class LogicEffectDataReader : public <>c
	{
	public:
		Il2CppObject* _table; // 0x10
		::MX::GameData::Repository::ReaderConfig* _config; // 0x18

		::System::Boolean TryGetValue(Il2CppObject* arg, ::MX::Logic::Data::LogicEffectData&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::MX::Logic::Data::LogicEffectData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREADER_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Load()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREADER_LOAD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::Repository::ReaderConfig* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::ReaderConfig*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATAREADER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

