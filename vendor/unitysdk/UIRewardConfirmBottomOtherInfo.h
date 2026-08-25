#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Data::Excel { class EquipmentExcel; }
namespace FlatData { class ParcelType; }
namespace FlatData { class Rarity; }

#define UIREWARDCONFIRMBOTTOMOTHERINFO_SETINFOTSS_OFFSET UNITYSDK_OFFSET(0x27B3B30)
#define UIREWARDCONFIRMBOTTOMOTHERINFO_SETINFOEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x27B3DE0)
#define UIREWARDCONFIRMBOTTOMOTHERINFO_SETRARITY_OFFSET UNITYSDK_OFFSET(0x27B3BD0)
#define UIREWARDCONFIRMBOTTOMOTHERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B3E80)

	inline static constexpr unsigned int UIRewardConfirmBottomOtherInfo_TypeDefinitionIndex = 7523;

	class UIRewardConfirmBottomOtherInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* New; // 0x18
		::UnityEngine::GameObject* rRightInfo; // 0x20
		::UnityEngine::GameObject* srRightInfo; // 0x28
		::UnityEngine::GameObject* ssrRightInfo; // 0x30
		UILabel* rNameLabel; // 0x38
		UILabel* srNameLabel; // 0x40
		UILabel* ssrNameLabel; // 0x48

		::System::Void SetInfoTSS(::MX::Data::Excel::CharacterExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMBOTTOMOTHERINFO_SETINFOTSS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetInfoEquipment(::MX::Data::Excel::EquipmentExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::EquipmentExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMBOTTOMOTHERINFO_SETINFOEQUIPMENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRarity(::FlatData::ParcelType* arg, ::FlatData::Rarity* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::FlatData::Rarity*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMBOTTOMOTHERINFO_SETRARITY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMBOTTOMOTHERINFO_.CTOR_OFFSET))(nullptr);
		}

	};

