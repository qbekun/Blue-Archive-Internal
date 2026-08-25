#pragma once
#include "../../unitysdk.h"

#define MX_DATA_BOXGACHAELEMENTDATA_TRYGETBOXGACHAELEMENTDATA_OFFSET UNITYSDK_OFFSET(0x187CB90)
#define MX_DATA_BOXGACHAELEMENTDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x187CBF0)
#define MX_DATA_BOXGACHAELEMENTDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x187CC00)
#define MX_DATA_BOXGACHAELEMENTDATA_DATAPREPROCESSING_OFFSET UNITYSDK_OFFSET(0x187CC10)
#define MX_DATA_BOXGACHAELEMENTDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x187D240)
#define MX_DATA_BOXGACHAELEMENTDATA_GET_BOXGACHAELEMENTDIC_OFFSET UNITYSDK_OFFSET(0x187D280)
#define MX_DATA_BOXGACHAELEMENTDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x187D290)
#define MX_DATA_BOXGACHAELEMENTDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x187D2A0)
#define MX_DATA_BOXGACHAELEMENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x187D2B0)

namespace MX::Data
{
	inline static constexpr unsigned int BoxGachaElementData_TypeDefinitionIndex = 15978;

	class BoxGachaElementData : public Il2CppObject
	{
	public:
		Il2CppObject* boxGachaElementExcels; // 0x18
		Il2CppObject* boxGachaElementDic; // 0x20

		::System::Boolean TryGetBoxGachaElementData(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BOXGACHAELEMENTDATA_TRYGETBOXGACHAELEMENTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BOXGACHAELEMENTDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BOXGACHAELEMENTDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void DataPreprocessing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BOXGACHAELEMENTDATA_DATAPREPROCESSING_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BOXGACHAELEMENTDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		Il2CppObject* get_BoxGachaElementDic()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BOXGACHAELEMENTDATA_GET_BOXGACHAELEMENTDIC_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BOXGACHAELEMENTDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BOXGACHAELEMENTDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BOXGACHAELEMENTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

