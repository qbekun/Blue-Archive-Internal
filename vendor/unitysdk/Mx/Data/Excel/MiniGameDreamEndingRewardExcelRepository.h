#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BB2350)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_ENDINGID_OFFSET UNITYSDK_OFFSET(0x1BB24C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_ENDINGID_OFFSET UNITYSDK_OFFSET(0x1BB28C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_ENDINGID_OFFSET UNITYSDK_OFFSET(0x1BB2CA0)
#define MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BB3240)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamEndingRewardExcelRepository_TypeDefinitionIndex = 18633;

	class MiniGameDreamEndingRewardExcelRepository : public PlayerHide
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_EndingId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_ENDINGID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EndingId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_ENDINGID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EndingId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_ENDINGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMENDINGREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

