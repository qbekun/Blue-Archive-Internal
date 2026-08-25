#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHAGROUPEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B39120)
#define MX_DATA_EXCEL_GACHAGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B39520)
#define MX_DATA_EXCEL_GACHAGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B39560)
#define MX_DATA_EXCEL_GACHAGROUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B396D0)
#define MX_DATA_EXCEL_GACHAGROUPEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B399F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaGroupExcelRepository_TypeDefinitionIndex = 18099;

	class GachaGroupExcelRepository : public <>c__DisplayClass13_0
	{
	public:
		Il2CppObject* Select_IDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

