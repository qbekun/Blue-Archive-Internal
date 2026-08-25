#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B6BD50)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEDBSCHEMA_SET_CONTROLLERKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6BD60)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEDBSCHEMA_GET_CONTROLLERKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6BD70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyControllerImageDBSchema_TypeDefinitionIndex = 18291;

	class KeyControllerImageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _ControllerKeyCode_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ControllerKeyCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEDBSCHEMA_SET_CONTROLLERKEYCODE_OFFSET))(str, nullptr);
		}

		::System::String* get_ControllerKeyCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEDBSCHEMA_GET_CONTROLLERKEYCODE_OFFSET))(nullptr);
		}

	};
}

