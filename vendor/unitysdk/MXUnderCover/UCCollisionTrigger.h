#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Collider; }

#define MXUNDERCOVER_UCCOLLISIONTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD938A0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCCollisionTrigger_TypeDefinitionIndex = 9734;

	class UCCollisionTrigger : public Il2CppObject
	{
	public:
		::UnityEngine::Collider* Collider; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCOLLISIONTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

