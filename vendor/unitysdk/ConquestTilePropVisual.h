#pragma once
#include "unitysdk.h"

#define CONQUESTTILEPROPVISUAL_HIDEPROPS_OFFSET UNITYSDK_OFFSET(0x1D08570)
#define CONQUESTTILEPROPVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D08720)
#define CONQUESTTILEPROPVISUAL_SETPROPSTATE_OFFSET UNITYSDK_OFFSET(0x1D08730)

	inline static constexpr unsigned int ConquestTilePropVisual_TypeDefinitionIndex = 1572;

	class ConquestTilePropVisual : public Il2CppObject
	{
	public:
		Il2CppObject* props; // 0x18

		::System::Void HideProps()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEPROPVISUAL_HIDEPROPS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEPROPVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetPropState(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEPROPVISUAL_SETPROPSTATE_OFFSET))(arg, arg2, nullptr);
		}

	};

