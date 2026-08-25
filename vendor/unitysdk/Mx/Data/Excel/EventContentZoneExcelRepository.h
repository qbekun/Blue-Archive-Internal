#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B156D0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B159D0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B15CF0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B15E60)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B16260)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentZoneExcelRepository_TypeDefinitionIndex = 17932;

	class EventContentZoneExcelRepository : public ::MXUnderCover::UCEntityTypes
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

