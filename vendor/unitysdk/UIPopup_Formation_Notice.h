#pragma once
#include "unitysdk.h"

class UIPopup_Formation_Notice_Import;
class UIPopup_Formation_Notice_Overwrite;
class UIPopup_Formation_Notice_EditName;
class UIPopup_Formation_Notice_Apply;
class EchelonObject;
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }
namespace FlatData { class EchelonExtensionType; }

#define UIPOPUP_FORMATION_NOTICE_INITIALIZEIMPORT_OFFSET UNITYSDK_OFFSET(0x25691E0)
#define UIPOPUP_FORMATION_NOTICE_INITIALIZEOVERWRITE_OFFSET UNITYSDK_OFFSET(0x2569540)
#define UIPOPUP_FORMATION_NOTICE_INITIALIZEOVERWRITE_OFFSET UNITYSDK_OFFSET(0x25696F0)
#define UIPOPUP_FORMATION_NOTICE_INITIALIZEAPPLY_OFFSET UNITYSDK_OFFSET(0x25693A0)
#define UIPOPUP_FORMATION_NOTICE_INITIALIZEEDITNAME_OFFSET UNITYSDK_OFFSET(0x25672C0)
#define UIPOPUP_FORMATION_NOTICE_CLOSEALLGAMEOBJBECT_OFFSET UNITYSDK_OFFSET(0x25697F0)
#define UIPOPUP_FORMATION_NOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x256A4D0)

	inline static constexpr unsigned int UIPopup_Formation_Notice_TypeDefinitionIndex = 6139;

	class UIPopup_Formation_Notice : public Il2CppObject
	{
	public:
		UIPopup_Formation_Notice_Import* importPrefab; // 0xD8
		UIPopup_Formation_Notice_Overwrite* overwritePrefab; // 0xE0
		UIPopup_Formation_Notice_EditName* editNamePrefab; // 0xE8
		UIPopup_Formation_Notice_Apply* applyPrefab; // 0xF0

		::System::Void InitializeImport(EchelonObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(EchelonObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_INITIALIZEIMPORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitializeOverwrite(::MX::GameLogic::DBModel::EchelonPresetDB* arg, ::MX::GameLogic::DBModel::RaidTeamSettingDB* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_INITIALIZEOVERWRITE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitializeOverwrite(::MX::GameLogic::DBModel::EchelonPresetDB* arg, ::MX::GameLogic::DBModel::EchelonPresetDB* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::MX::GameLogic::DBModel::EchelonPresetDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_INITIALIZEOVERWRITE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitializeApply(EchelonObject* arg, ::MX::GameLogic::DBModel::EchelonPresetDB* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(EchelonObject*, ::MX::GameLogic::DBModel::EchelonPresetDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_INITIALIZEAPPLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitializeEditName(::System::Boolean arg, ::System::Int32 arg2, ::FlatData::EchelonExtensionType* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::FlatData::EchelonExtensionType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_INITIALIZEEDITNAME_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CloseAllGameObjbect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_CLOSEALLGAMEOBJBECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_.CTOR_OFFSET))(nullptr);
		}

	};

