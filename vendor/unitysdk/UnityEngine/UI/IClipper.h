#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UI_ICLIPPER_PERFORMCLIPPING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int IClipper_TypeDefinitionIndex = 34751;

	class IClipper : public Il2CppObject
	{
	public:
		::System::Void PerformClipping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ICLIPPER_PERFORMCLIPPING_OFFSET))(nullptr);
		}

	};
}

