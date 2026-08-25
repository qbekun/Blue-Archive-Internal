#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class PlayStartPointType; }
namespace MX::Logic::Battles { class PlayEndPointType; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D1860)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12D2210)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12D2260)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_GET_FADEOUTTIMESECOND_OFFSET UNITYSDK_OFFSET(0x12D21F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12D25D0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12D25E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D25F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_GET_FADEINTIMESECOND_OFFSET UNITYSDK_OFFSET(0x12D2200)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandCurrentBGMChange_TypeDefinitionIndex = 14158;

	class GroundCommandCurrentBGMChange : public Il2CppObject
	{
	public:
		::System::Int64 BGMIdToChange; // 0x30
		::MX::Logic::Battles::PlayStartPointType* PlayStartPoint; // 0x38
		::MX::Logic::Battles::PlayEndPointType* PlayEndPoint; // 0x3C
		::System::Int32 FadeOutTime; // 0x40
		::System::Int32 FadeInTime; // 0x44

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCurrentBGMChange&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCurrentBGMChange&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Single get_FadeOutTimeSecond()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_GET_FADEOUTTIMESECOND_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCurrentBGMChange&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCurrentBGMChange&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_FadeInTimeSecond()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCURRENTBGMCHANGE_GET_FADEINTIMESECOND_OFFSET))(nullptr);
		}

	};
}

