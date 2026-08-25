#pragma once
#include "unitysdk.h"

class BulletArmorDamageInfo;
class MXButton;
class UIPopup_Tooltip;

#define <>C__DISPLAYCLASS108_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x2315310)
#define <>C__DISPLAYCLASS108_0__OPENBULLETARMORTOOLTIP_B__0_OFFSET UNITYSDK_OFFSET(0x231C450)
#define <>C__DISPLAYCLASS108_0__OPENBULLETARMORTOOLTIP_B__1_OFFSET UNITYSDK_OFFSET(0x231C5C0)

	inline static constexpr unsigned int <>c__DisplayClass108_0_TypeDefinitionIndex = 4902;

	class <>c__DisplayClass108_0 : public Il2CppObject
	{
	public:
		BulletArmorDamageInfo* info; // 0x10
		MXButton* button; // 0x18
		Il2CppObject* __9__1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS108_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OpenBulletArmorTooltip_b__0(UIPopup_Tooltip* arg)
		{
			((::System::Void(*)(UIPopup_Tooltip*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS108_0__OPENBULLETARMORTOOLTIP_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenBulletArmorTooltip_b__1(UIPopup_Tooltip* arg)
		{
			((::System::Void(*)(UIPopup_Tooltip*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS108_0__OPENBULLETARMORTOOLTIP_B__1_OFFSET))(arg, nullptr);
		}

	};

