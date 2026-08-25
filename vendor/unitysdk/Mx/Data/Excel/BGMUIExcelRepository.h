#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BGMUIEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19F1310)
#define MX_DATA_EXCEL_BGMUIEXCELREPOSITORY_SELECTFIRST_UIPREFAB_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x19F1480)
#define MX_DATA_EXCEL_BGMUIEXCELREPOSITORY_SELECT_UIPREFAB_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x19F1880)
#define MX_DATA_EXCEL_BGMUIEXCELREPOSITORY_SELECT_UIPREFAB_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x19F1C60)
#define MX_DATA_EXCEL_BGMUIEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19F2200)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BGMUIExcelRepository_TypeDefinitionIndex = 16808;

	class BGMUIExcelRepository : public ::FlatData::RoadPuzzleMapTileType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_UIPrefab_EventContentId(::System::UInt32 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCELREPOSITORY_SELECTFIRST_UIPREFAB_EVENTCONTENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_UIPrefab_EventContentId(::System::UInt32 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCELREPOSITORY_SELECT_UIPREFAB_EVENTCONTENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_UIPrefab_EventContentId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCELREPOSITORY_SELECT_UIPREFAB_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

