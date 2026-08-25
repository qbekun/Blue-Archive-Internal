#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class MultiFloorRaidSeasonManageExcel; }
namespace FlatData { class RaidSeasonType; }
class MultiFloorRaidSectionEntity;
class MultiFloorRaidFloorEntity;

#define MULTIFLOORRAIDTOWER_GET_SEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x26A0BE0)
#define MULTIFLOORRAIDTOWER_SET_SEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x26A0BF0)
#define MULTIFLOORRAIDTOWER_GET_SEASONSTATE_OFFSET UNITYSDK_OFFSET(0x26A0C10)
#define MULTIFLOORRAIDTOWER_SET_SEASONSTATE_OFFSET UNITYSDK_OFFSET(0x26A0C20)
#define MULTIFLOORRAIDTOWER_GET_BESTRECORDFLOOR_OFFSET UNITYSDK_OFFSET(0x26A0C30)
#define MULTIFLOORRAIDTOWER_SET_BESTRECORDFLOOR_OFFSET UNITYSDK_OFFSET(0x26A0C40)
#define MULTIFLOORRAIDTOWER_GET_BOSSNAME_OFFSET UNITYSDK_OFFSET(0x26A0C50)
#define MULTIFLOORRAIDTOWER_SET_BOSSNAME_OFFSET UNITYSDK_OFFSET(0x26A0C60)
#define MULTIFLOORRAIDTOWER_GET_MINIMAPPATH_OFFSET UNITYSDK_OFFSET(0x26A0C70)
#define MULTIFLOORRAIDTOWER_SET_MINIMAPPATH_OFFSET UNITYSDK_OFFSET(0x26A0C80)
#define MULTIFLOORRAIDTOWER_GET_LOBBYPORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x26A0C90)
#define MULTIFLOORRAIDTOWER_SET_LOBBYPORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x26A0CA0)
#define MULTIFLOORRAIDTOWER_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x26A0CB0)
#define MULTIFLOORRAIDTOWER_SET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x26A0CC0)
#define MULTIFLOORRAIDTOWER_REFRESH_OFFSET UNITYSDK_OFFSET(0x26A0CD0)
#define MULTIFLOORRAIDTOWER_TRYGETALLSEASONGROUNDIDS_OFFSET UNITYSDK_OFFSET(0x26A1660)
#define MULTIFLOORRAIDTOWER_GETALLSECTIONINDICES_OFFSET UNITYSDK_OFFSET(0x26A1850)
#define MULTIFLOORRAIDTOWER_GETALLHIGHESTFLOORNUMBERS_OFFSET UNITYSDK_OFFSET(0x26A18A0)
#define MULTIFLOORRAIDTOWER_GETSECTIONBYINDEX_OFFSET UNITYSDK_OFFSET(0x26A19B0)
#define MULTIFLOORRAIDTOWER_GETSECTIONBYFLOOR_OFFSET UNITYSDK_OFFSET(0x26A1A20)
#define MULTIFLOORRAIDTOWER_GETSECTIONFORREWARDDISPLAY_OFFSET UNITYSDK_OFFSET(0x26A1B10)
#define MULTIFLOORRAIDTOWER_GETHIGHESTOPENEDSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x26A1C50)
#define MULTIFLOORRAIDTOWER_GETFLOORENTITY_OFFSET UNITYSDK_OFFSET(0x26A1CF0)
#define MULTIFLOORRAIDTOWER_GETSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x26A1D20)
#define MULTIFLOORRAIDTOWER_GETSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x26A1E00)
#define MULTIFLOORRAIDTOWER_ISUNLOCKEDFLOOR_OFFSET UNITYSDK_OFFSET(0x26A1E20)
#define MULTIFLOORRAIDTOWER_FREEZEINPUT_OFFSET UNITYSDK_OFFSET(0x26A1E90)
#define MULTIFLOORRAIDTOWER_RELEASEINPUT_OFFSET UNITYSDK_OFFSET(0x26A1F30)
#define MULTIFLOORRAIDTOWER_FORCERELEASEINPUT_OFFSET UNITYSDK_OFFSET(0x26A1FD0)
#define MULTIFLOORRAIDTOWER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A2080)

	inline static constexpr unsigned int MultiFloorRaidTower_TypeDefinitionIndex = 6843;

	class MultiFloorRaidTower : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* _SeasonExcel_k__BackingField; // 0x10
		::FlatData::RaidSeasonType* _SeasonState_k__BackingField; // 0x20
		::System::Int32 _BestRecordFloor_k__BackingField; // 0x24
		::System::String* _BossName_k__BackingField; // 0x28
		::System::String* _MinimapPath_k__BackingField; // 0x30
		::System::String* _LobbyPortraitPath_k__BackingField; // 0x38
		Il2CppObject* _Sections_k__BackingField; // 0x40
		::System::Int32 inputLockCount; // 0x48

		::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* get_SeasonExcel()
		{
			return ((::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GET_SEASONEXCEL_OFFSET))(nullptr);
		}

		::System::Void set_SeasonExcel(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_SET_SEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::RaidSeasonType* get_SeasonState()
		{
			return ((::FlatData::RaidSeasonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GET_SEASONSTATE_OFFSET))(nullptr);
		}

		::System::Void set_SeasonState(::FlatData::RaidSeasonType* arg)
		{
			((::System::Void(*)(::FlatData::RaidSeasonType*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_SET_SEASONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BestRecordFloor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GET_BESTRECORDFLOOR_OFFSET))(nullptr);
		}

		::System::Void set_BestRecordFloor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_SET_BESTRECORDFLOOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_BossName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GET_BOSSNAME_OFFSET))(nullptr);
		}

		::System::Void set_BossName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_SET_BOSSNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_MinimapPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GET_MINIMAPPATH_OFFSET))(nullptr);
		}

		::System::Void set_MinimapPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_SET_MINIMAPPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_LobbyPortraitPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GET_LOBBYPORTRAITPATH_OFFSET))(nullptr);
		}

		::System::Void set_LobbyPortraitPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_SET_LOBBYPORTRAITPATH_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Sections()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GET_SECTIONS_OFFSET))(nullptr);
		}

		::System::Void set_Sections(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_SET_SECTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAllSeasonGroundIds(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_TRYGETALLSEASONGROUNDIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllSectionIndices()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GETALLSECTIONINDICES_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllHighestFloorNumbers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GETALLHIGHESTFLOORNUMBERS_OFFSET))(nullptr);
		}

		MultiFloorRaidSectionEntity* GetSectionByIndex(::System::Int32 arg)
		{
			return ((MultiFloorRaidSectionEntity*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GETSECTIONBYINDEX_OFFSET))(arg, nullptr);
		}

		MultiFloorRaidSectionEntity* GetSectionByFloor(::System::Int32 arg)
		{
			return ((MultiFloorRaidSectionEntity*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GETSECTIONBYFLOOR_OFFSET))(arg, nullptr);
		}

		MultiFloorRaidSectionEntity* GetSectionForRewardDisplay(::System::Int32 arg)
		{
			return ((MultiFloorRaidSectionEntity*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GETSECTIONFORREWARDDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHighestOpenedSectionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GETHIGHESTOPENEDSECTIONINDEX_OFFSET))(nullptr);
		}

		MultiFloorRaidFloorEntity* GetFloorEntity(::System::Int32 arg)
		{
			return ((MultiFloorRaidFloorEntity*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GETFLOORENTITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSectionIndex(MultiFloorRaidSectionEntity* arg)
		{
			return ((::System::Int32(*)(MultiFloorRaidSectionEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GETSECTIONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSectionIndex(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_GETSECTIONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUnlockedFloor(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_ISUNLOCKEDFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Void FreezeInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_FREEZEINPUT_OFFSET))(nullptr);
		}

		::System::Void ReleaseInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_RELEASEINPUT_OFFSET))(nullptr);
		}

		::System::Void ForceReleaseInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_FORCERELEASEINPUT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDTOWER_.CTOR_OFFSET))(nullptr);
		}

	};

