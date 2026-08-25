#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_STORYSTRATEGYDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C97F70)
#define MX_DATA_EXCEL_STORYSTRATEGYDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C97F80)
#define MX_DATA_EXCEL_STORYSTRATEGYDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C97F90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StoryStrategyDBSchema_TypeDefinitionIndex = 19552;

	class StoryStrategyDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

