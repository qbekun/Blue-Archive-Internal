#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Collision; }

#define MXFIELD_EVENTS_FIELDINTERACTIONHANDLER_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0xEC68C0)
#define MXFIELD_EVENTS_FIELDINTERACTIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC6A50)
#define MXFIELD_EVENTS_FIELDINTERACTIONHANDLER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xEC6A60)

namespace MXField::Events
{
	inline static constexpr unsigned int FieldInteractionHandler_TypeDefinitionIndex = 10880;

	class FieldInteractionHandler : public Il2CppObject
	{
	public:
		::System::Void OnCollisionExit(::UnityEngine::Collision* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDINTERACTIONHANDLER_ONCOLLISIONEXIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDINTERACTIONHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDINTERACTIONHANDLER_ONCOLLISIONENTER_OFFSET))(arg, nullptr);
		}

	};
}

