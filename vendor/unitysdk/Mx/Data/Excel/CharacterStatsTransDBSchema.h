#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }
namespace FlatData { class StatTransType; }

#define MX_DATA_EXCEL_CHARACTERSTATSTRANSDBSCHEMA_GET_STATTRANSTYPE_OFFSET UNITYSDK_OFFSET(0x1A3E5B0)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSDBSCHEMA_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A3E5C0)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSDBSCHEMA_SET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A3E5D0)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E5E0)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSDBSCHEMA_SET_STATTRANSTYPE_OFFSET UNITYSDK_OFFSET(0x1A3E5F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterStatsTransDBSchema_TypeDefinitionIndex = 17104;

	class CharacterStatsTransDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::EchelonExtensionType* _EchelonExtensionType_k__BackingField; // 0x20
		::FlatData::StatTransType* _StatTransType_k__BackingField; // 0x24

		::FlatData::StatTransType* get_StatTransType()
		{
			return (return (::FlatData::StatTransType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSDBSCHEMA_GET_STATTRANSTYPE_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSDBSCHEMA_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSDBSCHEMA_SET_ECHELONEXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StatTransType(::FlatData::StatTransType* arg)
		{
			((::System::Void(*)(::FlatData::StatTransType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSDBSCHEMA_SET_STATTRANSTYPE_OFFSET))(arg, nullptr);
		}

	};
}

