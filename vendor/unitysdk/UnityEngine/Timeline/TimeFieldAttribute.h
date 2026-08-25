#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_TIMEFIELDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB7E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeFieldAttribute_TypeDefinitionIndex = 36324;

	class TimeFieldAttribute : public Il2CppObject
	{
	public:
		UseEditMode* _useEditMode_k__BackingField; // 0x18

		::System::Void .ctor(UseEditMode* arg)
		{
			((::System::Void(*)(UseEditMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEFIELDATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

