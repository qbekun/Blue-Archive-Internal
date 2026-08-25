#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1304990)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x13049E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1304A40)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1306420)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_GET_ADDITIONALUIDECOPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1306380)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1306820)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_GET_ADDITIONALUIDATAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x13062E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1306430)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x1308C10)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSetLimitBreakGauge_TypeDefinitionIndex = 14219;

	class GroundCommandSetLimitBreakGauge : public Il2CppObject
	{
	public:
		::System::String* PrefabPath; // 0x30
		::System::Boolean NotUseDefaultSkillSlotUI; // 0x38
		::System::Int64 MaxGauge; // 0x40
		::System::Int64 DefaultGauge; // 0x48
		::Il2CppArray<::System::Object*>* GainRules; // 0x50
		::System::Int64 characterId; // 0x58
		::System::Int32 characterLevel; // 0x60
		::System::Int32 characterGrade; // 0x64
		Il2CppObject* LimitBreakSkills; // 0x68

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetLimitBreakGauge&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetLimitBreakGauge&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_AdditionalUIDecoParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_GET_ADDITIONALUIDECOPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetLimitBreakGauge&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetLimitBreakGauge&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_AdditionalUIDataParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_GET_ADDITIONALUIDATAPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETLIMITBREAKGAUGE_GET_UIPATH_OFFSET))(nullptr);
		}

	};
}

