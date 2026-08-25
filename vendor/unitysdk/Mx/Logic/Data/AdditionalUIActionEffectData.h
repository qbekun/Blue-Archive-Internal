#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_ADDITIONALUIACTIONEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3DA0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AdditionalUIActionEffectData_TypeDefinitionIndex = 13547;

	class AdditionalUIActionEffectData : public Il2CppObject
	{
	public:
		::System::String* UIPath; // 0x58
		::System::String* ActionKeyList; // 0x60
		::System::String* DecoKeyList; // 0x68
		::System::String* DecoValList; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDITIONALUIACTIONEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

