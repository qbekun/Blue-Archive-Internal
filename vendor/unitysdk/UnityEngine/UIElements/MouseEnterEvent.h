#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_MOUSEENTEREVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E37C0)
#define UNITYENGINE_UIELEMENTS_MOUSEENTEREVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E3800)
#define UNITYENGINE_UIELEMENTS_MOUSEENTEREVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E3810)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseEnterEvent_TypeDefinitionIndex = 30500;

	class MouseEnterEvent : public ::NPA::TriggerFromSendMessage
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTEREVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTEREVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTEREVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

