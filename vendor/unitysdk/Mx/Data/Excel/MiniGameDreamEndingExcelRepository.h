#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BAFBF0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BAFE50)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB0170)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BB0470)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_ENDINGID_OFFSET UNITYSDK_OFFSET(0x1BB0870)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_SELECT_EVENTCONTENTID_ENDINGID_OFFSET UNITYSDK_OFFSET(0x1BB0C70)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_SELECT_EVENTCONTENTID_ENDINGID_OFFSET UNITYSDK_OFFSET(0x1BB1050)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BB15F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamEndingExcelRepository_TypeDefinitionIndex = 18626;

	class MiniGameDreamEndingExcelRepository : public <co_InternalInvoke>d__2
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_EndingId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_ENDINGID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EndingId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_SELECT_EVENTCONTENTID_ENDINGID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EndingId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_SELECT_EVENTCONTENTID_ENDINGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

