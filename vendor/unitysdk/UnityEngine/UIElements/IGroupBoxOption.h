#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_IGROUPBOXOPTION_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IGroupBoxOption_TypeDefinitionIndex = 30102;

	class IGroupBoxOption : public Il2CppObject
	{
	public:
		::System::Void SetSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IGROUPBOXOPTION_SETSELECTED_OFFSET))(arg, nullptr);
		}

	};
}

