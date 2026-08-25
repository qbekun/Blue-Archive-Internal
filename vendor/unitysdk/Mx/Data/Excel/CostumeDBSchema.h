#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_COSTUMEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A78B30)
#define MX_DATA_EXCEL_COSTUMEDBSCHEMA_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A78B40)
#define MX_DATA_EXCEL_COSTUMEDBSCHEMA_SET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A78B50)
#define MX_DATA_EXCEL_COSTUMEDBSCHEMA_SET_COSTUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A78B60)
#define MX_DATA_EXCEL_COSTUMEDBSCHEMA_GET_COSTUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A78B70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CostumeDBSchema_TypeDefinitionIndex = 17355;

	class CostumeDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CostumeGroupId_k__BackingField; // 0x20
		::System::Int64 _CostumeUniqueId_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEDBSCHEMA_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_CostumeUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEDBSCHEMA_SET_COSTUMEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CostumeGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEDBSCHEMA_SET_COSTUMEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEDBSCHEMA_GET_COSTUMEGROUPID_OFFSET))(nullptr);
		}

	};
}

