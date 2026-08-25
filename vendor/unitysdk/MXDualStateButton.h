#pragma once
#include "unitysdk.h"

class MXButton;

#define MXDUALSTATEBUTTON_SETENABLED_OFFSET UNITYSDK_OFFSET(0x2059E40)
#define MXDUALSTATEBUTTON__AWAKE_B__4_1_OFFSET UNITYSDK_OFFSET(0x2059EB0)
#define MXDUALSTATEBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2059ED0)
#define MXDUALSTATEBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x2059EE0)
#define MXDUALSTATEBUTTON__AWAKE_B__4_0_OFFSET UNITYSDK_OFFSET(0x205A140)

	inline static constexpr unsigned int MXDualStateButton_TypeDefinitionIndex = 3357;

	class MXDualStateButton : public Il2CppObject
	{
	public:
		MXButton* NormalButton; // 0x18
		MXButton* DisabledButton; // 0x20
		::System::Action* OnNormalButtonClick; // 0x28
		::System::Action* OnDisabledButtonClick; // 0x30

		::System::Void SetEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXDUALSTATEBUTTON_SETENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__4_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXDUALSTATEBUTTON__AWAKE_B__4_1_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXDUALSTATEBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXDUALSTATEBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__4_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXDUALSTATEBUTTON__AWAKE_B__4_0_OFFSET))(nullptr);
		}

	};

