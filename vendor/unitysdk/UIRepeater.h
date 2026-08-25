#pragma once
#include "unitysdk.h"

#define UIREPEATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27AD480)
#define UIREPEATER_CLEARADDRESSABLES_OFFSET UNITYSDK_OFFSET(0x27AD490)

	inline static constexpr unsigned int UIRepeater_TypeDefinitionIndex = 7505;

	class UIRepeater : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREPEATER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ClearAddressables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREPEATER_CLEARADDRESSABLES_OFFSET))(nullptr);
		}

	};

