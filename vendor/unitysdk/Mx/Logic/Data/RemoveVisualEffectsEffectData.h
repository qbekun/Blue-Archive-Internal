#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_REMOVEVISUALEFFECTSEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F43F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RemoveVisualEffectsEffectData_TypeDefinitionIndex = 13625;

	class RemoveVisualEffectsEffectData : public Il2CppObject
	{
	public:
		::System::String* TargetEffectPrefabName; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_REMOVEVISUALEFFECTSEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

