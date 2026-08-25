#pragma once
#include "unitysdk.h"

class CharacterDetailDisplayState;
namespace MX::Data::Excel { class CharacterExcel; }
class CharacterObject;

#define CHARACTERDETAILDATA_MOVENOTOWNEDTOOWNED_OFFSET UNITYSDK_OFFSET(0x22BAA40)
#define CHARACTERDETAILDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x22BA3E0)
#define CHARACTERDETAILDATA_SET_STYLEINDEX_OFFSET UNITYSDK_OFFSET(0x22BACF0)
#define CHARACTERDETAILDATA_GET_CURRENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x22BAD00)
#define CHARACTERDETAILDATA_GET_SHOWCHARACTERID_OFFSET UNITYSDK_OFFSET(0x22BADA0)
#define CHARACTERDETAILDATA_SET_NOTOWNEDCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x22BADB0)
#define CHARACTERDETAILDATA_PRELOADRESOURCE_OFFSET UNITYSDK_OFFSET(0x22BADC0)
#define CHARACTERDETAILDATA_SET_ISSHOWMAXSTATINFO_OFFSET UNITYSDK_OFFSET(0x22BB140)
#define CHARACTERDETAILDATA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x22BB150)
#define CHARACTERDETAILDATA_GET_ISSHOWMAXSTATINFO_OFFSET UNITYSDK_OFFSET(0x22BB160)
#define CHARACTERDETAILDATA_GET_CURRENTCHARACTERID_OFFSET UNITYSDK_OFFSET(0x22BB290)
#define CHARACTERDETAILDATA_GET_STYLEINDEX_OFFSET UNITYSDK_OFFSET(0x22BB380)
#define CHARACTERDETAILDATA_GET_OWNEDCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x22BB390)
#define CHARACTERDETAILDATA_GET_REPCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x22BB3A0)
#define CHARACTERDETAILDATA_GET_HASCHARACTER_OFFSET UNITYSDK_OFFSET(0x22BAC50)
#define CHARACTERDETAILDATA_GET_CHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x22BB440)
#define CHARACTERDETAILDATA_GET_CHAROBJ_OFFSET UNITYSDK_OFFSET(0x22BB4E0)
#define CHARACTERDETAILDATA_SET_OWNEDCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x22BB5C0)
#define CHARACTERDETAILDATA_SET_SHOWCHARACTERID_OFFSET UNITYSDK_OFFSET(0x22BABF0)
#define CHARACTERDETAILDATA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x22BB5D0)
#define CHARACTERDETAILDATA_GET_NOTOWNEDCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x22BB5E0)
#define CHARACTERDETAILDATA_SET_SHOWIDS_OFFSET UNITYSDK_OFFSET(0x22BB5F0)
#define CHARACTERDETAILDATA_GET_SHOWIDS_OFFSET UNITYSDK_OFFSET(0x22BB600)
#define CHARACTERDETAILDATA_CHANGESTYLE_OFFSET UNITYSDK_OFFSET(0x22BB610)
#define CHARACTERDETAILDATA_ISSHOWMAXSTAT_OFFSET UNITYSDK_OFFSET(0x22BB170)

	inline static constexpr unsigned int CharacterDetailData_TypeDefinitionIndex = 4785;

	class CharacterDetailData : public Il2CppObject
	{
	public:
		Il2CppObject* _OwnedCharacterIds_k__BackingField; // 0x10
		Il2CppObject* _NotOwnedCharacterIds_k__BackingField; // 0x18
		Il2CppObject* _ShowIds_k__BackingField; // 0x20
		::System::Int64 _showCharacterId; // 0x28
		::System::Int64 _StyleIndex_k__BackingField; // 0x30
		CharacterDetailDisplayState* _State_k__BackingField; // 0x38
		::System::Boolean isShowMaxStatInfo; // 0x3C

		::System::Void MoveNotOwnedToOwned(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_MOVENOTOWNEDTOOWNED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int64 arg2, Il2CppObject* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_StyleIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_SET_STYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentCharacterCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_CURRENTCHARACTERCOSTUMEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ShowCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_SHOWCHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_NotOwnedCharacterIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_SET_NOTOWNEDCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::System::Void PreLoadResource()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_PRELOADRESOURCE_OFFSET))(nullptr);
		}

		::System::Void set_IsShowMaxStatInfo(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_SET_ISSHOWMAXSTATINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_State(CharacterDetailDisplayState* arg)
		{
			((::System::Void(*)(CharacterDetailDisplayState*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsShowMaxStatInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_ISSHOWMAXSTATINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_CURRENTCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_StyleIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_STYLEINDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_OwnedCharacterIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_OWNEDCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Int64 get_RepCharacterCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_REPCHARACTERCOSTUMEID_OFFSET))(nullptr);
		}

		::System::Boolean get_HasCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_HASCHARACTER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterExcel* get_CharacterExcel()
		{
			return ((::MX::Data::Excel::CharacterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_CHARACTEREXCEL_OFFSET))(nullptr);
		}

		CharacterObject* get_CharObj()
		{
			return ((CharacterObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_CHAROBJ_OFFSET))(nullptr);
		}

		::System::Void set_OwnedCharacterIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_SET_OWNEDCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShowCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_SET_SHOWCHARACTERID_OFFSET))(arg, nullptr);
		}

		CharacterDetailDisplayState* get_State()
		{
			return ((CharacterDetailDisplayState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_STATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_NotOwnedCharacterIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_NOTOWNEDCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Void set_ShowIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_SET_SHOWIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ShowIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_GET_SHOWIDS_OFFSET))(nullptr);
		}

		::System::Void ChangeStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_CHANGESTYLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsShowMaxStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERDETAILDATA_ISSHOWMAXSTAT_OFFSET))(nullptr);
		}

	};

