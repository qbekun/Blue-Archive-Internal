#pragma once
#include "unitysdk.h"

namespace MX::Data { class VoiceRoomSubtitleKey; }
namespace FlatData { class CVCollectionType; }
namespace FlatData { class CVUnlockScenarioType; }
namespace FlatData { class Nation; }
namespace MX::Data::Excel { class CharacterVoiceExcel; }

#define CVCOLLECTIONINFO_GET_USEUNLOCKFAVORRANK_OFFSET UNITYSDK_OFFSET(0x2326340)
#define CVCOLLECTIONINFO_GET_USEUNLOCKEQUIPWEAPON_OFFSET UNITYSDK_OFFSET(0x232CB00)
#define CVCOLLECTIONINFO_GET_USEUNLOCKEVENTSEASON_OFFSET UNITYSDK_OFFSET(0x2326730)
#define CVCOLLECTIONINFO_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x2326310)
#define CVCOLLECTIONINFO_GET_ISUNLOCKEDFAVORRANK_OFFSET UNITYSDK_OFFSET(0x232CB10)
#define CVCOLLECTIONINFO_SET_ISUNLOCKEDFAVORRANK_OFFSET UNITYSDK_OFFSET(0x232CB20)
#define CVCOLLECTIONINFO_GET_ISUNLOCKEDEQUIPWEAPON_OFFSET UNITYSDK_OFFSET(0x232CB30)
#define CVCOLLECTIONINFO_SET_ISUNLOCKEDEQUIPWEAPON_OFFSET UNITYSDK_OFFSET(0x232CB40)
#define CVCOLLECTIONINFO_GET_ISUNLOCKEDEVENTSEASON_OFFSET UNITYSDK_OFFSET(0x232CB50)
#define CVCOLLECTIONINFO_SET_ISUNLOCKEDEVENTSEASON_OFFSET UNITYSDK_OFFSET(0x232CB60)
#define CVCOLLECTIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2329A60)
#define CVCOLLECTIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x232A070)
#define CVCOLLECTIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x232A690)
#define CVCOLLECTIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x232AC10)

	inline static constexpr unsigned int CVCollectionInfo_TypeDefinitionIndex = 4932;

	class CVCollectionInfo : public Il2CppObject
	{
	public:
		::System::Int64 OriginalCharacterId; // 0x10
		::MX::Data::VoiceRoomSubtitleKey* SubtitleKey; // 0x18
		::System::Int64 DisplayOrder; // 0x20
		::FlatData::CVCollectionType* CVCollectionType; // 0x28
		::System::String* LocalizeCVGroup; // 0x30
		::System::Int64 UnlockFavorRank; // 0x38
		::System::Boolean UnlockEquipWeapon; // 0x40
		::System::Int64 UnlockEventSeason; // 0x48
		::FlatData::CVUnlockScenarioType* UnlockScenarioType; // 0x50
		::System::Int64 ScenarioGroupId; // 0x58
		Il2CppObject* AudioClipPathList; // 0x60
		::System::Boolean _IsUnlockedFavorRank_k__BackingField; // 0x68
		::System::Boolean _IsUnlockedEquipWeapon_k__BackingField; // 0x69
		::System::Boolean _IsUnlockedEventSeason_k__BackingField; // 0x6A

		::System::Boolean get_UseUnlockFavorRank()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_GET_USEUNLOCKFAVORRANK_OFFSET))(nullptr);
		}

		::System::Boolean get_UseUnlockEquipWeapon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_GET_USEUNLOCKEQUIPWEAPON_OFFSET))(nullptr);
		}

		::System::Boolean get_UseUnlockEventSeason()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_GET_USEUNLOCKEVENTSEASON_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_GET_ISUNLOCKED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnlockedFavorRank()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_GET_ISUNLOCKEDFAVORRANK_OFFSET))(nullptr);
		}

		::System::Void set_IsUnlockedFavorRank(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_SET_ISUNLOCKEDFAVORRANK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUnlockedEquipWeapon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_GET_ISUNLOCKEDEQUIPWEAPON_OFFSET))(nullptr);
		}

		::System::Void set_IsUnlockedEquipWeapon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_SET_ISUNLOCKEDEQUIPWEAPON_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUnlockedEventSeason()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_GET_ISUNLOCKEDEVENTSEASON_OFFSET))(nullptr);
		}

		::System::Void set_IsUnlockedEventSeason(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_SET_ISUNLOCKEDEVENTSEASON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, ::FlatData::Nation* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::FlatData::Nation*, ::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, ::FlatData::Nation* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::FlatData::Nation*, ::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::MX::Data::Excel::CharacterVoiceExcel* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::MX::Data::Excel::CharacterVoiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + CVCOLLECTIONINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

