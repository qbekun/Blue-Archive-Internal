#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_DELEGATEUTILITY_CAST_OFFSET UNITYSDK_OFFSET(0x9FDB0A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DelegateUtility_TypeDefinitionIndex = 34061;

	class DelegateUtility : public Il2CppObject
	{
	public:
		::System::Delegate* Cast(::System::Delegate* arg, ::System::Type* arg)
		{
			return (return (::System::Delegate*(*)(::System::Delegate*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DELEGATEUTILITY_CAST_OFFSET))(arg, arg, nullptr);
		}

	};
}

