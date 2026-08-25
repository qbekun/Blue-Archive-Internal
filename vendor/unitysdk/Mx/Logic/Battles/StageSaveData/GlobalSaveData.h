#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_LOGIC_BATTLES_STAGESAVEDATA_GLOBALSAVEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13A07F0)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_GLOBALSAVEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13A0950)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_GLOBALSAVEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13A0C10)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_GLOBALSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A0C20)
#define MX_LOGIC_BATTLES_STAGESAVEDATA_GLOBALSAVEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13A0C30)

namespace MX::Logic::Battles::StageSaveData
{
	inline static constexpr unsigned int GlobalSaveData_TypeDefinitionIndex = 14454;

	class GlobalSaveData : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Position; // 0x10
		Il2CppObject* Events; // 0x20

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::StageSaveData::GlobalSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::StageSaveData::GlobalSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_GLOBALSAVEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_GLOBALSAVEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_GLOBALSAVEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_GLOBALSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::StageSaveData::GlobalSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::StageSaveData::GlobalSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_STAGESAVEDATA_GLOBALSAVEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

