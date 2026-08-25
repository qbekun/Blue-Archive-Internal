#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GROUNDMODULEREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B43130)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B43140)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B43150)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GroundModuleRewardDBSchema_TypeDefinitionIndex = 18129;

	class GroundModuleRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _GroupId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_GroupId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

	};
}

