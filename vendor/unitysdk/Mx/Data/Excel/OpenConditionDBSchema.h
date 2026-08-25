#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class OpenConditionContent; }

#define MX_DATA_EXCEL_OPENCONDITIONDBSCHEMA_SET_OPENCONDITIONCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C20B90)
#define MX_DATA_EXCEL_OPENCONDITIONDBSCHEMA_GET_OPENCONDITIONCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C20BA0)
#define MX_DATA_EXCEL_OPENCONDITIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C20BB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int OpenConditionDBSchema_TypeDefinitionIndex = 18996;

	class OpenConditionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::OpenConditionContent* _OpenConditionContentType_k__BackingField; // 0x20

		::System::Void set_OpenConditionContentType(::FlatData::OpenConditionContent* arg)
		{
			((::System::Void(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONDBSCHEMA_SET_OPENCONDITIONCONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::OpenConditionContent* get_OpenConditionContentType()
		{
			return (return (::FlatData::OpenConditionContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONDBSCHEMA_GET_OPENCONDITIONCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

