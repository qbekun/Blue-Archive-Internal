#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C96700)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C96A20)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C96B90)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C96F90)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C97290)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StickerPageContentExcelRepository_TypeDefinitionIndex = 19550;

	class StickerPageContentExcelRepository : public <<DestroyVisual>g__co_DestroyVisual|0>d
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

