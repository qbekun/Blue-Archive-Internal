#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UIBUTTONACTIVATE_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9F9310)
#define UIBUTTONACTIVATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F93B0)

	inline static constexpr unsigned int UIButtonActivate_TypeDefinitionIndex = 17;

	class UIButtonActivate : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* target; // 0x18
		::System::Boolean state; // 0x20

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONACTIVATE_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONACTIVATE_.CTOR_OFFSET))(nullptr);
		}

	};

