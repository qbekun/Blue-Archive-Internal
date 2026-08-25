#pragma once
#include "unitysdk.h"

namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }

#define BULLETARMORDAMAGEINFO_GET_ISBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x275EB90)
#define BULLETARMORDAMAGEINFO_SET_ISBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x275EBA0)
#define BULLETARMORDAMAGEINFO_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x275EBB0)
#define BULLETARMORDAMAGEINFO_SET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x275EBC0)
#define BULLETARMORDAMAGEINFO_GET_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x275EBD0)
#define BULLETARMORDAMAGEINFO_SET_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x275EBE0)
#define BULLETARMORDAMAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x275EBF0)
#define BULLETARMORDAMAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x275EC10)

	inline static constexpr unsigned int BulletArmorDamageInfo_TypeDefinitionIndex = 7291;

	class BulletArmorDamageInfo : public Il2CppObject
	{
	public:
		::System::Boolean _IsBulletType_k__BackingField; // 0x10
		::FlatData::BulletType* _BulletType_k__BackingField; // 0x14
		::FlatData::ArmorType* _ArmorType_k__BackingField; // 0x18

		::System::Boolean get_IsBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BULLETARMORDAMAGEINFO_GET_ISBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Void set_IsBulletType(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BULLETARMORDAMAGEINFO_SET_ISBULLETTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + BULLETARMORDAMAGEINFO_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::System::Void set_BulletType(::FlatData::BulletType* arg)
		{
			((::System::Void(*)(::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETARMORDAMAGEINFO_SET_BULLETTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ArmorType* get_ArmorType()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + BULLETARMORDAMAGEINFO_GET_ARMORTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ArmorType(::FlatData::ArmorType* arg)
		{
			((::System::Void(*)(::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETARMORDAMAGEINFO_SET_ARMORTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::BulletType* arg)
		{
			((::System::Void(*)(::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETARMORDAMAGEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::ArmorType* arg)
		{
			((::System::Void(*)(::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETARMORDAMAGEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};

