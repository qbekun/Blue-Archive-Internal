#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1CC3EA0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONDBSCHEMA_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CC3EB0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3EC0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONDBSCHEMA_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CC3ED0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CC3EE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WelcomeCampaignMissionDBSchema_TypeDefinitionIndex = 19772;

	class WelcomeCampaignMissionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x20
		::System::Int64 _Id_k__BackingField; // 0x28

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONDBSCHEMA_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONDBSCHEMA_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

