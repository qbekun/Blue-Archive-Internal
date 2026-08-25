#pragma once
#include "../unitysdk.h"

#define CINEMACHINE_CINEMACHINEPIPELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2835B60)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePipeline_TypeDefinitionIndex = 34225;

	class CinemachinePipeline : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPIPELINE_.CTOR_OFFSET))(nullptr);
		}

	};
}

