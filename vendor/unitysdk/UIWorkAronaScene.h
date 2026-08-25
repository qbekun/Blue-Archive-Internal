#pragma once
#include "unitysdk.h"

#define UIWORKARONASCENE_ONANIMATIONSET_OFFSET UNITYSDK_OFFSET(0xBDD8C0)
#define UIWORKARONASCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0xBDDA10)

	inline static constexpr unsigned int UIWorkAronaScene_TypeDefinitionIndex = 8701;

	class UIWorkAronaScene : public Il2CppObject
	{
	public:
		::System::Void OnAnimationSet()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKARONASCENE_ONANIMATIONSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKARONASCENE_.CTOR_OFFSET))(nullptr);
		}

	};

