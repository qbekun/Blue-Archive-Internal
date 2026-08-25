#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTREWARDDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A665A0)
#define MX_DATA_EXCEL_CONQUESTREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A665B0)
#define MX_DATA_EXCEL_CONQUESTREWARDDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A665C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestRewardDBSchema_TypeDefinitionIndex = 17279;

	class ConquestRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

	};
}

