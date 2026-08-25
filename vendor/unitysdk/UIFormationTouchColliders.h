#pragma once
#include "unitysdk.h"

namespace UnityEngine { class BoxCollider; }

#define UIFORMATIONTOUCHCOLLIDERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D3AA0)

	inline static constexpr unsigned int UIFormationTouchColliders_TypeDefinitionIndex = 5952;

	class UIFormationTouchColliders : public Il2CppObject
	{
	public:
		::UnityEngine::BoxCollider* PickupCollider; // 0x10
		::UnityEngine::BoxCollider* BodyCollider; // 0x18
		::UnityEngine::BoxCollider* TouchCollider; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONTOUCHCOLLIDERS_.CTOR_OFFSET))(nullptr);
		}

	};

