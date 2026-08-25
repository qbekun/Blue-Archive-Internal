#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x198C380)
#define MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x198C390)
#define MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x198C3A0)
#define MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x198C3B0)
#define MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_GET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x198C3C0)
#define MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_SET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x198C3D0)
#define MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x198C3E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyMessangerDBSchema_TypeDefinitionIndex = 16580;

	class AcademyMessangerDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _MessageGroupId_k__BackingField; // 0x20
		::System::Int64 _Id_k__BackingField; // 0x28
		::System::Int64 _CharacterId_k__BackingField; // 0x30

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_MessageGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_GET_MESSAGEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_MessageGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_SET_MESSAGEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGERDBSCHEMA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

	};
}

