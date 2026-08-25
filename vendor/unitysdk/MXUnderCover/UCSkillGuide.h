#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_UCSKILLGUIDE_SET_OFFSET UNITYSDK_OFFSET(0xDB4670)
#define MXUNDERCOVER_UCSKILLGUIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB46D0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCSkillGuide_TypeDefinitionIndex = 9973;

	class UCSkillGuide : public Il2CppObject
	{
	public:
		::System::Void Set(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLGUIDE_SET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSKILLGUIDE_.CTOR_OFFSET))(nullptr);
		}

	};
}

