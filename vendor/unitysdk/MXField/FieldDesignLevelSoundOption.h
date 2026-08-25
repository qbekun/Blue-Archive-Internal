#pragma once
#include "../unitysdk.h"

#define MXFIELD_FIELDDESIGNLEVELSOUNDOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE62BF0)

namespace MXField
{
	inline static constexpr unsigned int FieldDesignLevelSoundOption_TypeDefinitionIndex = 10481;

	class FieldDesignLevelSoundOption : public Il2CppObject
	{
	public:
		::System::Single Amb_TransitionTimeMute; // 0x18
		::System::Single Amb_TransitionTimeUnMute; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDDESIGNLEVELSOUNDOPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

