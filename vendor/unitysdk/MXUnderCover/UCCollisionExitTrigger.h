#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Collider; }

#define MXUNDERCOVER_UCCOLLISIONEXITTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD93AA0)
#define MXUNDERCOVER_UCCOLLISIONEXITTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xD93B10)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCCollisionExitTrigger_TypeDefinitionIndex = 9727;

	class UCCollisionExitTrigger : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCOLLISIONEXITTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCOLLISIONEXITTRIGGER_ONTRIGGEREXIT_OFFSET))(arg, nullptr);
		}

	};
}

