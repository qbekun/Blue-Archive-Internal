#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class Color; }
namespace MX::Data::Excel { class ConquestTileExcel; }
namespace MX::Conquest { class ConquestTile; }

#define UIPOPUP_CONQUESTRECOMMANDSCHOOL_AWAKE_OFFSET UNITYSDK_OFFSET(0x236A670)
#define UIPOPUP_CONQUESTRECOMMANDSCHOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x236A860)
#define UIPOPUP_CONQUESTRECOMMANDSCHOOL_SETBUFFDATA_OFFSET UNITYSDK_OFFSET(0x2369B50)
#define UIPOPUP_CONQUESTRECOMMANDSCHOOL_SETBONUSDATA_OFFSET UNITYSDK_OFFSET(0x236A890)
#define UIPOPUP_CONQUESTRECOMMANDSCHOOL_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x236AFF0)

	inline static constexpr unsigned int UIPopup_ConquestRecommandSchool_TypeDefinitionIndex = 5075;

	class UIPopup_ConquestRecommandSchool : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UILabel* stageNumber; // 0xE0
		UILabel* stageLabel; // 0xE8
		::Il2CppArray<::System::Object*>* buffValueOn; // 0xF0
		::Il2CppArray<::System::Object*>* buffValueOff; // 0xF8
		::Il2CppArray<::System::Object*>* schoolBuffLogoNames; // 0x100
		::UnityEngine::Color* onColor; // 0x108
		::UnityEngine::Color* offColor; // 0x118

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTRECOMMANDSCHOOL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTRECOMMANDSCHOOL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetBuffData(::MX::Data::Excel::ConquestTileExcel* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestTileExcel*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTRECOMMANDSCHOOL_SETBUFFDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetBonusData(::MX::Conquest::ConquestTile* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTRECOMMANDSCHOOL_SETBONUSDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTRECOMMANDSCHOOL_ONCLICKCANCEL_OFFSET))(nullptr);
		}

	};

