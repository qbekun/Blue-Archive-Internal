#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B47BF0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCELREPOSITORY_SELECTFIRST_SEASONID_ORDERNUMBER_OFFSET UNITYSDK_OFFSET(0x1B47D60)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCELREPOSITORY_SELECT_SEASONID_ORDERNUMBER_OFFSET UNITYSDK_OFFSET(0x1B48160)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCELREPOSITORY_SELECT_SEASONID_ORDERNUMBER_OFFSET UNITYSDK_OFFSET(0x1B48540)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B48AE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GuideMissionOpenStageConditionExcelRepository_TypeDefinitionIndex = 18155;

	class GuideMissionOpenStageConditionExcelRepository : public Immediately
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_SeasonId_OrderNumber(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCELREPOSITORY_SELECTFIRST_SEASONID_ORDERNUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonId_OrderNumber(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCELREPOSITORY_SELECT_SEASONID_ORDERNUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonId_OrderNumber(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCELREPOSITORY_SELECT_SEASONID_ORDERNUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

