#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;

#define UICOMPONENTS_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x27CBB10)
#define UICOMPONENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x27CBB50)

	inline static constexpr unsigned int UIComponents_TypeDefinitionIndex = 7596;

	class UIComponents : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* CurrentAnim; // 0x10
		::UnityEngine::GameObject* EnabledGO; // 0x18
		::UnityEngine::GameObject* DisabledGO; // 0x20
		UILabel* RemainingLabel; // 0x28

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICOMPONENTS_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOMPONENTS_.CTOR_OFFSET))(nullptr);
		}

	};

