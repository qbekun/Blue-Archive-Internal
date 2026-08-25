#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define MXFIELD_CORE_SAVE_FIELDPLAYERSAVEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDD440)
#define MXFIELD_CORE_SAVE_FIELDPLAYERSAVEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xEDD570)
#define MXFIELD_CORE_SAVE_FIELDPLAYERSAVEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDD770)
#define MXFIELD_CORE_SAVE_FIELDPLAYERSAVEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0xEDDB60)
#define MXFIELD_CORE_SAVE_FIELDPLAYERSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDDB20)

namespace MXField::Core::Save
{
	inline static constexpr unsigned int FieldPlayerSaveData_TypeDefinitionIndex = 10988;

	class FieldPlayerSaveData : public Il2CppObject
	{
	public:
		::System::Int64 SceneId; // 0x10
		::UnityEngine::Vector3* Position; // 0x18
		::UnityEngine::Quaternion* Rotation; // 0x24

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Core::Save::FieldPlayerSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Core::Save::FieldPlayerSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDPLAYERSAVEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDPLAYERSAVEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Core::Save::FieldPlayerSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Core::Save::FieldPlayerSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDPLAYERSAVEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDPLAYERSAVEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Quaternion* arg3)
		{
			((::System::Void(*)(::System::Int64, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDPLAYERSAVEDATA_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

