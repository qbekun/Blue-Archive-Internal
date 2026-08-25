#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class VisualEffectData; }

#define MX_VISUAL_DATA_LOGICEFFECTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BA50)

namespace MX::Visual::Data
{
	inline static constexpr unsigned int LogicEffectVisual_TypeDefinitionIndex = 20223;

	class LogicEffectVisual : public Il2CppObject
	{
	public:
		::System::String* LogicEffectName; // 0x10
		::MX::Visual::Data::VisualEffectData* StartEffect; // 0x18
		::MX::Visual::Data::VisualEffectData* LoopEffect; // 0x20
		::MX::Visual::Data::VisualEffectData* EndEffect; // 0x28
		::MX::Visual::Data::VisualEffectData* RemovedEffect; // 0x30
		::MX::Visual::Data::VisualEffectData* ApplyEffect; // 0x38
		Il2CppObject* StackCountEffectList; // 0x40
		Il2CppObject* AccumulateEffectList; // 0x48
		Il2CppObject* AccumulateDamageFromTargetsEffectList; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_LOGICEFFECTVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};
}

