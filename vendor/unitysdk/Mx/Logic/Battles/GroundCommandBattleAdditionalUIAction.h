#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12B92B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x12B9620)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B9630)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_GET_ADDITIONALUIACTIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x12BB450)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x12BB400)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB460)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12BB470)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_GET_ADDITIONALUIDECOPARAMETERS_OFFSET UNITYSDK_OFFSET(0x12BCB60)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandBattleAdditionalUIAction_TypeDefinitionIndex = 14136;

	class GroundCommandBattleAdditionalUIAction : public Il2CppObject
	{
	public:
		::System::String* PrefabPath; // 0x30
		Il2CppObject* decoParameters; // 0x38
		Il2CppObject* actionParameters; // 0x40

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_GET_UIPATH_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandBattleAdditionalUIAction&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandBattleAdditionalUIAction&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_AdditionalUIActionParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_GET_ADDITIONALUIACTIONPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandBattleAdditionalUIAction&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandBattleAdditionalUIAction&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_AdditionalUIDecoParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUIACTION_GET_ADDITIONALUIDECOPARAMETERS_OFFSET))(nullptr);
		}

	};
}

