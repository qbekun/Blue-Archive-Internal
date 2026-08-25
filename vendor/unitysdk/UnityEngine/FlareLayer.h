#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_FLARELAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EAA30)

namespace UnityEngine
{
	inline static constexpr unsigned int FlareLayer_TypeDefinitionIndex = 30969;

	class FlareLayer : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FLARELAYER_.CTOR_OFFSET))(nullptr);
		}

	};
}

