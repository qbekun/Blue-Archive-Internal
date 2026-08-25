#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDDBSCHEMA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19CBF50)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19CBF60)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19CBF70)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDDBSCHEMA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19CBF80)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19CBF90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AccountLevelRewardDBSchema_TypeDefinitionIndex = 16621;

	class AccountLevelRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _Level_k__BackingField; // 0x28

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDDBSCHEMA_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDDBSCHEMA_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

