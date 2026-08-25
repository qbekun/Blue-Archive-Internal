#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_GLOBALIZATIONMODE_GET_INVARIANT_OFFSET UNITYSDK_OFFSET(0x9295800)
#define SYSTEM_GLOBALIZATION_GLOBALIZATIONMODE_GETGLOBALIZATIONINVARIANTMODE_OFFSET UNITYSDK_OFFSET(0x9295850)
#define SYSTEM_GLOBALIZATION_GLOBALIZATIONMODE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9295860)

namespace System::Globalization
{
	inline static constexpr unsigned int GlobalizationMode_TypeDefinitionIndex = 24987;

	class GlobalizationMode : public Il2CppObject
	{
	public:
		::System::Boolean _Invariant_k__BackingField; // 0x0

		::System::Boolean get_Invariant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GLOBALIZATIONMODE_GET_INVARIANT_OFFSET))(nullptr);
		}

		::System::Boolean GetGlobalizationInvariantMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GLOBALIZATIONMODE_GETGLOBALIZATIONINVARIANTMODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GLOBALIZATIONMODE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

