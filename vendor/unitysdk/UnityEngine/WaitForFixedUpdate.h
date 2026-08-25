#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_WAITFORFIXEDUPDATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA236DA0)

namespace UnityEngine
{
	inline static constexpr unsigned int WaitForFixedUpdate_TypeDefinitionIndex = 31183;

	class WaitForFixedUpdate : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORFIXEDUPDATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

