#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B0F0)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A2B130)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A2B2A0)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A2B590)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A2B8A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterIllustCoordinateExcelRepository_TypeDefinitionIndex = 17033;

	class CharacterIllustCoordinateExcelRepository : public ::FlatData::GachaGroupType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

