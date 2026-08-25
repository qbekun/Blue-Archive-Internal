#pragma once
#include "unitysdk.h"

namespace UnityEngine { class BoxCollider; }
class UIWidget;

#define COLLIDERADJUSTTO_UPDATE_OFFSET UNITYSDK_OFFSET(0x2053540)
#define COLLIDERADJUSTTO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2053740)

	inline static constexpr unsigned int ColliderAdjustTo_TypeDefinitionIndex = 3334;

	class ColliderAdjustTo : public Il2CppObject
	{
	public:
		::UnityEngine::BoxCollider* boxCollider; // 0x18
		UIWidget* nguiWidget; // 0x20

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLIDERADJUSTTO_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLIDERADJUSTTO_.CTOR_OFFSET))(nullptr);
		}

	};

