#pragma once
#include "../unitysdk.h"

#define CINEMACHINE_NOSAVEDURINGPLAYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x285C860)

namespace Cinemachine
{
	inline static constexpr unsigned int NoSaveDuringPlayAttribute_TypeDefinitionIndex = 34308;

	class NoSaveDuringPlayAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOSAVEDURINGPLAYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

