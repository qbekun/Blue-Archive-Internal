#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }

#define MX_LOGIC_DATA_LOGICEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3D30)
#define MX_LOGIC_DATA_LOGICEFFECTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x11F4330)
#define MX_LOGIC_DATA_LOGICEFFECTDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x11F4340)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LogicEffectData_TypeDefinitionIndex = 13614;

	class LogicEffectData : public Il2CppObject
	{
	public:
		::System::Int32 _Level_k__BackingField; // 0x10
		::System::String* GroupId; // 0x18
		::FlatData::LogicEffectCategory* Category; // 0x20
		::System::String* TemplateId; // 0x28
		::System::Int32 Channel; // 0x30
		::System::Int64 ApplyRate; // 0x38
		::System::String* CommonVisualId; // 0x40
		::System::UInt32 CommonVisualHash; // 0x48
		::System::Int32 PriorityWhenSameFrame; // 0x4C
		::System::Boolean CanTargetTSAInteractingCharacter; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTDATA_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTDATA_SET_LEVEL_OFFSET))(arg, nullptr);
		}

	};
}

