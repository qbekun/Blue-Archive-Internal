#pragma once
#include "unitysdk.h"

class Trigger;
class MXBattleTask;

#define EFFECTREPLACER_AWAKE_OFFSET UNITYSDK_OFFSET(0x20D1770)
#define EFFECTREPLACER_UPDATE_OFFSET UNITYSDK_OFFSET(0x20D1830)
#define EFFECTREPLACER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20D1A60)
#define EFFECTREPLACER_PROCESSEFFECTREPLACE_OFFSET UNITYSDK_OFFSET(0x20D18C0)
#define EFFECTREPLACER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D1AF0)

	inline static constexpr unsigned int EffectReplacer_TypeDefinitionIndex = 3712;

	class EffectReplacer : public Il2CppObject
	{
	public:
		Il2CppObject* replaceEffect; // 0x18
		::System::Single ReplaceEffectDuration; // 0x20
		Trigger* trigger; // 0x24
		MXBattleTask* battleTask; // 0x28
		::System::Int32 createFrame; // 0x30

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTREPLACER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTREPLACER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTREPLACER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void ProcessEffectReplace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTREPLACER_PROCESSEFFECTREPLACE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTREPLACER_.CTOR_OFFSET))(nullptr);
		}

	};

