#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }

#define UITOGGLEDCOMPONENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41B10)
#define UITOGGLEDCOMPONENTS_AWAKE_OFFSET UNITYSDK_OFFSET(0xA41B20)
#define UITOGGLEDCOMPONENTS_TOGGLE_OFFSET UNITYSDK_OFFSET(0xA41D70)

	inline static constexpr unsigned int UIToggledComponents_TypeDefinitionIndex = 85;

	class UIToggledComponents : public Il2CppObject
	{
	public:
		Il2CppObject* activate; // 0x18
		Il2CppObject* deactivate; // 0x20
		::UnityEngine::MonoBehaviour* target; // 0x28
		::System::Boolean inverse; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLEDCOMPONENTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLEDCOMPONENTS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Toggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLEDCOMPONENTS_TOGGLE_OFFSET))(nullptr);
		}

	};

