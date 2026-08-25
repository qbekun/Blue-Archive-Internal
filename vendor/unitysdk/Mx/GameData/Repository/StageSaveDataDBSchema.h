#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F7960)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADBSCHEMA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17F7970)
#define MX_GAMEDATA_REPOSITORY_STAGESAVEDATADBSCHEMA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17F7980)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int StageSaveDataDBSchema_TypeDefinitionIndex = 15636;

	class StageSaveDataDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADBSCHEMA_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_STAGESAVEDATADBSCHEMA_GET_NAME_OFFSET))(nullptr);
		}

	};
}

