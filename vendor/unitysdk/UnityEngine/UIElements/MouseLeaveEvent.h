#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E3850)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E3890)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E38A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseLeaveEvent_TypeDefinitionIndex = 30501;

	class MouseLeaveEvent : public ::NPA::LoginTypeExtensions
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

