#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class DummyEffectEmptyDAO; }

#define MX_LOGIC_DATA_DUMMYEFFECTEMPTYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4020)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DummyEffectEmptyValue_TypeDefinitionIndex = 13587;

	class DummyEffectEmptyValue : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::Data::DummyEffectEmptyDAO* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::DummyEffectEmptyDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTEMPTYVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

