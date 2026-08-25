#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_DUPLICATEBONUSDBSCHEMA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1A7CA70)
#define MX_DATA_EXCEL_DUPLICATEBONUSDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A7CA80)
#define MX_DATA_EXCEL_DUPLICATEBONUSDBSCHEMA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A7CA90)
#define MX_DATA_EXCEL_DUPLICATEBONUSDBSCHEMA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1A7CAA0)
#define MX_DATA_EXCEL_DUPLICATEBONUSDBSCHEMA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A7CAB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int DuplicateBonusDBSchema_TypeDefinitionIndex = 17372;

	class DuplicateBonusDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ItemId_k__BackingField; // 0x20
		::System::Int64 _CharacterId_k__BackingField; // 0x28

		::System::Int64 get_ItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSDBSCHEMA_GET_ITEMID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSDBSCHEMA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ItemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSDBSCHEMA_SET_ITEMID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSDBSCHEMA_GET_CHARACTERID_OFFSET))(nullptr);
		}

	};
}

