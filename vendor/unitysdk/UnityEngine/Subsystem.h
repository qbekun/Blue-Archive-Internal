#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SUBSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A6890)

namespace UnityEngine
{
	inline static constexpr unsigned int Subsystem_TypeDefinitionIndex = 37951;

	class Subsystem : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEM_.CTOR_OFFSET))(nullptr);
		}

	};
}

