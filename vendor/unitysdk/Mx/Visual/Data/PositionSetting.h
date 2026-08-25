#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class PositionSetting; }
namespace MX::Visual::Data { class EffectPositionSource; }
namespace FlatData { class EffectBone; }
namespace UnityEngine { class Vector3; }
namespace MX::Visual::Data { class AlignDirection; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Visual::Data { class PositionSetting&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_VISUAL_DATA_POSITIONSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D59A20)
#define MX_VISUAL_DATA_POSITIONSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D59AE0)
#define MX_VISUAL_DATA_POSITIONSETTING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D59C90)
#define MX_VISUAL_DATA_POSITIONSETTING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D59EA0)
#define MX_VISUAL_DATA_POSITIONSETTING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D59F30)
#define MX_VISUAL_DATA_POSITIONSETTING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5A060)
#define MX_VISUAL_DATA_POSITIONSETTING_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1D5A140)
#define MX_VISUAL_DATA_POSITIONSETTING_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5A570)
#define MX_VISUAL_DATA_POSITIONSETTING_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5AD20)

namespace MX::Visual::Data
{
	inline static constexpr unsigned int PositionSetting_TypeDefinitionIndex = 20220;

	class PositionSetting : public Il2CppObject
	{
	public:
		::MX::Visual::Data::PositionSetting* Empty; // 0x0
		::MX::Visual::Data::EffectPositionSource* PositionSource; // 0x10
		::FlatData::EffectBone* BoneName; // 0x14
		::System::String* BoneNameCustom; // 0x18
		::UnityEngine::Vector3* WorldPosition; // 0x20
		::UnityEngine::Vector3* PositionOffset; // 0x2C
		::UnityEngine::Vector3* RandomPositionOffsetMin; // 0x38
		::UnityEngine::Vector3* RandomPositionOffsetMax; // 0x44
		::UnityEngine::Vector3* AlignRotationOffset; // 0x50
		::MX::Visual::Data::AlignDirection* AlignDirection; // 0x5C
		::System::Boolean IsAttachToTarget; // 0x60
		::System::Boolean IsKeepDirectionUnchanged; // 0x61
		::System::Boolean UpdateDirectionEveryFrame; // 0x62

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_POSITIONSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Visual::Data::PositionSetting* arg)
		{
			return (return (::System::Boolean(*)(::MX::Visual::Data::PositionSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_POSITIONSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_POSITIONSETTING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Visual::Data::PositionSetting* arg, ::MX::Visual::Data::PositionSetting* arg)
		{
			return (return (::System::Boolean(*)(::MX::Visual::Data::PositionSetting*, ::MX::Visual::Data::PositionSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_POSITIONSETTING_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Visual::Data::PositionSetting* arg, ::MX::Visual::Data::PositionSetting* arg)
		{
			return (return (::System::Boolean(*)(::MX::Visual::Data::PositionSetting*, ::MX::Visual::Data::PositionSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_POSITIONSETTING_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_POSITIONSETTING_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_POSITIONSETTING_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Visual::Data::PositionSetting&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Visual::Data::PositionSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_POSITIONSETTING_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Visual::Data::PositionSetting&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Visual::Data::PositionSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_DATA_POSITIONSETTING_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

