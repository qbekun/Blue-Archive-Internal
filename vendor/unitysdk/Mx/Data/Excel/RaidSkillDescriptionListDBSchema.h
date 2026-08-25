#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTDBSCHEMA_GET_BOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1C46F50)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C46F60)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTDBSCHEMA_SET_BOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1C46F70)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTDBSCHEMA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C46F80)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTDBSCHEMA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C46F90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidSkillDescriptionListDBSchema_TypeDefinitionIndex = 19173;

	class RaidSkillDescriptionListDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _BossGroup_k__BackingField; // 0x20
		::System::String* _Difficulty_k__BackingField; // 0x28

		::System::String* get_BossGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTDBSCHEMA_GET_BOSSGROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BossGroup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTDBSCHEMA_SET_BOSSGROUP_OFFSET))(str, nullptr);
		}

		::System::String* get_Difficulty()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTDBSCHEMA_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTDBSCHEMA_SET_DIFFICULTY_OFFSET))(str, nullptr);
		}

	};
}

