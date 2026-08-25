#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_YIELDINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22DF40)

namespace UnityEngine
{
	inline static constexpr unsigned int YieldInstruction_TypeDefinitionIndex = 31188;

	class YieldInstruction : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YIELDINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

