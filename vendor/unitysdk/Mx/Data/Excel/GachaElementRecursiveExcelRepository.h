#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B373A0)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B376C0)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_SELECTFIRST_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B379C0)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B37CE0)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_SELECT_GACHAGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B37F40)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B38350)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_SELECT_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B38390)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B386A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaElementRecursiveExcelRepository_TypeDefinitionIndex = 18092;

	class GachaElementRecursiveExcelRepository : public OnClickCheckTypes
	{
	public:
		Il2CppObject* SelectFirst_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GachaGroupID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_SELECTFIRST_GACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GachaGroupIDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_SELECT_GACHAGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_GachaGroupID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_SELECT_GACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_IDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

