#pragma once
#include "unitysdk.h"

#define NORMALATTACKPHASECONTROLFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F6D80)
#define NORMALATTACKPHASECONTROLFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F6D40)
#define NORMALATTACKPHASECONTROLFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F6DD0)

	inline static constexpr unsigned int NormalAttackPhaseControlFormatter_TypeDefinitionIndex = 13655;

	class NormalAttackPhaseControlFormatter : public <ReadBufferAsync>d__69
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::NormalAttackPhaseControl&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::NormalAttackPhaseControl&*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKPHASECONTROLFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKPHASECONTROLFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::NormalAttackPhaseControl&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::NormalAttackPhaseControl&*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKPHASECONTROLFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

