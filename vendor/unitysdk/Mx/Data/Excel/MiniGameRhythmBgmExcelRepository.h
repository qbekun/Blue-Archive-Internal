#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BC5B30)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_SELECTFIRST_RHYTHMBGMID_OFFSET UNITYSDK_OFFSET(0x1BC5F40)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC6260)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC6570)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BC6890)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BC6AF0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_SELECT_RHYTHMBGMIDS_OFFSET UNITYSDK_OFFSET(0x1BC6B30)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_SELECT_RHYTHMBGMID_OFFSET UNITYSDK_OFFSET(0x1BC6F30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRhythmBgmExcelRepository_TypeDefinitionIndex = 18718;

	class MiniGameRhythmBgmExcelRepository : public <co_InternalInvoke>d__3
	{
	public:
		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_RhythmBgmId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_SELECTFIRST_RHYTHMBGMID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_RhythmBgmIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_SELECT_RHYTHMBGMIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_RhythmBgmId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCELREPOSITORY_SELECT_RHYTHMBGMID_OFFSET))(arg, arg, nullptr);
		}

	};
}

