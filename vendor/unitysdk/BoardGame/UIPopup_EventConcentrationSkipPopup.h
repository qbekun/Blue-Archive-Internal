#pragma once
#include "../unitysdk.h"

class UILabel;
class UISmallParcelList;
class MXButton;
class UIAdmissionDisplay;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define BOARDGAME_UIPOPUP_EVENTCONCENTRATIONSKIPPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE09210)
#define BOARDGAME_UIPOPUP_EVENTCONCENTRATIONSKIPPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0xE13770)
#define BOARDGAME_UIPOPUP_EVENTCONCENTRATIONSKIPPOPUP_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0xE13790)
#define BOARDGAME_UIPOPUP_EVENTCONCENTRATIONSKIPPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xE13850)
#define BOARDGAME_UIPOPUP_EVENTCONCENTRATIONSKIPPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE13A70)

namespace BoardGame
{
	inline static constexpr unsigned int UIPopup_EventConcentrationSkipPopup_TypeDefinitionIndex = 10305;

	class UIPopup_EventConcentrationSkipPopup : public Il2CppObject
	{
	public:
		UILabel* descriptionLabel; // 0xD8
		UISmallParcelList* scrollView; // 0xE0
		MXButton* okButton; // 0xE8
		MXButton* cancelButton; // 0xF0
		UIAdmissionDisplay* admissionDisplay; // 0xF8
		Il2CppObject* confirmAction; // 0x100

		::System::Void Initialize(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Int32 arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIPOPUP_EVENTCONCENTRATIONSKIPPOPUP_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIPOPUP_EVENTCONCENTRATIONSKIPPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIPOPUP_EVENTCONCENTRATIONSKIPPOPUP_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIPOPUP_EVENTCONCENTRATIONSKIPPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIPOPUP_EVENTCONCENTRATIONSKIPPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

