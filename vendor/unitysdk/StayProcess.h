#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionAreaAlwaysCheck; }

#define STAYPROCESS_CHECKTARGETS_OFFSET UNITYSDK_OFFSET(0x13480D0)
#define STAYPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1346B00)

	inline static constexpr unsigned int StayProcess_TypeDefinitionIndex = 14308;

	class StayProcess : public Il2CppObject
	{
	public:
		Il2CppObject* stayDatas; // 0x20

		Il2CppObject* CheckTargets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAYPROCESS_CHECKTARGETS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroundConditionAreaAlwaysCheck* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundConditionAreaAlwaysCheck*, ::PVOID))((::PBYTE)hIl2Cpp + STAYPROCESS_.CTOR_OFFSET))(arg, nullptr);
		}

	};

