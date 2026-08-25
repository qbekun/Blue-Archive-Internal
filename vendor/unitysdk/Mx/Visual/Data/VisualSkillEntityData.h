#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class PositionSetting; }
namespace MX::Visual::Data { class FacingTargetType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Visual::Data { class VisualSkillEntityData&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_VISUAL_DATA_VISUALSKILLENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BB50)
#define MX_VISUAL_DATA_VISUALSKILLENTITYDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5BB60)
#define MX_VISUAL_DATA_VISUALSKILLENTITYDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5C4C0)
#define MX_VISUAL_DATA_VISUALSKILLENTITYDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5C750)
#define MX_VISUAL_DATA_VISUALSKILLENTITYDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1D5C4D0)

namespace MX::Visual::Data
{
	inline static constexpr unsigned int VisualSkillEntityData_TypeDefinitionIndex = 20232;

	class VisualSkillEntityData : public Il2CppObject
	{
	public:
		::MX::Visual::Data::PositionSetting* StartPositionSetting; // 0x10
		::MX::Visual::Data::PositionSetting* EndPositionSetting; // 0x68
		::MX::Visual::Data::FacingTargetType* FacingType; // 0xC0
		::System::Single StartDelaySecond; // 0xC4
		::System::Single MaxDurationSecond; // 0xC8
		::System::Single DestroyDelaySecond; // 0xCC
		::System::String* PrefabPath; // 0xD0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_VISUALSKILLENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Visual::Data::VisualSkillEntityData&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Visual::Data::VisualSkillEntityData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_VISUALSKILLENTITYDATA_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_VISUALSKILLENTITYDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Visual::Data::VisualSkillEntityData&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Visual::Data::VisualSkillEntityData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_VISUALSKILLENTITYDATA_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_VISUALSKILLENTITYDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

