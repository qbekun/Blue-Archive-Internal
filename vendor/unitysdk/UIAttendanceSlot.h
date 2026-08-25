#pragma once
#include "unitysdk.h"

class UINonEquipmentCard;
class UIEquipmentCard;
class UICharacterCard;
class CompleteMark;
class UISprite;
class UILabel;
namespace FlatData { class ParcelType; }
namespace UnityEngine { class GameObject; }

#define UIATTENDANCESLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2215BE0)
#define UIATTENDANCESLOT_SETEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x2215C40)
#define UIATTENDANCESLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2215CD0)
#define UIATTENDANCESLOT_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x2215CE0)
#define UIATTENDANCESLOT_SETNONEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x2215F50)
#define UIATTENDANCESLOT_SET_OFFSET UNITYSDK_OFFSET(0x2215FF0)
#define UIATTENDANCESLOT_SETCHARACTER_OFFSET UNITYSDK_OFFSET(0x2216280)
#define UIATTENDANCESLOT_SETHALFALPHA_OFFSET UNITYSDK_OFFSET(0x2215EB0)

	inline static constexpr unsigned int UIAttendanceSlot_TypeDefinitionIndex = 4383;

	class UIAttendanceSlot : public Il2CppObject
	{
	public:
		UINonEquipmentCard* NonEquipmentCard; // 0x18
		UIEquipmentCard* EquipmentCard; // 0x20
		UICharacterCard* CharacterCard; // 0x28
		CompleteMark* Complete; // 0x30
		UISprite* PointSprite; // 0x38
		UILabel* CountLabel; // 0x40
		UILabel* DayLabel; // 0x48
		::System::Single CompleteAlpha; // 0x50
		::FlatData::ParcelType* parcelType; // 0x54
		::System::Int64 uniqueId; // 0x58
		::System::Int64 count; // 0x60

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetEquipment()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_SETEQUIPMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_ONCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void SetNonEquipment()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_SETNONEQUIPMENT_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::FlatData::ParcelType* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_SET_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_SETCHARACTER_OFFSET))(nullptr);
		}

		::System::Void SetHalfAlpha(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_SETHALFALPHA_OFFSET))(arg, nullptr);
		}

	};

