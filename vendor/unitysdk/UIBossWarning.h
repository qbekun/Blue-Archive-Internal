#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }

#define UIBOSSWARNING_.CTOR_OFFSET UNITYSDK_OFFSET(0x225ADB0)
#define UIBOSSWARNING_AWAKE_OFFSET UNITYSDK_OFFSET(0x225ADC0)
#define UIBOSSWARNING_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x225AE20)

	inline static constexpr unsigned int UIBossWarning_TypeDefinitionIndex = 4556;

	class UIBossWarning : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* myAnimation; // 0xD8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSWARNING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSWARNING_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEndOpenAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSWARNING_ONENDOPENANIMATION_OFFSET))(nullptr);
		}

	};

