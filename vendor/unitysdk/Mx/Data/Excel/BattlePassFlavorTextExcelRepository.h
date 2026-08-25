#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19E3B80)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x19E3BC0)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x19E3EE0)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19E41E0)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x19E4350)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassFlavorTextExcelRepository_TypeDefinitionIndex = 16747;

	class BattlePassFlavorTextExcelRepository : public ::FlatData::TBGObjectType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

