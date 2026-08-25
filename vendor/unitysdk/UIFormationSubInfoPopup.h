#pragma once
#include "unitysdk.h"

class MXButton;
class IntTabController;
class UIFormationLeaderPopup;
class UIFormation_SupportInfoPopup;
class UIFormationLinkInfoPopup;
class UIEchelonInfo;

#define UIFORMATIONSUBINFOPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2545B10)
#define UIFORMATIONSUBINFOPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2545D00)
#define UIFORMATIONSUBINFOPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2545E50)
#define UIFORMATIONSUBINFOPOPUP_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x2546130)
#define UIFORMATIONSUBINFOPOPUP_ONCHANGEDSUBINFOTAB_OFFSET UNITYSDK_OFFSET(0x2546160)
#define UIFORMATIONSUBINFOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2547230)

	inline static constexpr unsigned int UIFormationSubInfoPopup_TypeDefinitionIndex = 6072;

	class UIFormationSubInfoPopup : public Il2CppObject
	{
	public:
		::System::Int32 leaderTabKey; // 0x0
		::System::Int32 supportTabKey; // 0x0
		::System::Int32 linkTabKey; // 0x0
		MXButton* backButton; // 0x18
		IntTabController* subInfoTab; // 0x20
		UIFormationLeaderPopup* leaderPopup; // 0x28
		UIFormation_SupportInfoPopup* supportInfoPopup; // 0x30
		UIFormationLinkInfoPopup* linkInfoPopup; // 0x38
		::System::Int64 currentLeaderID; // 0x40
		Il2CppObject* currentCharacters; // 0x48
		Il2CppObject* currentSupports; // 0x50

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONSUBINFOPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONSUBINFOPOPUP_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(UIEchelonInfo* arg)
		{
			((::System::Void(*)(UIEchelonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONSUBINFOPOPUP_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONSUBINFOPOPUP_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void OnChangedSubInfoTab(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONSUBINFOPOPUP_ONCHANGEDSUBINFOTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONSUBINFOPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};

