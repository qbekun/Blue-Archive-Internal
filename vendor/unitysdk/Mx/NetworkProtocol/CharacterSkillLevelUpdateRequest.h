#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15C80)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_GET_REPLACEINFOS_OFFSET UNITYSDK_OFFSET(0xF15C90)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF15CA0)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_SET_REPLACEINFOS_OFFSET UNITYSDK_OFFSET(0xF15CB0)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_GET_TARGETCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xF15CC0)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF15CD0)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_GET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0xF15CE0)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_SET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0xF15CF0)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_SET_TARGETCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xF15D00)
#define MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15D10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterSkillLevelUpdateRequest_TypeDefinitionIndex = 11468;

	class CharacterSkillLevelUpdateRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterDBId_k__BackingField; // 0x40
		::MX::Logic::BattleEntities::SkillSlot* _SkillSlot_k__BackingField; // 0x48
		::System::Int32 _Level_k__BackingField; // 0x4C
		Il2CppObject* _ReplaceInfos_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ReplaceInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_GET_REPLACEINFOS_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReplaceInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_SET_REPLACEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetCharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_GET_TARGETCHARACTERDBID_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_GET_LEVEL_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_SkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_GET_SKILLSLOT_OFFSET))(nullptr);
		}

		::System::Void set_SkillSlot(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_SET_SKILLSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetCharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_SET_TARGETCHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSKILLLEVELUPDATEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

