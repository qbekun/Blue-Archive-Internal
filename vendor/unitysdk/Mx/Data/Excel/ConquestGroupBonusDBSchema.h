#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTGROUPBONUSDBSCHEMA_GET_CONQUESTBONUSID_OFFSET UNITYSDK_OFFSET(0x1A5CF20)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A5CF30)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSDBSCHEMA_SET_CONQUESTBONUSID_OFFSET UNITYSDK_OFFSET(0x1A5CF40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestGroupBonusDBSchema_TypeDefinitionIndex = 17234;

	class ConquestGroupBonusDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ConquestBonusId_k__BackingField; // 0x20

		::System::Int64 get_ConquestBonusId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSDBSCHEMA_GET_CONQUESTBONUSID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConquestBonusId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSDBSCHEMA_SET_CONQUESTBONUSID_OFFSET))(arg, nullptr);
		}

	};
}

