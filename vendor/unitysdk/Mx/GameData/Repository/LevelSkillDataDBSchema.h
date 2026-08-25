#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_LEVELSKILLDATADBSCHEMA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x17F56F0)
#define MX_GAMEDATA_REPOSITORY_LEVELSKILLDATADBSCHEMA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x17F5700)
#define MX_GAMEDATA_REPOSITORY_LEVELSKILLDATADBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F5710)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int LevelSkillDataDBSchema_TypeDefinitionIndex = 15632;

	class LevelSkillDataDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _Key_k__BackingField; // 0x20

		::System::Void set_Key(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LEVELSKILLDATADBSCHEMA_SET_KEY_OFFSET))(str, nullptr);
		}

		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LEVELSKILLDATADBSCHEMA_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LEVELSKILLDATADBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

