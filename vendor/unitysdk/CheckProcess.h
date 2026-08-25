#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionAreaAlwaysCheck; }

#define CHECKPROCESS_CHECKTARGETS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CHECKPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1347D10)
#define CHECKPROCESS_GETHITCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1347DB0)

	inline static constexpr unsigned int CheckProcess_TypeDefinitionIndex = 14304;

	class CheckProcess : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionAreaAlwaysCheck* Area; // 0x10
		Il2CppObject* previouslyHitCharacters; // 0x18

		Il2CppObject* CheckTargets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHECKPROCESS_CHECKTARGETS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroundConditionAreaAlwaysCheck* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundConditionAreaAlwaysCheck*, ::PVOID))((::PBYTE)hIl2Cpp + CHECKPROCESS_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetHitCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHECKPROCESS_GETHITCHARACTERS_OFFSET))(nullptr);
		}

	};

