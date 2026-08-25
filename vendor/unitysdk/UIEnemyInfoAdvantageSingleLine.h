#pragma once
#include "unitysdk.h"

class UILabel;
namespace FlatData { class DamageAttribute; }
namespace FlatData { class ArmorType; }
namespace FlatData { class BulletType; }

#define UIENEMYINFOADVANTAGESINGLELINE_APPLYDAMAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x23F1290)
#define UIENEMYINFOADVANTAGESINGLELINE_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x23F1460)
#define UIENEMYINFOADVANTAGESINGLELINE_SETARMORTYPE_OFFSET UNITYSDK_OFFSET(0x23F15C0)
#define UIENEMYINFOADVANTAGESINGLELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23F1AC0)
#define UIENEMYINFOADVANTAGESINGLELINE_SETBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x23F1B90)

	inline static constexpr unsigned int UIEnemyInfoAdvantageSingleLine_TypeDefinitionIndex = 5418;

	class UIEnemyInfoAdvantageSingleLine : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* armorTypeList; // 0x18
		::Il2CppArray<::System::Object*>* bulletTypeList; // 0x20
		Il2CppObject* rowHeaderLabels; // 0x28
		Il2CppObject* columnHeaderLabels; // 0x30
		Il2CppObject* advantageLabels; // 0x38
		::Il2CppArray<::System::Object*>* advantageRows; // 0x40

		::System::Void ApplyDamageAttribute(UILabel* arg, ::FlatData::DamageAttribute* arg2)
		{
			((::System::Void(*)(UILabel*, ::FlatData::DamageAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOADVANTAGESINGLELINE_APPLYDAMAGEATTRIBUTE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitializeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOADVANTAGESINGLELINE_INITIALIZEINTERNAL_OFFSET))(nullptr);
		}

		::System::Void SetArmorType(::FlatData::ArmorType* arg)
		{
			((::System::Void(*)(::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOADVANTAGESINGLELINE_SETARMORTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOADVANTAGESINGLELINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetBulletType(::FlatData::BulletType* arg)
		{
			((::System::Void(*)(::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOADVANTAGESINGLELINE_SETBULLETTYPE_OFFSET))(arg, nullptr);
		}

	};

