#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_UCSKILLBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7990)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCSkillBase_TypeDefinitionIndex = 9874;

	class UCSkillBase : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

