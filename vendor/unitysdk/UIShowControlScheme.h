#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UISHOWCONTROLSCHEME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3CFF0)
#define UISHOWCONTROLSCHEME_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA3D000)
#define UISHOWCONTROLSCHEME_ONSCHEME_OFFSET UNITYSDK_OFFSET(0xA3D140)
#define UISHOWCONTROLSCHEME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA3D220)

	inline static constexpr unsigned int UIShowControlScheme_TypeDefinitionIndex = 74;

	class UIShowControlScheme : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* target; // 0x18
		::System::Boolean mouse; // 0x20
		::System::Boolean touch; // 0x21
		::System::Boolean controller; // 0x22

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOWCONTROLSCHEME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOWCONTROLSCHEME_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnScheme()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOWCONTROLSCHEME_ONSCHEME_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOWCONTROLSCHEME_ONDISABLE_OFFSET))(nullptr);
		}

	};

