#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FIXEDECHELONSETTINGEXCELREPOSITORY_SELECTFIRST_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B24940)
#define MX_DATA_EXCEL_FIXEDECHELONSETTINGEXCELREPOSITORY_SELECT_FIXEDECHELONIDS_OFFSET UNITYSDK_OFFSET(0x1B24C60)
#define MX_DATA_EXCEL_FIXEDECHELONSETTINGEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B25060)
#define MX_DATA_EXCEL_FIXEDECHELONSETTINGEXCELREPOSITORY_SELECT_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B251D0)
#define MX_DATA_EXCEL_FIXEDECHELONSETTINGEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B254D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FixedEchelonSettingExcelRepository_TypeDefinitionIndex = 17995;

	class FixedEchelonSettingExcelRepository : public ::MXUnderCover::UCItemContainer
	{
	public:
		Il2CppObject* SelectFirst_FixedEchelonID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDECHELONSETTINGEXCELREPOSITORY_SELECTFIRST_FIXEDECHELONID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_FixedEchelonIDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDECHELONSETTINGEXCELREPOSITORY_SELECT_FIXEDECHELONIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDECHELONSETTINGEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_FixedEchelonID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDECHELONSETTINGEXCELREPOSITORY_SELECT_FIXEDECHELONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDECHELONSETTINGEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

