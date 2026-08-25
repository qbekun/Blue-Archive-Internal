#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZEETCDBSCHEMA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B80730)
#define MX_DATA_EXCEL_LOCALIZEETCDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B80740)
#define MX_DATA_EXCEL_LOCALIZEETCDBSCHEMA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1B80750)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeEtcDBSchema_TypeDefinitionIndex = 18382;

	class LocalizeEtcDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Key_k__BackingField; // 0x20

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCDBSCHEMA_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Key(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCDBSCHEMA_SET_KEY_OFFSET))(arg, nullptr);
		}

	};
}

