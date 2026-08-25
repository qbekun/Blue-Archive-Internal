#pragma once
#include "unitysdk.h"

#define ADDITIOINALUIPARAMETER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2128940)
#define ADDITIOINALUIPARAMETER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2129C80)
#define ADDITIOINALUIPARAMETER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x212ABD0)
#define ADDITIOINALUIPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2129C70)
#define ADDITIOINALUIPARAMETER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x212ADA0)
#define ADDITIOINALUIPARAMETER_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x212ABE0)

	inline static constexpr unsigned int AdditioinalUIParameter_TypeDefinitionIndex = 3921;

	class AdditioinalUIParameter : public Il2CppObject
	{
	public:
		::System::String* Key; // 0x10
		::System::String* Value; // 0x18

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, AdditioinalUIParameter&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, AdditioinalUIParameter&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIOINALUIPARAMETER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, AdditioinalUIParameter&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, AdditioinalUIParameter&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIOINALUIPARAMETER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIOINALUIPARAMETER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIOINALUIPARAMETER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIOINALUIPARAMETER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIOINALUIPARAMETER_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};

