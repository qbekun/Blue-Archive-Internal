#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }
class IntTabController;
namespace MX::GameLogic::DBModel { class ClearDeckKey; }
namespace MX::Data { class WorldRaidStageInfo; }

#define UIPOPUP_CLEARDECK_WORLDRAID_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x2763D70)
#define UIPOPUP_CLEARDECK_WORLDRAID_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x2763F40)
#define UIPOPUP_CLEARDECK_WORLDRAID_AWAKE_OFFSET UNITYSDK_OFFSET(0x2763F50)
#define UIPOPUP_CLEARDECK_WORLDRAID_SETDATA_OFFSET UNITYSDK_OFFSET(0x2764000)
#define UIPOPUP_CLEARDECK_WORLDRAID_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x2764660)
#define UIPOPUP_CLEARDECK_WORLDRAID_.CTOR_OFFSET UNITYSDK_OFFSET(0x2764670)
#define UIPOPUP_CLEARDECK_WORLDRAID__INITIALIZETAB_B__7_1_OFFSET UNITYSDK_OFFSET(0x2764680)
#define UIPOPUP_CLEARDECK_WORLDRAID_INITIALIZETAB_OFFSET UNITYSDK_OFFSET(0x2764050)

	inline static constexpr unsigned int UIPopup_ClearDeck_WorldRaid_TypeDefinitionIndex = 7311;

	class UIPopup_ClearDeck_WorldRaid : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x178
		IntTabController* difficultyTabController; // 0x180

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_WORLDRAID_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_WORLDRAID_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_WORLDRAID_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::ClearDeckKey* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClearDeckKey*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_WORLDRAID_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_WORLDRAID_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_WORLDRAID_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _InitializeTab_b__7_1(::MX::Data::WorldRaidStageInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::WorldRaidStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_WORLDRAID__INITIALIZETAB_B__7_1_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_WORLDRAID_INITIALIZETAB_OFFSET))(nullptr);
		}

	};

