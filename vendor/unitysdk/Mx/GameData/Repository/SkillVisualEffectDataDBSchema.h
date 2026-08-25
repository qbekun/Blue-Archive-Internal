#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_SKILLVISUALEFFECTDATADBSCHEMA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x17F1A40)
#define MX_GAMEDATA_REPOSITORY_SKILLVISUALEFFECTDATADBSCHEMA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x17F1A50)
#define MX_GAMEDATA_REPOSITORY_SKILLVISUALEFFECTDATADBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F1A60)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int SkillVisualEffectDataDBSchema_TypeDefinitionIndex = 15614;

	class SkillVisualEffectDataDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _Key_k__BackingField; // 0x20

		::System::Void set_Key(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLVISUALEFFECTDATADBSCHEMA_SET_KEY_OFFSET))(str, nullptr);
		}

		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLVISUALEFFECTDATADBSCHEMA_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLVISUALEFFECTDATADBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

