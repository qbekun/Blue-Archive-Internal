#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_ADDITIONALUISETEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3DB0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AdditionalUISetEffectData_TypeDefinitionIndex = 13548;

	class AdditionalUISetEffectData : public Il2CppObject
	{
	public:
		::System::String* UIPath; // 0x58
		::System::String* DataKeyList; // 0x60
		::System::String* DataValList; // 0x68
		::System::String* DecoKeyList; // 0x70
		::System::String* DecoValList; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDITIONALUISETEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

