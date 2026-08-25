#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_FRAMERATEFIELDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB800)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int FrameRateFieldAttribute_TypeDefinitionIndex = 36325;

	class FrameRateFieldAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_FRAMERATEFIELDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

