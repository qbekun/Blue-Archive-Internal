#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BB3E90)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB3ED0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB41F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BB44F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BB48F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamInfoExcelRepository_TypeDefinitionIndex = 18640;

	class MiniGameDreamInfoExcelRepository : public <co_InternalInvoke>d__3
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

