#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A7E530)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A7E850)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EB50)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A7EB90)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1A7ED00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EchelonConstraintExcelRepository_TypeDefinitionIndex = 17384;

	class EchelonConstraintExcelRepository : public ::FlatData::ShopPurchasePopupType
	{
	public:
		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

