#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDPLAYSCENARIO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2174790)
#define GROUNDCOMMANDPLAYSCENARIO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x2175470)
#define GROUNDCOMMANDPLAYSCENARIO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2175420)
#define GROUNDCOMMANDPLAYSCENARIO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2175730)
#define GROUNDCOMMANDPLAYSCENARIO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2175740)

	inline static constexpr unsigned int GroundCommandPlayScenario_TypeDefinitionIndex = 4034;

	class GroundCommandPlayScenario : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ScenarioGroupIds; // 0x30
		::System::Boolean UnloadOnStart; // 0x38

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandPlayScenario&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandPlayScenario&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandPlayScenario&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandPlayScenario&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

