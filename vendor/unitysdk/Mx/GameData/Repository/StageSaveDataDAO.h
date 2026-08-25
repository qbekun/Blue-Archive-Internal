#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles::StageSaveData { class StageSaveData; }

#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAO_GET_STAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x17F7990)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F79A0)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAO_SET_STAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x17F79B0)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAO_SET_KEY_OFFSET UNITYSDK_OFFSET(0x17F79C0)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x17F79D0)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int StageSaveDataDAO_TypeDefinitionIndex = 15637;

	class StageSaveDataDAO : public Il2CppObject
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::MX::Logic::Battles::StageSaveData::StageSaveData* _StageSaveData_k__BackingField; // 0x18

		::MX::Logic::Battles::StageSaveData::StageSaveData* get_StageSaveData()
		{
			return (return (::MX::Logic::Battles::StageSaveData::StageSaveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAO_GET_STAGESAVEDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageSaveData(::MX::Logic::Battles::StageSaveData::StageSaveData* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::StageSaveData::StageSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAO_SET_STAGESAVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_Key(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAO_SET_KEY_OFFSET))(str, nullptr);
		}

		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADAO_GET_KEY_OFFSET))(nullptr);
		}

	};
}

