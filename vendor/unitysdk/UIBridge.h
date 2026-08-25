#pragma once
#include "unitysdk.h"

#define UIBRIDGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x225AEE0)
#define UIBRIDGE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x225AEF0)

	inline static constexpr unsigned int UIBridge_TypeDefinitionIndex = 4557;

	class UIBridge : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBRIDGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBRIDGE_ONCLOSED_OFFSET))(nullptr);
		}

	};

