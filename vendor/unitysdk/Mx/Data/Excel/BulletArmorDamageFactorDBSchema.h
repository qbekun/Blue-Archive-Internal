#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }

#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_GET_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x19F5260)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19F5270)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_GET_DAMAGEFACTORGROUPID_OFFSET UNITYSDK_OFFSET(0x19F5280)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_SET_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x19F5290)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x19F52A0)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_SET_DAMAGEFACTORGROUPID_OFFSET UNITYSDK_OFFSET(0x19F52B0)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_SET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x19F52C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BulletArmorDamageFactorDBSchema_TypeDefinitionIndex = 16824;

	class BulletArmorDamageFactorDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _DamageFactorGroupId_k__BackingField; // 0x20
		::FlatData::BulletType* _BulletType_k__BackingField; // 0x28
		::FlatData::ArmorType* _ArmorType_k__BackingField; // 0x2C

		::FlatData::ArmorType* get_ArmorType()
		{
			return (return (::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_GET_ARMORTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_DamageFactorGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_GET_DAMAGEFACTORGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ArmorType(::FlatData::ArmorType* arg)
		{
			((::System::Void(*)(::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_SET_ARMORTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return (return (::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::System::Void set_DamageFactorGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_SET_DAMAGEFACTORGROUPID_OFFSET))(str, nullptr);
		}

		::System::Void set_BulletType(::FlatData::BulletType* arg)
		{
			((::System::Void(*)(::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTORDBSCHEMA_SET_BULLETTYPE_OFFSET))(arg, nullptr);
		}

	};
}

