#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZECODEINBUILDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B7DC30)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDDBSCHEMA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1B7DC40)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDDBSCHEMA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B7DC50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeCodeInBuildDBSchema_TypeDefinitionIndex = 18368;

	class LocalizeCodeInBuildDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Key_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Key(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDDBSCHEMA_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDDBSCHEMA_GET_KEY_OFFSET))(nullptr);
		}

	};
}

