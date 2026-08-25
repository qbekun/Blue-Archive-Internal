#pragma once
#include "unitysdk.h"

#define EXTRAFRAMEDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F5BD0)
#define EXTRAFRAMEDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F5C20)
#define EXTRAFRAMEDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F52A0)

	inline static constexpr unsigned int ExtraFrameDataFormatter_TypeDefinitionIndex = 13649;

	class ExtraFrameDataFormatter : public ::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::ExtraFrameData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::ExtraFrameData&*, ::PVOID))((::PBYTE)hIl2Cpp + EXTRAFRAMEDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::ExtraFrameData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::ExtraFrameData&*, ::PVOID))((::PBYTE)hIl2Cpp + EXTRAFRAMEDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXTRAFRAMEDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

