#pragma once
#include "../../unitysdk.h"

#define NPA_GAMES_NXPTOYGAMEMETAINFO_GET_NPSN_OFFSET UNITYSDK_OFFSET(0x9CD3F30)
#define NPA_GAMES_NXPTOYGAMEMETAINFO_SET_NPSN_OFFSET UNITYSDK_OFFSET(0x9CD3F40)
#define NPA_GAMES_NXPTOYGAMEMETAINFO_GET_GUID_OFFSET UNITYSDK_OFFSET(0x9CD3F50)
#define NPA_GAMES_NXPTOYGAMEMETAINFO_SET_GUID_OFFSET UNITYSDK_OFFSET(0x9CD3F60)
#define NPA_GAMES_NXPTOYGAMEMETAINFO_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0x9CD3F70)
#define NPA_GAMES_NXPTOYGAMEMETAINFO_SET_WORLDID_OFFSET UNITYSDK_OFFSET(0x9CD3F80)
#define NPA_GAMES_NXPTOYGAMEMETAINFO_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x9CD3F90)
#define NPA_GAMES_NXPTOYGAMEMETAINFO_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x9CD3FA0)
#define NPA_GAMES_NXPTOYGAMEMETAINFO_GET_META_OFFSET UNITYSDK_OFFSET(0x9CD3FB0)
#define NPA_GAMES_NXPTOYGAMEMETAINFO_SET_META_OFFSET UNITYSDK_OFFSET(0x9CD3FC0)
#define NPA_GAMES_NXPTOYGAMEMETAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD3FD0)

namespace NPA::Games
{
	inline static constexpr unsigned int NXPToyGameMetaInfo_TypeDefinitionIndex = 27439;

	class NXPToyGameMetaInfo : public Il2CppObject
	{
	public:
		::System::String* npsn; // 0x10
		::System::String* guid; // 0x18
		::System::String* worldId; // 0x20
		::System::String* characterId; // 0x28
		Il2CppObject* meta; // 0x30

		::System::String* get_Npsn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEMETAINFO_GET_NPSN_OFFSET))(nullptr);
		}

		::System::Void set_Npsn(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEMETAINFO_SET_NPSN_OFFSET))(str, nullptr);
		}

		::System::String* get_Guid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEMETAINFO_GET_GUID_OFFSET))(nullptr);
		}

		::System::Void set_Guid(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEMETAINFO_SET_GUID_OFFSET))(str, nullptr);
		}

		::System::String* get_WorldId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEMETAINFO_GET_WORLDID_OFFSET))(nullptr);
		}

		::System::Void set_WorldId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEMETAINFO_SET_WORLDID_OFFSET))(str, nullptr);
		}

		::System::String* get_CharacterId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEMETAINFO_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEMETAINFO_SET_CHARACTERID_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Meta()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEMETAINFO_GET_META_OFFSET))(nullptr);
		}

		::System::Void set_Meta(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEMETAINFO_SET_META_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEMETAINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

