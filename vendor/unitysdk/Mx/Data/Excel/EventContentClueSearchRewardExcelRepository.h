#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1AAA740)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AAAA40)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AAAA80)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1AAABF0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1AAAF10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentClueSearchRewardExcelRepository_TypeDefinitionIndex = 17583;

	class EventContentClueSearchRewardExcelRepository : public ::MXUnderCover::UCBTDecoratorIsStunnedReady
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

