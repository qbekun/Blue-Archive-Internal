#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionAreaAlwaysCheck; }

#define EXITPROCESS_CHECKTARGETS_OFFSET UNITYSDK_OFFSET(0x13486C0)
#define EXITPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1346B90)

	inline static constexpr unsigned int ExitProcess_TypeDefinitionIndex = 14310;

	class ExitProcess : public Il2CppObject
	{
	public:
		Il2CppObject* CheckTargets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXITPROCESS_CHECKTARGETS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroundConditionAreaAlwaysCheck* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundConditionAreaAlwaysCheck*, ::PVOID))((::PBYTE)hIl2Cpp + EXITPROCESS_.CTOR_OFFSET))(arg, nullptr);
		}

	};

