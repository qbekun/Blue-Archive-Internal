#pragma once
#include "unitysdk.h"

#define ADDITIOINALUIPARAMETERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x212AE20)
#define ADDITIOINALUIPARAMETERFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x212ADE0)
#define ADDITIOINALUIPARAMETERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x212AE70)

	inline static constexpr unsigned int AdditioinalUIParameterFormatter_TypeDefinitionIndex = 3920;

	class AdditioinalUIParameterFormatter : public ::System::Reflection::RuntimeMethodInfo
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, AdditioinalUIParameter&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, AdditioinalUIParameter&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIOINALUIPARAMETERFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIOINALUIPARAMETERFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, AdditioinalUIParameter&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, AdditioinalUIParameter&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIOINALUIPARAMETERFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

