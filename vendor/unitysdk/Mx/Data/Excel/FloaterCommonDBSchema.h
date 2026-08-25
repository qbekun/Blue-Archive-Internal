#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TacticEntityType; }

#define MX_DATA_EXCEL_FLOATERCOMMONDBSCHEMA_SET_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1B27120)
#define MX_DATA_EXCEL_FLOATERCOMMONDBSCHEMA_GET_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1B27130)
#define MX_DATA_EXCEL_FLOATERCOMMONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B27140)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FloaterCommonDBSchema_TypeDefinitionIndex = 18004;

	class FloaterCommonDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::TacticEntityType* _TacticEntityType_k__BackingField; // 0x20

		::System::Void set_TacticEntityType(::FlatData::TacticEntityType* arg)
		{
			((::System::Void(*)(::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONDBSCHEMA_SET_TACTICENTITYTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::TacticEntityType* get_TacticEntityType()
		{
			return (return (::FlatData::TacticEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONDBSCHEMA_GET_TACTICENTITYTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

