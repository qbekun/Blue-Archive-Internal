#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZEERRORDBSCHEMA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1B7F040)
#define MX_DATA_EXCEL_LOCALIZEERRORDBSCHEMA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B7F050)
#define MX_DATA_EXCEL_LOCALIZEERRORDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F060)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeErrorDBSchema_TypeDefinitionIndex = 18375;

	class LocalizeErrorDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Key_k__BackingField; // 0x20

		::System::Void set_Key(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERRORDBSCHEMA_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERRORDBSCHEMA_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERRORDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

