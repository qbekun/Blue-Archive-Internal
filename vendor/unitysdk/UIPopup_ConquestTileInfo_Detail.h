#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace MX::Conquest { class ConquestTile; }

#define UIPOPUP_CONQUESTTILEINFO_DETAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x23719A0)
#define UIPOPUP_CONQUESTTILEINFO_DETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2371AD0)
#define UIPOPUP_CONQUESTTILEINFO_DETAIL_SETDATA_OFFSET UNITYSDK_OFFSET(0x236EC10)
#define UIPOPUP_CONQUESTTILEINFO_DETAIL_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2371AE0)

	inline static constexpr unsigned int UIPopup_ConquestTileInfo_Detail_TypeDefinitionIndex = 5088;

	class UIPopup_ConquestTileInfo_Detail : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UILabel* titleLabel; // 0xE0
		UILabel* stageNumberLabel; // 0xE8
		UILabel* stageNameLabel; // 0xF0
		::Il2CppArray<::System::Object*>* arrowIconEnabled; // 0xF8
		::Il2CppArray<::System::Object*>* arrowIconDisabled; // 0x100
		::Il2CppArray<::System::Object*>* levelInfos; // 0x108

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_DETAIL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_DETAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Conquest::ConquestTile* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_DETAIL_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_DETAIL_ONCLICKCANCEL_OFFSET))(nullptr);
		}

	};

