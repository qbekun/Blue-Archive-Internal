#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_UCACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD959E0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCAction_TypeDefinitionIndex = 9809;

	class UCAction : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

