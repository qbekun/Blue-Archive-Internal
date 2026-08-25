#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A70830)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPDBSCHEMA_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A70840)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPDBSCHEMA_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A70850)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentSpoilerPopupDBSchema_TypeDefinitionIndex = 17324;

	class ContentSpoilerPopupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPDBSCHEMA_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPDBSCHEMA_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

	};
}

