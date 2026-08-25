#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_EXTRAFRAMEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F4570)
#define MX_LOGIC_DATA_EXTRAFRAMEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11F50E0)
#define MX_LOGIC_DATA_EXTRAFRAMEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F50D0)
#define MX_LOGIC_DATA_EXTRAFRAMEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11F52E0)
#define MX_LOGIC_DATA_EXTRAFRAMEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F52F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ExtraFrameData_TypeDefinitionIndex = 13650;

	class ExtraFrameData : public Il2CppObject
	{
	public:
		::System::String* Key; // 0x10
		::System::Int32 Frame; // 0x18

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::ExtraFrameData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::ExtraFrameData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRAFRAMEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRAFRAMEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRAFRAMEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRAFRAMEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::ExtraFrameData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::ExtraFrameData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRAFRAMEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

