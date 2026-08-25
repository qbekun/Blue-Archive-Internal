#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C73580)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCELREPOSITORY_SELECTFIRST_SCENARIORESROUCEINFOID_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C736F0)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCELREPOSITORY_SELECT_SCENARIORESROUCEINFOID_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C73AF0)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCELREPOSITORY_SELECT_SCENARIORESROUCEINFOID_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C73ED0)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C74470)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopCashScenarioResourceInfoExcelRepository_TypeDefinitionIndex = 19380;

	class ShopCashScenarioResourceInfoExcelRepository : public ::MXUnderCover::UCStageModel
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ScenarioResrouceInfoId_ShopCashId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCELREPOSITORY_SELECTFIRST_SCENARIORESROUCEINFOID_SHOPCASHID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ScenarioResrouceInfoId_ShopCashId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCELREPOSITORY_SELECT_SCENARIORESROUCEINFOID_SHOPCASHID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ScenarioResrouceInfoId_ShopCashId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCELREPOSITORY_SELECT_SCENARIORESROUCEINFOID_SHOPCASHID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

