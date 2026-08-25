#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_WAITFORENDOFFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA236D90)

namespace UnityEngine
{
	inline static constexpr unsigned int WaitForEndOfFrame_TypeDefinitionIndex = 31182;

	class WaitForEndOfFrame : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORENDOFFRAME_.CTOR_OFFSET))(nullptr);
		}

	};
}

