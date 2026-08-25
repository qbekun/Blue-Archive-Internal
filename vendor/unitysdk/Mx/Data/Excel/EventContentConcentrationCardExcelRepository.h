#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AB0A80)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB0CE0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB1000)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AB1300)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_CARDID_OFFSET UNITYSDK_OFFSET(0x1AB1700)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_CARDID_OFFSET UNITYSDK_OFFSET(0x1AB1B00)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_CARDID_OFFSET UNITYSDK_OFFSET(0x1AB1EE0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AB2480)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentConcentrationCardExcelRepository_TypeDefinitionIndex = 17613;

	class EventContentConcentrationCardExcelRepository : public UCBTServiceFindNoiseMakerFormatter
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_CardId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_CARDID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_CardId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_CARDID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_CardId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_CARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

