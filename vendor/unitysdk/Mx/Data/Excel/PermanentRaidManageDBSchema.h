#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class RaidBossGroupType; }

#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEDBSCHEMA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C25E20)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEDBSCHEMA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C25E30)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C25E40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PermanentRaidManageDBSchema_TypeDefinitionIndex = 19020;

	class PermanentRaidManageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::RaidBossGroupType* _Type_k__BackingField; // 0x20

		::FlatData::RaidBossGroupType* get_Type()
		{
			return (return (::FlatData::RaidBossGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEDBSCHEMA_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::RaidBossGroupType* arg)
		{
			((::System::Void(*)(::FlatData::RaidBossGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEDBSCHEMA_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

