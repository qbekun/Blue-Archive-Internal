#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class AbilityActivateTag; }
namespace MX::Visual::Data { class VisualEffectData; }

#define MX_VISUAL_DATA_ACTIONEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BA40)

namespace MX::Visual::Data
{
	inline static constexpr unsigned int ActionEffect_TypeDefinitionIndex = 20222;

	class ActionEffect : public Il2CppObject
	{
	public:
		::System::Int32 Frame; // 0x10
		::MX::Logic::Skills::AbilityActivateTag* TriggerTag; // 0x14
		::MX::Visual::Data::VisualEffectData* StartEffect; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_ACTIONEFFECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

