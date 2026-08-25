#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_IVALUEANIMATIONUPDATE_TICK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements::Experimental
{
	inline static constexpr unsigned int IValueAnimationUpdate_TypeDefinitionIndex = 30835;

	class IValueAnimationUpdate : public Il2CppObject
	{
	public:
		::System::Void Tick(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_IVALUEANIMATIONUPDATE_TICK_OFFSET))(arg, nullptr);
		}

	};
}

