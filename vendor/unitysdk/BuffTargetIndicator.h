#pragma once
#include "unitysdk.h"

class UITexture;
namespace MX::Logic::Skills::LogicEffects { class ForceAppliedStatChangeFromSingleTargetEffect; }

#define BUFFTARGETINDICATOR_CLOSE_OFFSET UNITYSDK_OFFSET(0x25DB3F0)
#define BUFFTARGETINDICATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25DB420)
#define BUFFTARGETINDICATOR_OPEN_OFFSET UNITYSDK_OFFSET(0x25DB430)

	inline static constexpr unsigned int BuffTargetIndicator_TypeDefinitionIndex = 6372;

	class BuffTargetIndicator : public Il2CppObject
	{
	public:
		UITexture* portrait; // 0x18

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFTARGETINDICATOR_CLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFTARGETINDICATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Open(::MX::Logic::Skills::LogicEffects::ForceAppliedStatChangeFromSingleTargetEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ForceAppliedStatChangeFromSingleTargetEffect*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFTARGETINDICATOR_OPEN_OFFSET))(arg, nullptr);
		}

	};

