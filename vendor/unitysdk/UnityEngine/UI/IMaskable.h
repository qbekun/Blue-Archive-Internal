#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UI_IMASKABLE_RECALCULATEMASKING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int IMaskable_TypeDefinitionIndex = 34782;

	class IMaskable : public Il2CppObject
	{
	public:
		::System::Void RecalculateMasking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMASKABLE_RECALCULATEMASKING_OFFSET))(nullptr);
		}

	};
}

