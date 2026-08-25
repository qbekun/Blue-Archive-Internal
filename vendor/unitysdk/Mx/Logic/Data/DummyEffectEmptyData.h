#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_DUMMYEFFECTEMPTYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4010)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DummyEffectEmptyData_TypeDefinitionIndex = 13586;

	class DummyEffectEmptyData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTEMPTYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

