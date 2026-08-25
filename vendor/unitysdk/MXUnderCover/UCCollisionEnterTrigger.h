#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Collider; }

#define MXUNDERCOVER_UCCOLLISIONENTERTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD93640)
#define MXUNDERCOVER_UCCOLLISIONENTERTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xD936A0)
#define MXUNDERCOVER_UCCOLLISIONENTERTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD937D0)
#define MXUNDERCOVER_UCCOLLISIONENTERTRIGGER_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0xD93910)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCCollisionEnterTrigger_TypeDefinitionIndex = 9726;

	class UCCollisionEnterTrigger : public Il2CppObject
	{
	public:
		Il2CppObject* stayEntities; // 0x58

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCOLLISIONENTERTRIGGER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCOLLISIONENTERTRIGGER_ONTRIGGEREXIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCOLLISIONENTERTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCOLLISIONENTERTRIGGER_ONTRIGGERSTAY_OFFSET))(arg, nullptr);
		}

	};
}

