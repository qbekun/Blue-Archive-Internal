#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define CONTROLLERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2191C70)

	inline static constexpr unsigned int ControllerInfo_TypeDefinitionIndex = 4103;

	class ControllerInfo : public Il2CppObject
	{
	public:
		Il2CppObject* Keys; // 0x10
		::UnityEngine::Vector2* LocalPos; // 0x18
		::UnityEngine::Vector2* LocalScale; // 0x20
		::System::Boolean IsDisplay; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERINFO_.CTOR_OFFSET))(nullptr);
		}

	};

