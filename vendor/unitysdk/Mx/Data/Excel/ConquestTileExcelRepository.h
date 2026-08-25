#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ConquestTileType; }

#define MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_SELECTFIRST_TILETYPE_OFFSET UNITYSDK_OFFSET(0x1A685D0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A68940)
#define MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A68BA0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A68EC0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A68F00)
#define MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_SELECT_TILETYPES_OFFSET UNITYSDK_OFFSET(0x1A69200)
#define MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_SELECT_TILETYPE_OFFSET UNITYSDK_OFFSET(0x1A69610)
#define MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A69960)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestTileExcelRepository_TypeDefinitionIndex = 17294;

	class ConquestTileExcelRepository : public ::FlatData::PurchasePeriodType
	{
	public:
		Il2CppObject* SelectFirst_TileType(::FlatData::ConquestTileType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ConquestTileType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_SELECTFIRST_TILETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_TileTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_SELECT_TILETYPES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_TileType(::FlatData::ConquestTileType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ConquestTileType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_SELECT_TILETYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

