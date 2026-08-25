#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_LOGIC_DATA_DUMMYEFFECTEMPTYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4030)
#define MX_LOGIC_DATA_DUMMYEFFECTEMPTYDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x11F4080)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DummyEffectEmptyDAO_TypeDefinitionIndex = 13588;

	class DummyEffectEmptyDAO : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTEMPTYDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTEMPTYDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

