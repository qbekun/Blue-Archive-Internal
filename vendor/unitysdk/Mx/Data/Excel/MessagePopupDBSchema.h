#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MESSAGEPOPUPDBSCHEMA_SET_STRINGID_OFFSET UNITYSDK_OFFSET(0x1B8B7B0)
#define MX_DATA_EXCEL_MESSAGEPOPUPDBSCHEMA_GET_STRINGID_OFFSET UNITYSDK_OFFSET(0x1B8B7C0)
#define MX_DATA_EXCEL_MESSAGEPOPUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B7D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MessagePopupDBSchema_TypeDefinitionIndex = 18431;

	class MessagePopupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _StringId_k__BackingField; // 0x20

		::System::Void set_StringId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPDBSCHEMA_SET_STRINGID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_StringId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPDBSCHEMA_GET_STRINGID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

