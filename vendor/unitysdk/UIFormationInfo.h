#pragma once
#include "unitysdk.h"

class UICharacterInfo;
namespace UnityEngine { class GameObject; }
class UISprite;
class MXButton;
class UILabel;
class CharacterObject;
namespace UnityEngine { class BoxCollider; }

#define UIFORMATIONINFO_GET_CHRACTEROBJECT_OFFSET UNITYSDK_OFFSET(0x25420A0)
#define UIFORMATIONINFO_CLEARCHARACTER_OFFSET UNITYSDK_OFFSET(0x25420B0)
#define UIFORMATIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x25422F0)
#define UIFORMATIONINFO_SETASSISTDIM_OFFSET UNITYSDK_OFFSET(0x2542300)
#define UIFORMATIONINFO_SETCHARACTER_OFFSET UNITYSDK_OFFSET(0x2542380)
#define UIFORMATIONINFO_SET_CHRACTEROBJECT_OFFSET UNITYSDK_OFFSET(0x2542920)
#define UIFORMATIONINFO_ONCLICKCARD_OFFSET UNITYSDK_OFFSET(0x2542930)
#define UIFORMATIONINFO_SETSELECT_OFFSET UNITYSDK_OFFSET(0x2542950)
#define UIFORMATIONINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x2542A90)
#define UIFORMATIONINFO_RESET_OFFSET UNITYSDK_OFFSET(0x2542C40)

	inline static constexpr unsigned int UIFormationInfo_TypeDefinitionIndex = 6065;

	class UIFormationInfo : public Il2CppObject
	{
	public:
		UICharacterInfo* CharacterInfo; // 0x18
		::UnityEngine::GameObject* CardObject; // 0x20
		::UnityEngine::GameObject* Empty; // 0x28
		::UnityEngine::GameObject* Main; // 0x30
		::UnityEngine::GameObject* Surpport; // 0x38
		UISprite* SelectSprite; // 0x40
		UISprite* Leader; // 0x48
		UISprite* Assist; // 0x50
		::UnityEngine::GameObject* AssistDim; // 0x58
		MXButton* Button; // 0x60
		UILabel* WeaponType; // 0x68
		UILabel* BulletType; // 0x70
		UILabel* ArmorType; // 0x78
		CharacterObject* _ChracterObject_k__BackingField; // 0x80
		Il2CppObject* OnClickCardCB; // 0x88
		::UnityEngine::BoxCollider* boxCollider; // 0x90

		CharacterObject* get_ChracterObject()
		{
			return ((CharacterObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONINFO_GET_CHRACTEROBJECT_OFFSET))(nullptr);
		}

		::System::Void ClearCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONINFO_CLEARCHARACTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetAssistDim(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONINFO_SETASSISTDIM_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharacter(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONINFO_SETCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChracterObject(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONINFO_SET_CHRACTEROBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONINFO_ONCLICKCARD_OFFSET))(nullptr);
		}

		::System::Void SetSelect(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONINFO_SETSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONINFO_RESET_OFFSET))(nullptr);
		}

	};

