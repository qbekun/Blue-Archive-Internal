#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZESKILLDBSCHEMA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1B85350)
#define MX_DATA_EXCEL_LOCALIZESKILLDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B85360)
#define MX_DATA_EXCEL_LOCALIZESKILLDBSCHEMA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B85370)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeSkillDBSchema_TypeDefinitionIndex = 18403;

	class LocalizeSkillDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Key_k__BackingField; // 0x20

		::System::Void set_Key(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLDBSCHEMA_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLDBSCHEMA_GET_KEY_OFFSET))(nullptr);
		}

	};
}

