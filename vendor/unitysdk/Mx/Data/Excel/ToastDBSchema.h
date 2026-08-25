#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TOASTDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CA7120)
#define MX_DATA_EXCEL_TOASTDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1CA7130)
#define MX_DATA_EXCEL_TOASTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7140)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ToastDBSchema_TypeDefinitionIndex = 19625;

	class ToastDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Id_k__BackingField; // 0x20

		::System::UInt32 get_Id()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

