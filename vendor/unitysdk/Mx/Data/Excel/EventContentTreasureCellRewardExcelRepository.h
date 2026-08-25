#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F7C0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B0F800)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B0FC00)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B0FD70)
#define MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B10090)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentTreasureCellRewardExcelRepository_TypeDefinitionIndex = 17904;

	class EventContentTreasureCellRewardExcelRepository : public ShaderKeywords
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASURECELLREWARDEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

