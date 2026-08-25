#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
class UIConquest;
namespace MX::Conquest { class ConquestTile; }
namespace MX::GameLogic::DBModel { class ConquestEchelonDB; }
class UIPopup_Conquest_Operation_CharEdit;
class UICharacterCard;
class CharacterObject;
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
class ConquestContentObject;

#define CONQUESTOPERATIONECHELONINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x2348AD0)
#define CONQUESTOPERATIONECHELONINFO__ONCLICKEDITECHELON_B__19_0_OFFSET UNITYSDK_OFFSET(0x2348C40)
#define CONQUESTOPERATIONECHELONINFO__SETDATA_B__20_0_OFFSET UNITYSDK_OFFSET(0x2348C70)
#define CONQUESTOPERATIONECHELONINFO_SETCARD_OFFSET UNITYSDK_OFFSET(0x2348CA0)
#define CONQUESTOPERATIONECHELONINFO_REFRESHCHARACTERCARDS_OFFSET UNITYSDK_OFFSET(0x2348D10)
#define CONQUESTOPERATIONECHELONINFO_SETCARDS_OFFSET UNITYSDK_OFFSET(0x2348D90)
#define CONQUESTOPERATIONECHELONINFO_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2349150)
#define CONQUESTOPERATIONECHELONINFO_GET_CONQUESTCONTENTOBJECT_OFFSET UNITYSDK_OFFSET(0x23491E0)
#define CONQUESTOPERATIONECHELONINFO_ONCLICKEDITECHELON_OFFSET UNITYSDK_OFFSET(0x2349260)
#define CONQUESTOPERATIONECHELONINFO_SETLOCALIZETEXT_OFFSET UNITYSDK_OFFSET(0x2349340)
#define CONQUESTOPERATIONECHELONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2349450)
#define CONQUESTOPERATIONECHELONINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2349460)

	inline static constexpr unsigned int ConquestOperationEchelonInfo_TypeDefinitionIndex = 5009;

	class ConquestOperationEchelonInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* mainCards; // 0xD8
		::Il2CppArray<::System::Object*>* supporterCards; // 0xE0
		MXButton* editEchelonButton; // 0xE8
		UILabel* editEchelonButtonActionLabel; // 0xF0
		UILabel* editEchelonButtonCountLabel; // 0xF8
		UILabel* editEchelonButtonActionLabelCenter; // 0x100
		::UnityEngine::GameObject* disabledEchelonButton; // 0x108
		UILabel* disabledEchelonButtonActionLabel; // 0x110
		UILabel* disabledEchelonButtonCountLabel; // 0x118
		UILabel* disabledEchelonButtonActionLabelCenter; // 0x120
		::UnityEngine::Transform* echelonChangeLock; // 0x128
		UILabel* echelonChangeLockLabel; // 0x130
		UIConquest* uiConquest; // 0x138
		::MX::Conquest::ConquestTile* tileData; // 0x140
		::MX::GameLogic::DBModel::ConquestEchelonDB* conquestEchelonDB; // 0x148

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONECHELONINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickEditEchelon_b__19_0(UIPopup_Conquest_Operation_CharEdit* arg)
		{
			((::System::Void(*)(UIPopup_Conquest_Operation_CharEdit*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONECHELONINFO__ONCLICKEDITECHELON_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetData_b__20_0(::MX::GameLogic::DBModel::ConquestEchelonDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestEchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONECHELONINFO__SETDATA_B__20_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetCard(UICharacterCard* arg, CharacterObject* arg2)
		{
			((::System::Void(*)(UICharacterCard*, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONECHELONINFO_SETCARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshCharacterCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONECHELONINFO_REFRESHCHARACTERCARDS_OFFSET))(nullptr);
		}

		::System::Void SetCards(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg2, ::System::Int32 arg3, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg4)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Int32, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONECHELONINFO_SETCARDS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONECHELONINFO_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		ConquestContentObject* get_conquestContentObject()
		{
			return ((ConquestContentObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONECHELONINFO_GET_CONQUESTCONTENTOBJECT_OFFSET))(nullptr);
		}

		::System::Void OnClickEditEchelon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONECHELONINFO_ONCLICKEDITECHELON_OFFSET))(nullptr);
		}

		::System::Void SetLocalizeText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONECHELONINFO_SETLOCALIZETEXT_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONECHELONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean SetData(::MX::Conquest::ConquestTile* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONECHELONINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

