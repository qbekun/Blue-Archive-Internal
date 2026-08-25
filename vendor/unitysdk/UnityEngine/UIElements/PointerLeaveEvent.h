#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3FDEE0)
#define UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3FDF20)
#define UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FDF30)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerLeaveEvent_TypeDefinitionIndex = 30538;

	class PointerLeaveEvent : public <>c__DisplayClass45_1
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

