#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CC1A60)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CC1A70)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CC1A80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WelcomeCampaignEnterRewardDBSchema_TypeDefinitionIndex = 19765;

	class WelcomeCampaignEnterRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

	};
}

