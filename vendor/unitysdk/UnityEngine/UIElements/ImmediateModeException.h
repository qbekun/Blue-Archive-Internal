#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_IMMEDIATEMODEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31E8F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ImmediateModeException_TypeDefinitionIndex = 30111;

	class ImmediateModeException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMMEDIATEMODEEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

