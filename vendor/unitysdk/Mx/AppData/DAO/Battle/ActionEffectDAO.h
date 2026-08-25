#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class AbilityActivateTag; }
namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::AppData::DAO::Battle { class ActionEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CD6EF0)
#define MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD71B0)
#define MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7750)
#define MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD7760)
#define MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_SET_FRAME_OFFSET UNITYSDK_OFFSET(0x1CD7820)
#define MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7830)
#define MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x1CD7840)
#define MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD7850)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int ActionEffectDAO_TypeDefinitionIndex = 19855;

	class ActionEffectDAO : public Il2CppObject
	{
	public:
		::System::Int32 _Frame_k__BackingField; // 0x10
		::MX::Logic::Skills::AbilityActivateTag* TriggerTag; // 0x14
		::MX::AppData::DAO::Battle::VisualEffectDAO* StartEffect; // 0x18

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::ActionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::ActionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_CLONE_OFFSET))(nullptr);
		}

		::System::Void set_Frame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_SET_FRAME_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Frame()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_GET_FRAME_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::ActionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::ActionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_ACTIONEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

