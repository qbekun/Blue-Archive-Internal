#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERSTATIONARYEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E6EB0)
#define UNITYENGINE_UIELEMENTS_POINTERSTATIONARYEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E6EF0)
#define UNITYENGINE_UIELEMENTS_POINTERSTATIONARYEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E6FF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerStationaryEvent_TypeDefinitionIndex = 30533;

	class PointerStationaryEvent : public ::NPA::Editor::Auth::JavaScriptInterface::PlayNowJavaScriptInterface
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERSTATIONARYEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERSTATIONARYEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERSTATIONARYEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

