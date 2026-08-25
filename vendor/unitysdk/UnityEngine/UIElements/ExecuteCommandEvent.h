#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_EXECUTECOMMANDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DCB90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ExecuteCommandEvent_TypeDefinitionIndex = 30455;

	class ExecuteCommandEvent : public ::MXUnderCover::Animation::UCEntityAniController`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXECUTECOMMANDEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

