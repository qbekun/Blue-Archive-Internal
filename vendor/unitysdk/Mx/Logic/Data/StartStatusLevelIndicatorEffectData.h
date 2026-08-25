#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F44A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StartStatusLevelIndicatorEffectData_TypeDefinitionIndex = 13636;

	class StartStatusLevelIndicatorEffectData : public Il2CppObject
	{
	public:
		::System::String* LogicEffectTemplateForApplyStatusLevel; // 0x58
		::System::String* UIPath; // 0x60
		::System::Int32 MaxStatusLevel; // 0x68
		::FlatData::EndCondition* EndCondition; // 0x6C
		::System::Int32 EndConditionArgument; // 0x70
		::System::Boolean Dispellable; // 0x74

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

