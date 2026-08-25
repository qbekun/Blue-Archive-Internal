#pragma once
#include "../unitysdk.h"

class UCPersonalityType;

#define MXUNDERCOVER_UIUCITEMINFOTAG_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCA880)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCItemInfoTag_TypeDefinitionIndex = 10041;

	class UIUCItemInfoTag : public Il2CppObject
	{
	public:
		UCPersonalityType* itemUseOwnerType; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMINFOTAG_.CTOR_OFFSET))(nullptr);
		}

	};
}

