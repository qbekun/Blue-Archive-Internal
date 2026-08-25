#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_ARENASETTING_SET_EMBLEMID_OFFSET UNITYSDK_OFFSET(0x11E51F0)
#define MX_LOGIC_DATA_ARENASETTING_GET_REPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x11E5200)
#define MX_LOGIC_DATA_ARENASETTING_SET_REPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x11E5210)
#define MX_LOGIC_DATA_ARENASETTING_GET_EMBLEMID_OFFSET UNITYSDK_OFFSET(0x11E5220)
#define MX_LOGIC_DATA_ARENASETTING_GET_REPRESENTCHARACTERID_OFFSET UNITYSDK_OFFSET(0x11E5230)
#define MX_LOGIC_DATA_ARENASETTING_SET_ARENAMAPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x11E5240)
#define MX_LOGIC_DATA_ARENASETTING_SET_TEAMLEVEL_OFFSET UNITYSDK_OFFSET(0x11E5250)
#define MX_LOGIC_DATA_ARENASETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E5260)
#define MX_LOGIC_DATA_ARENASETTING_GET_ARENAMAPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x11E5270)
#define MX_LOGIC_DATA_ARENASETTING_SET_REPRESENTCHARACTERID_OFFSET UNITYSDK_OFFSET(0x11E5280)
#define MX_LOGIC_DATA_ARENASETTING_GET_TEAMLEVEL_OFFSET UNITYSDK_OFFSET(0x11E5290)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ArenaSetting_TypeDefinitionIndex = 13451;

	class ArenaSetting : public Il2CppObject
	{
	public:
		::System::Int64 _TeamLevel_k__BackingField; // 0x10
		::System::Int64 _RepresentCharacterId_k__BackingField; // 0x18
		::System::Int64 _RepresentCharacterCostumeId_k__BackingField; // 0x20
		::System::Int64 _ArenaMapUniqueId_k__BackingField; // 0x28
		::System::Int64 _EmblemId_k__BackingField; // 0x30

		::System::Void set_EmblemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARENASETTING_SET_EMBLEMID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RepresentCharacterCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARENASETTING_GET_REPRESENTCHARACTERCOSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_RepresentCharacterCostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARENASETTING_SET_REPRESENTCHARACTERCOSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EmblemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARENASETTING_GET_EMBLEMID_OFFSET))(nullptr);
		}

		::System::Int64 get_RepresentCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARENASETTING_GET_REPRESENTCHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_ArenaMapUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARENASETTING_SET_ARENAMAPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TeamLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARENASETTING_SET_TEAMLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARENASETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ArenaMapUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARENASETTING_GET_ARENAMAPUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_RepresentCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARENASETTING_SET_REPRESENTCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TeamLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARENASETTING_GET_TEAMLEVEL_OFFSET))(nullptr);
		}

	};
}

