#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C663E0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C667E0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C66820)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C66B20)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C66C90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioResourceInfoExcelRepository_TypeDefinitionIndex = 19317;

	class ScenarioResourceInfoExcelRepository : public <>c__DisplayClass17_0
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

