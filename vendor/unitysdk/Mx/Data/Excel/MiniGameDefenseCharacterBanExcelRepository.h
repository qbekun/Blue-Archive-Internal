#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BA5FA0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BA62C0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BA65C0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BA6730)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BA6B30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDefenseCharacterBanExcelRepository_TypeDefinitionIndex = 18578;

	class MiniGameDefenseCharacterBanExcelRepository : public <co_InternalInvoke>d__1
	{
	public:
		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

