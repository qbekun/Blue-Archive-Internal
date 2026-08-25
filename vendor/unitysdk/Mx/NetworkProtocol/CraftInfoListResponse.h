#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41A20)
#define MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_GET_CRAFTINFOS_OFFSET UNITYSDK_OFFSET(0xF41A30)
#define MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_SET_CRAFTINFOS_OFFSET UNITYSDK_OFFSET(0xF41A40)
#define MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_GET_SHIFTINGCRAFTINFOS_OFFSET UNITYSDK_OFFSET(0xF41A50)
#define MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_GET_PRESETSLOTDBS_OFFSET UNITYSDK_OFFSET(0xF41A60)
#define MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_SET_PRESETSLOTDBS_OFFSET UNITYSDK_OFFSET(0xF41A70)
#define MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_SET_SHIFTINGCRAFTINFOS_OFFSET UNITYSDK_OFFSET(0xF41A80)
#define MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41A90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftInfoListResponse_TypeDefinitionIndex = 11596;

	class CraftInfoListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _CraftInfos_k__BackingField; // 0x50
		Il2CppObject* _ShiftingCraftInfos_k__BackingField; // 0x58
		Il2CppObject* _PresetSlotDBs_k__BackingField; // 0x60

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_CraftInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_GET_CRAFTINFOS_OFFSET))(nullptr);
		}

		::System::Void set_CraftInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_SET_CRAFTINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ShiftingCraftInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_GET_SHIFTINGCRAFTINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* get_PresetSlotDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_GET_PRESETSLOTDBS_OFFSET))(nullptr);
		}

		::System::Void set_PresetSlotDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_SET_PRESETSLOTDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShiftingCraftInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_SET_SHIFTINGCRAFTINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTINFOLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

