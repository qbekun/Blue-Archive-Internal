#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C24690)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCELREPOSITORY_SELECTFIRST_REQUIREPARCELTYPE_REQUIREPARCELID_OFFSET UNITYSDK_OFFSET(0x1C24800)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCELREPOSITORY_SELECT_REQUIREPARCELTYPE_REQUIREPARCELID_OFFSET UNITYSDK_OFFSET(0x1C24C40)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCELREPOSITORY_SELECT_REQUIREPARCELTYPE_REQUIREPARCELID_OFFSET UNITYSDK_OFFSET(0x1C25070)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C25610)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ParcelAutoSynthExcelRepository_TypeDefinitionIndex = 19018;

	class ParcelAutoSynthExcelRepository : public Sliding
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_RequireParcelType_RequireParcelId(::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCELREPOSITORY_SELECTFIRST_REQUIREPARCELTYPE_REQUIREPARCELID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_RequireParcelType_RequireParcelId(::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCELREPOSITORY_SELECT_REQUIREPARCELTYPE_REQUIREPARCELID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_RequireParcelType_RequireParcelId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCELREPOSITORY_SELECT_REQUIREPARCELTYPE_REQUIREPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

