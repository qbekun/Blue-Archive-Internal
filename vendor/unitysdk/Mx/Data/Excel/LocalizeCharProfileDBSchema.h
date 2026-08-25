#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZECHARPROFILEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C8D0)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILEDBSCHEMA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B7C8E0)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILEDBSCHEMA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B7C8F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeCharProfileDBSchema_TypeDefinitionIndex = 18361;

	class LocalizeCharProfileDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILEDBSCHEMA_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILEDBSCHEMA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

	};
}

