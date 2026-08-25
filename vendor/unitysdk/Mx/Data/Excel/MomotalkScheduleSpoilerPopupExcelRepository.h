#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCELREPOSITORY_SELECT_FAVORSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x1C14AF0)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCELREPOSITORY_SELECTFIRST_FAVORSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x1C14DF0)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C15110)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C15150)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCELREPOSITORY_SELECT_FAVORSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0x1C152C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MomotalkScheduleSpoilerPopupExcelRepository_TypeDefinitionIndex = 18949;

	class MomotalkScheduleSpoilerPopupExcelRepository : public <co_InternalInvoke>d__4
	{
	public:
		Il2CppObject* Select_FavorScheduleId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCELREPOSITORY_SELECT_FAVORSCHEDULEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_FavorScheduleId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCELREPOSITORY_SELECTFIRST_FAVORSCHEDULEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_FavorScheduleIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCELREPOSITORY_SELECT_FAVORSCHEDULEIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

