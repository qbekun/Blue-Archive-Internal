#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12BCC10)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_.CTOR_OFFSET UNITYSDK_OFFSET(0x12BCF50)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12BCFA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_GET_ADDITIONALUIDATAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x12BE690)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_GET_ADDITIONALUIDECOPARAMETERS_OFFSET UNITYSDK_OFFSET(0x12BE6A0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12BCC20)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x12BE6F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12BE700)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandBattleAdditionalUISet_TypeDefinitionIndex = 14138;

	class GroundCommandBattleAdditionalUISet : public Il2CppObject
	{
	public:
		::System::String* PrefabPath; // 0x30
		Il2CppObject* dataParameters; // 0x38
		Il2CppObject* decoParameters; // 0x40

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandBattleAdditionalUISet&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandBattleAdditionalUISet&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_AdditionalUIDataParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_GET_ADDITIONALUIDATAPARAMETERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AdditionalUIDecoParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_GET_ADDITIONALUIDECOPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_GET_UIPATH_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandBattleAdditionalUISet&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandBattleAdditionalUISet&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLEADDITIONALUISET_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

