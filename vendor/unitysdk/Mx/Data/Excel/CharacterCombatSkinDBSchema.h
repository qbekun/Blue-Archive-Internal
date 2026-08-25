#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERCOMBATSKINDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A0EB80)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A0EB90)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A0EBA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterCombatSkinDBSchema_TypeDefinitionIndex = 16935;

	class CharacterCombatSkinDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _GroupId_k__BackingField; // 0x20

		::System::Void set_GroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINDBSCHEMA_SET_GROUPID_OFFSET))(str, nullptr);
		}

		::System::String* get_GroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

