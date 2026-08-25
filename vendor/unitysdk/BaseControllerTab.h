#pragma once
#include "unitysdk.h"

#define BASECONTROLLERTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0xC79400)
#define BASECONTROLLERTAB_INITIALIZETABMAPPING_OFFSET UNITYSDK_OFFSET(0xC79410)

	inline static constexpr unsigned int BaseControllerTab_TypeDefinitionIndex = 9043;

	class BaseControllerTab : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASECONTROLLERTAB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeTabMapping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASECONTROLLERTAB_INITIALIZETABMAPPING_OFFSET))(nullptr);
		}

	};

