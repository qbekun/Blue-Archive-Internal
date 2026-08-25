#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZEDBSCHEMA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1B81A90)
#define MX_DATA_EXCEL_LOCALIZEDBSCHEMA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B81AA0)
#define MX_DATA_EXCEL_LOCALIZEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B81AB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeDBSchema_TypeDefinitionIndex = 18389;

	class LocalizeDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Key_k__BackingField; // 0x20

		::System::Void set_Key(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEDBSCHEMA_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEDBSCHEMA_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

