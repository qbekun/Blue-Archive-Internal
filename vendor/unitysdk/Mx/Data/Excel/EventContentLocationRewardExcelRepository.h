#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1AE9020)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1AE9340)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1AE9740)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AE9A40)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AE9BB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentLocationRewardExcelRepository_TypeDefinitionIndex = 17740;

	class EventContentLocationRewardExcelRepository : public UCBTTaskUCBTTaskStunFormatter
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

