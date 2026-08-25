#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1A96700)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A96B00)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A96E00)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A97120)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A97290)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentBoxGachaShopExcelRepository_TypeDefinitionIndex = 17488;

	class EventContentBoxGachaShopExcelRepository : public ::FlatData::TacticEnvironment
	{
	public:
		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

