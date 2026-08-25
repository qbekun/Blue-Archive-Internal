#pragma once
#include "unitysdk.h"

#define GROUPINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x146E670)
#define GROUPINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x146F110)
#define GROUPINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x146F160)

	inline static constexpr unsigned int GroupInfoFormatter_TypeDefinitionIndex = 15119;

	class GroupInfoFormatter : public ::System::Collections::Generic::EqualityComparer`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::MinigameShooting::GroupInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::MinigameShooting::GroupInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::MinigameShooting::GroupInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::MinigameShooting::GroupInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

