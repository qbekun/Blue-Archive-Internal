#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_CUSTOMSIGNALEVENTDRAWER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A7020)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int CustomSignalEventDrawer_TypeDefinitionIndex = 36295;

	class CustomSignalEventDrawer : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUSTOMSIGNALEVENTDRAWER_.CTOR_OFFSET))(nullptr);
		}

	};
}

