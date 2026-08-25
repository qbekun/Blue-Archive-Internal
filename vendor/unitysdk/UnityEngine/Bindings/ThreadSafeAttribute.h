#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_THREADSAFEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A6000)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int ThreadSafeAttribute_TypeDefinitionIndex = 37891;

	class ThreadSafeAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_THREADSAFEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

