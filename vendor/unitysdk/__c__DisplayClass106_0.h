#pragma once
#include "unitysdk.h"

class UIPopup_Formation_CharEdit;
namespace MX::Campaign { class HexaTileMap; }

#define <>C__DISPLAYCLASS106_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x255F9D0)
#define <>C__DISPLAYCLASS106_0__SETGROUNDID_B__1_OFFSET UNITYSDK_OFFSET(0x255F9E0)

	inline static constexpr unsigned int <>c__DisplayClass106_0_TypeDefinitionIndex = 6112;

	class <>c__DisplayClass106_0 : public Il2CppObject
	{
	public:
		::System::Boolean loading; // 0x10
		UIPopup_Formation_CharEdit* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS106_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetGroundId_b__1(::MX::Campaign::HexaTileMap* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS106_0__SETGROUNDID_B__1_OFFSET))(arg, nullptr);
		}

	};

