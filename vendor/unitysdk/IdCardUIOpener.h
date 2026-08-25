#pragma once
#include "unitysdk.h"

#define IDCARDUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C5A70)
#define IDCARDUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C5CD0)

	inline static constexpr unsigned int IdCardUIOpener_TypeDefinitionIndex = 6977;

	class IdCardUIOpener : public Il2CppObject
	{
	public:
		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCARDUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCARDUIOPENER_.CTOR_OFFSET))(nullptr);
		}

	};

