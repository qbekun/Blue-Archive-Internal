#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AB7740)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB79A0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB7CC0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AB7FC0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB83C0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB87C0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB8BA0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AB9140)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentConcentrationVoiceExcelRepository_TypeDefinitionIndex = 17643;

	class EventContentConcentrationVoiceExcelRepository : public ::MXUnderCover::UCBTTaskAfterMovePath
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_UniqueId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_UNIQUEID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_UniqueId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_UNIQUEID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_UniqueId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

