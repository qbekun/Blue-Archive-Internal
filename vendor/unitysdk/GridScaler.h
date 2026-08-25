#pragma once
#include "unitysdk.h"

#define GRIDSCALER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC10D80)
#define GRIDSCALER_RESET_OFFSET UNITYSDK_OFFSET(0xC10DA0)
#define GRIDSCALER_SETSCALEHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xC10DB0)

	inline static constexpr unsigned int GridScaler_TypeDefinitionIndex = 8837;

	class GridScaler : public Il2CppObject
	{
	public:
		::System::Single originalHorizontal; // 0x18
		::System::Single previousScale; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDSCALER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDSCALER_RESET_OFFSET))(nullptr);
		}

		::System::Void SetScaleHorizontal(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GRIDSCALER_SETSCALEHORIZONTAL_OFFSET))(arg, nullptr);
		}

	};

