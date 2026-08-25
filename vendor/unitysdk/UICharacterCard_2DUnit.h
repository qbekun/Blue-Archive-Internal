#pragma once
#include "unitysdk.h"

#define UICHARACTERCARD_2DUNIT_ONASSETCARDINSTANTIATED_OFFSET UNITYSDK_OFFSET(0x22063E0)
#define UICHARACTERCARD_2DUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2206470)

	inline static constexpr unsigned int UICharacterCard_2DUnit_TypeDefinitionIndex = 4328;

	class UICharacterCard_2DUnit : public ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
	{
	public:
		::System::Void OnAssetCardInstantiated(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_2DUNIT_ONASSETCARDINSTANTIATED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCARD_2DUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

