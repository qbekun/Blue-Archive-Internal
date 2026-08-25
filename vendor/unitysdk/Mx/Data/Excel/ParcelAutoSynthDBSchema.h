#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_DATA_EXCEL_PARCELAUTOSYNTHDBSCHEMA_GET_REQUIREPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C24640)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C24650)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHDBSCHEMA_GET_REQUIREPARCELID_OFFSET UNITYSDK_OFFSET(0x1C24660)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHDBSCHEMA_SET_REQUIREPARCELID_OFFSET UNITYSDK_OFFSET(0x1C24670)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHDBSCHEMA_SET_REQUIREPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C24680)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ParcelAutoSynthDBSchema_TypeDefinitionIndex = 19013;

	class ParcelAutoSynthDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::ParcelType* _RequireParcelType_k__BackingField; // 0x20
		::System::Int64 _RequireParcelId_k__BackingField; // 0x28

		::FlatData::ParcelType* get_RequireParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHDBSCHEMA_GET_REQUIREPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_RequireParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHDBSCHEMA_GET_REQUIREPARCELID_OFFSET))(nullptr);
		}

		::System::Void set_RequireParcelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHDBSCHEMA_SET_REQUIREPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Void set_RequireParcelType(::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHDBSCHEMA_SET_REQUIREPARCELTYPE_OFFSET))(arg, nullptr);
		}

	};
}

