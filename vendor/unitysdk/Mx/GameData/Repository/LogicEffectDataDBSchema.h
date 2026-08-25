#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATADBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F4690)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATADBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x17F46A0)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATADBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x17F46B0)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATADBSCHEMA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17F46C0)
#define MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATADBSCHEMA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17F46D0)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int LogicEffectDataDBSchema_TypeDefinitionIndex = 15627;

	class LogicEffectDataDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _GroupId_k__BackingField; // 0x20
		::System::Int32 _Level_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATADBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_GroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATADBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATADBSCHEMA_SET_GROUPID_OFFSET))(str, nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATADBSCHEMA_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_LOGICEFFECTDATADBSCHEMA_SET_LEVEL_OFFSET))(arg, nullptr);
		}

	};
}

