#pragma once
#include "unitysdk.h"

#define AUTOUSERULEDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2154DF0)
#define AUTOUSERULEDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2154E50)
#define AUTOUSERULEDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2154E90)

	inline static constexpr unsigned int AutoUseRuleDAOFormatter_TypeDefinitionIndex = 3969;

	class AutoUseRuleDAOFormatter : public ::System::Reflection::Emit::LocalBuilder
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, AutoUseRuleDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, AutoUseRuleDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, AutoUseRuleDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, AutoUseRuleDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

