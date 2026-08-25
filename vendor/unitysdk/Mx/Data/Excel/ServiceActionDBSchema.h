#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ServiceActionType; }

#define MX_DATA_EXCEL_SERVICEACTIONDBSCHEMA_SET_SERVICEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C6E950)
#define MX_DATA_EXCEL_SERVICEACTIONDBSCHEMA_GET_SERVICEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C6E960)
#define MX_DATA_EXCEL_SERVICEACTIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E970)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ServiceActionDBSchema_TypeDefinitionIndex = 19354;

	class ServiceActionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::ServiceActionType* _ServiceActionType_k__BackingField; // 0x20

		::System::Void set_ServiceActionType(::FlatData::ServiceActionType* arg)
		{
			((::System::Void(*)(::FlatData::ServiceActionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONDBSCHEMA_SET_SERVICEACTIONTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ServiceActionType* get_ServiceActionType()
		{
			return (return (::FlatData::ServiceActionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONDBSCHEMA_GET_SERVICEACTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

