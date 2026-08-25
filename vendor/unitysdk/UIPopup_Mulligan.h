#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class Collider; }
class UIFormationInfo;
class UICharacterCard;
namespace FlatData { class EchelonExtensionType; }

#define UIPOPUP_MULLIGAN_REFRESHECHELONMULLIGANCARDINDEX_OFFSET UNITYSDK_OFFSET(0x2561380)
#define UIPOPUP_MULLIGAN_ONCLICKCARD_OFFSET UNITYSDK_OFFSET(0x25614E0)
#define UIPOPUP_MULLIGAN_ONOPENEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x25619D0)
#define UIPOPUP_MULLIGAN_GET_MAXSELECTCOUNT_OFFSET UNITYSDK_OFFSET(0x25619A0)
#define UIPOPUP_MULLIGAN_GET_EXTENTIONHANDSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x2561EC0)
#define UIPOPUP_MULLIGAN_ONCLICKSELECTEDCARD_OFFSET UNITYSDK_OFFSET(0x2561ED0)
#define UIPOPUP_MULLIGAN_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x25620B0)
#define UIPOPUP_MULLIGAN_AWAKE_OFFSET UNITYSDK_OFFSET(0x25620C0)
#define UIPOPUP_MULLIGAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2562430)
#define UIPOPUP_MULLIGAN_SET_EXTENTIONHANDSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x25624B0)
#define UIPOPUP_MULLIGAN_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x25624C0)
#define UIPOPUP_MULLIGAN_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2562550)
#define UIPOPUP_MULLIGAN_REFRESHSELECTEDCARDUI_OFFSET UNITYSDK_OFFSET(0x2561730)
#define UIPOPUP_MULLIGAN_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2562890)

	inline static constexpr unsigned int UIPopup_Mulligan_TypeDefinitionIndex = 6123;

	class UIPopup_Mulligan : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* strikerCards; // 0xD8
		::Il2CppArray<::System::Object*>* specialCards; // 0xE0
		Il2CppObject* selectedCards; // 0xE8
		Il2CppObject* selectedCardsEmpty; // 0xF0
		MXButton* OKButton; // 0xF8
		MXButton* cancelButton; // 0x100
		Il2CppObject* mulliganSelectedCharacterObjectList; // 0x108
		Il2CppObject* returnCallBack; // 0x110
		::UnityEngine::Collider* ScrollViewCollider; // 0x118
		::System::Single mulliganEffectStartTime; // 0x120
		::System::Int32 _ExtentionHandSlotCount_k__BackingField; // 0x124

		::System::Void RefreshEchelonMulliganCardIndex()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_REFRESHECHELONMULLIGANCARDINDEX_OFFSET))(nullptr);
		}

		::System::Void OnClickCard(UIFormationInfo* arg)
		{
			((::System::Void(*)(UIFormationInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_ONCLICKCARD_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpenedCallBack(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_ONOPENEDCALLBACK_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 get_maxSelectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_GET_MAXSELECTCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_ExtentionHandSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_GET_EXTENTIONHANDSLOTCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnClickSelectedCard(UICharacterCard* arg)
		{
			((::System::Void(*)(UICharacterCard*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_ONCLICKSELECTEDCARD_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonExtensionType* get_ExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ExtentionHandSlotCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_SET_EXTENTIONHANDSLOTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSelectedCardUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_REFRESHSELECTEDCARDUI_OFFSET))(nullptr);
		}

		::System::Void OnClickOK()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULLIGAN_ONCLICKOK_OFFSET))(nullptr);
		}

	};

