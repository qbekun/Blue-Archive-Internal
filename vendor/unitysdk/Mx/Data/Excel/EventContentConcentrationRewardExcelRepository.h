#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ConcentrationRewardType; }

#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AB4680)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB49E0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB4D00)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AB5000)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB5400)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB5800)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB5BE0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_CONCENTRATIONREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1AB6180)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_CONCENTRATIONREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1AB65C0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_CONCENTRATIONREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1AB69F0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AB6F90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentConcentrationRewardExcelRepository_TypeDefinitionIndex = 17633;

	class EventContentConcentrationRewardExcelRepository : public UCBTTaskAfterMovePathFormatter
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_UniqueId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_UNIQUEID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_UniqueId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_UNIQUEID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_UniqueId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_ConcentrationRewardType(::System::Int64 arg, ::FlatData::ConcentrationRewardType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::ConcentrationRewardType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_CONCENTRATIONREWARDTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_ConcentrationRewardType(::System::Int64 arg, ::FlatData::ConcentrationRewardType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::ConcentrationRewardType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_CONCENTRATIONREWARDTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_ConcentrationRewardType(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_CONCENTRATIONREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

