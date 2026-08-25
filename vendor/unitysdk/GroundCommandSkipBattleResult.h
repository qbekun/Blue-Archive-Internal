#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSKIPBATTLERESULT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2182AD0)
#define GROUNDCOMMANDSKIPBATTLERESULT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x21833C0)
#define GROUNDCOMMANDSKIPBATTLERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2183590)
#define GROUNDCOMMANDSKIPBATTLERESULT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x21833D0)
#define GROUNDCOMMANDSKIPBATTLERESULT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2183620)

	inline static constexpr unsigned int GroundCommandSkipBattleResult_TypeDefinitionIndex = 4055;

	class GroundCommandSkipBattleResult : public Il2CppObject
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandSkipBattleResult&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandSkipBattleResult&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPBATTLERESULT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPBATTLERESULT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPBATTLERESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPBATTLERESULT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandSkipBattleResult&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandSkipBattleResult&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPBATTLERESULT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

