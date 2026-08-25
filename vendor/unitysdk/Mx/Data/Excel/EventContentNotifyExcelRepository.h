#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AF4D80)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AF4DC0)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1AF4F30)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1AF5230)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1AF5630)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentNotifyExcelRepository_TypeDefinitionIndex = 17794;

	class EventContentNotifyExcelRepository : public ::MXUnderCover::UCScannable
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

