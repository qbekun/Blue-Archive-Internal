#pragma once
#include "unitysdk.h"

#define BULLETTYPECONDITIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1229FA0)
#define BULLETTYPECONDITIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1229A10)
#define BULLETTYPECONDITIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1229FF0)

	inline static constexpr unsigned int BulletTypeConditionFormatter_TypeDefinitionIndex = 13776;

	class BulletTypeConditionFormatter : public HebrewToken
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::BulletTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::BulletTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETTYPECONDITIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BULLETTYPECONDITIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::BulletTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::BulletTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETTYPECONDITIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

