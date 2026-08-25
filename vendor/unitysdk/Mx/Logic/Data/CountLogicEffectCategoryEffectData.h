#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3F30)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountLogicEffectCategoryEffectData_TypeDefinitionIndex = 13572;

	class CountLogicEffectCategoryEffectData : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* CountCategory; // 0x58
		::System::Int32 Color0; // 0x5C
		::System::Int32 Color1; // 0x60
		::System::Int32 Color2; // 0x64
		::System::Int32 Color3; // 0x68
		::System::Int32 Color4; // 0x6C
		::System::Int32 Color5; // 0x70
		::System::Int32 Color6; // 0x74
		::System::Int32 Color7; // 0x78
		::System::Int32 Color8; // 0x7C
		::System::Int32 Color9; // 0x80
		::System::Int32 ColorOver10; // 0x84
		::FlatData::EndCondition* EndCondition; // 0x88
		::System::String* EndConditionArgument; // 0x90
		::System::String* EndConditionArgumentSecond; // 0x98
		::System::Boolean Dispellable; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

