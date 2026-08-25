#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE3880)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AE3B80)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AE3CF0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AE40F0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE4130)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentFortuneGachaShopExcelRepository_TypeDefinitionIndex = 17719;

	class EventContentFortuneGachaShopExcelRepository : public ::MXUnderCover::UCBTTaskLookAtNoiseMaker
	{
	public:
		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

	};
}

