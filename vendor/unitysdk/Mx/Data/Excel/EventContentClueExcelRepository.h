#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AA7120)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_CLUEID_OFFSET UNITYSDK_OFFSET(0x1AA7380)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_SELECT_EVENTCONTENTID_CLUEID_OFFSET UNITYSDK_OFFSET(0x1AA7780)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_SELECT_EVENTCONTENTID_CLUEID_OFFSET UNITYSDK_OFFSET(0x1AA7B60)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA8100)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA8420)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AA8730)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AA8B40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentClueExcelRepository_TypeDefinitionIndex = 17569;

	class EventContentClueExcelRepository : public ::MXUnderCover::UCBTDecoratorIsStunned
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_ClueId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_CLUEID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_ClueId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_SELECT_EVENTCONTENTID_CLUEID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_ClueId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_SELECT_EVENTCONTENTID_CLUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

