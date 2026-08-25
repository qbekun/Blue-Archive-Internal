#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class VisualEffectData; }

#define MX_VISUAL_DATA_STACKCOUNTVISUALEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BA60)

namespace MX::Visual::Data
{
	inline static constexpr unsigned int StackCountVisualEffectData_TypeDefinitionIndex = 20224;

	class StackCountVisualEffectData : public Il2CppObject
	{
	public:
		::System::Int32 StackCount; // 0x10
		::MX::Visual::Data::VisualEffectData* StackEffect; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_STACKCOUNTVISUALEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

