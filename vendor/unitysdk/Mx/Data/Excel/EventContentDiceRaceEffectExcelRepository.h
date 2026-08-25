#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ABD8B0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1ABD8F0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1ABDCF0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABDE60)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABE160)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentDiceRaceEffectExcelRepository_TypeDefinitionIndex = 17670;

	class EventContentDiceRaceEffectExcelRepository : public UCBTTaskGetNextMovingPathFormatter
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

	};
}

