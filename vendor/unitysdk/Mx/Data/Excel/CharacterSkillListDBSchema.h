#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_SET_CHARACTERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1A35490)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_SET_MINIMUMGRADECHARACTERWEAPON_OFFSET UNITYSDK_OFFSET(0x1A354A0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_SET_MINIMUMTIERCHARACTERGEAR_OFFSET UNITYSDK_OFFSET(0x1A354B0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_SET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x1A354C0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_SET_TSAINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1A354D0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A354E0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_GET_TSAINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1A354F0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_GET_MINIMUMTIERCHARACTERGEAR_OFFSET UNITYSDK_OFFSET(0x1A35500)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_GET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x1A35510)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_GET_CHARACTERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1A35520)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_GET_MINIMUMGRADECHARACTERWEAPON_OFFSET UNITYSDK_OFFSET(0x1A35530)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterSkillListDBSchema_TypeDefinitionIndex = 17076;

	class CharacterSkillListDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CharacterSkillListGroupId_k__BackingField; // 0x20
		::System::Int32 _MinimumGradeCharacterWeapon_k__BackingField; // 0x28
		::System::Int32 _MinimumTierCharacterGear_k__BackingField; // 0x2C
		::System::Int32 _FormIndex_k__BackingField; // 0x30
		::System::Int64 _TSAInteractionId_k__BackingField; // 0x38

		::System::Void set_CharacterSkillListGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_SET_CHARACTERSKILLLISTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_MinimumGradeCharacterWeapon(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_SET_MINIMUMGRADECHARACTERWEAPON_OFFSET))(arg, nullptr);
		}

		::System::Void set_MinimumTierCharacterGear(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_SET_MINIMUMTIERCHARACTERGEAR_OFFSET))(arg, nullptr);
		}

		::System::Void set_FormIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_SET_FORMINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_TSAInteractionId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_SET_TSAINTERACTIONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TSAInteractionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_GET_TSAINTERACTIONID_OFFSET))(nullptr);
		}

		::System::Int32 get_MinimumTierCharacterGear()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_GET_MINIMUMTIERCHARACTERGEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_FormIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_GET_FORMINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterSkillListGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_GET_CHARACTERSKILLLISTGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_MinimumGradeCharacterWeapon()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTDBSCHEMA_GET_MINIMUMGRADECHARACTERWEAPON_OFFSET))(nullptr);
		}

	};
}

