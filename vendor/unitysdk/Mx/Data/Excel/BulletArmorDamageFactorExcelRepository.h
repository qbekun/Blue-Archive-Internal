#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }

#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19F52D0)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_SELECTFIRST_DAMAGEFACTORGROUPID_OFFSET UNITYSDK_OFFSET(0x19F5530)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_SELECT_DAMAGEFACTORGROUPID_OFFSET UNITYSDK_OFFSET(0x19F5840)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_SELECT_DAMAGEFACTORGROUPIDS_OFFSET UNITYSDK_OFFSET(0x19F5B30)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_SELECTFIRST_DAMAGEFACTORGROUPID_BULLETTYPE_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x19F5F30)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_SELECT_DAMAGEFACTORGROUPID_BULLETTYPE_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x19F64A0)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_SELECT_DAMAGEFACTORGROUPID_BULLETTYPE_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x19F6A00)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19F7040)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BulletArmorDamageFactorExcelRepository_TypeDefinitionIndex = 16832;

	class BulletArmorDamageFactorExcelRepository : public ::FlatData::TBGPortalCondition
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_DamageFactorGroupId(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_SELECTFIRST_DAMAGEFACTORGROUPID_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_DamageFactorGroupId(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_SELECT_DAMAGEFACTORGROUPID_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_DamageFactorGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_SELECT_DAMAGEFACTORGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_DamageFactorGroupId_BulletType_ArmorType(::System::String* str, ::FlatData::BulletType* arg, ::FlatData::ArmorType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::FlatData::BulletType*, ::FlatData::ArmorType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_SELECTFIRST_DAMAGEFACTORGROUPID_BULLETTYPE_ARMORTYPE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_DamageFactorGroupId_BulletType_ArmorType(::System::String* str, ::FlatData::BulletType* arg, ::FlatData::ArmorType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::FlatData::BulletType*, ::FlatData::ArmorType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_SELECT_DAMAGEFACTORGROUPID_BULLETTYPE_ARMORTYPE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_DamageFactorGroupId_BulletType_ArmorType(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_SELECT_DAMAGEFACTORGROUPID_BULLETTYPE_ARMORTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

