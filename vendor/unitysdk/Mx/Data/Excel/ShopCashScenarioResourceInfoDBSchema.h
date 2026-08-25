#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFODBSCHEMA_SET_SCENARIORESROUCEINFOID_OFFSET UNITYSDK_OFFSET(0x1C73530)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFODBSCHEMA_SET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C73540)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFODBSCHEMA_GET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C73550)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFODBSCHEMA_GET_SCENARIORESROUCEINFOID_OFFSET UNITYSDK_OFFSET(0x1C73560)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C73570)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopCashScenarioResourceInfoDBSchema_TypeDefinitionIndex = 19375;

	class ShopCashScenarioResourceInfoDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ScenarioResrouceInfoId_k__BackingField; // 0x20
		::System::Int64 _ShopCashId_k__BackingField; // 0x28

		::System::Void set_ScenarioResrouceInfoId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFODBSCHEMA_SET_SCENARIORESROUCEINFOID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShopCashId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFODBSCHEMA_SET_SHOPCASHID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShopCashId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFODBSCHEMA_GET_SHOPCASHID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioResrouceInfoId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFODBSCHEMA_GET_SCENARIORESROUCEINFOID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

