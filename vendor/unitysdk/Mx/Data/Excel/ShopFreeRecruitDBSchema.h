#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHOPFREERECRUITDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C78890)
#define MX_DATA_EXCEL_SHOPFREERECRUITDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C788A0)
#define MX_DATA_EXCEL_SHOPFREERECRUITDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C788B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopFreeRecruitDBSchema_TypeDefinitionIndex = 19399;

	class ShopFreeRecruitDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

