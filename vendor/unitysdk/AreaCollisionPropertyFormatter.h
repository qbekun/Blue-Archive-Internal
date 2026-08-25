#pragma once
#include "unitysdk.h"

#define AREACOLLISIONPROPERTYFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FCC80)
#define AREACOLLISIONPROPERTYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11FCD60)
#define AREACOLLISIONPROPERTYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11FCDF0)

	inline static constexpr unsigned int AreaCollisionPropertyFormatter_TypeDefinitionIndex = 13733;

	class AreaCollisionPropertyFormatter : public StaticGetter`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREACOLLISIONPROPERTYFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::AreaCollisionProperty&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::AreaCollisionProperty&*, ::PVOID))((::PBYTE)hIl2Cpp + AREACOLLISIONPROPERTYFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::AreaCollisionProperty&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::AreaCollisionProperty&*, ::PVOID))((::PBYTE)hIl2Cpp + AREACOLLISIONPROPERTYFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

