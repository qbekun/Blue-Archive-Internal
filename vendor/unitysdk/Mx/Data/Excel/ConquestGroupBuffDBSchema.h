#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTGROUPBUFFDBSCHEMA_GET_CONQUESTBUFFID_OFFSET UNITYSDK_OFFSET(0x1A5E200)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFDBSCHEMA_SET_CONQUESTBUFFID_OFFSET UNITYSDK_OFFSET(0x1A5E210)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E220)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestGroupBuffDBSchema_TypeDefinitionIndex = 17241;

	class ConquestGroupBuffDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ConquestBuffId_k__BackingField; // 0x20

		::System::Int64 get_ConquestBuffId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFDBSCHEMA_GET_CONQUESTBUFFID_OFFSET))(nullptr);
		}

		::System::Void set_ConquestBuffId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFDBSCHEMA_SET_CONQUESTBUFFID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

