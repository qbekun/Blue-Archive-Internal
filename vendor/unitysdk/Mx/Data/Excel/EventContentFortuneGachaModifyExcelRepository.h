#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AE1DC0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE1F30)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AE2230)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AE2270)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE2670)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentFortuneGachaModifyExcelRepository_TypeDefinitionIndex = 17712;

	class EventContentFortuneGachaModifyExcelRepository : public UCBTTaskLookAtNoiseMakerFormatter
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

	};
}

