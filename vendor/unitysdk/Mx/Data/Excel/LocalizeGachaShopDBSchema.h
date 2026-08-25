#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZEGACHASHOPDBSCHEMA_SET_GACHASHOPID_OFFSET UNITYSDK_OFFSET(0x1B838C0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPDBSCHEMA_GET_GACHASHOPID_OFFSET UNITYSDK_OFFSET(0x1B838D0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B838E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeGachaShopDBSchema_TypeDefinitionIndex = 18396;

	class LocalizeGachaShopDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GachaShopId_k__BackingField; // 0x20

		::System::Void set_GachaShopId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPDBSCHEMA_SET_GACHASHOPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GachaShopId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPDBSCHEMA_GET_GACHASHOPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

