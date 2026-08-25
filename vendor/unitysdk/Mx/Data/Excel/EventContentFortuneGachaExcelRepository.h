#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AE09D0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCELREPOSITORY_SELECT_FORTUNEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE0B40)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCELREPOSITORY_SELECT_FORTUNEGACHAGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1AE0E40)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCELREPOSITORY_SELECTFIRST_FORTUNEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE1240)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1560)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentFortuneGachaExcelRepository_TypeDefinitionIndex = 17705;

	class EventContentFortuneGachaExcelRepository : public ::MXUnderCover::UCBTTaskGuardMode
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_FortuneGachaGroupId(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCELREPOSITORY_SELECT_FORTUNEGACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_FortuneGachaGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCELREPOSITORY_SELECT_FORTUNEGACHAGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_FortuneGachaGroupId(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCELREPOSITORY_SELECTFIRST_FORTUNEGACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

