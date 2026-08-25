#pragma once
#include "unitysdk.h"

class UICafeCharacterFavor;
class UIWidget;
namespace UnityEngine { class GameObject; }
class TweenScale;
class CharacterInventoryObject;

#define UICAFECHARACTERCARD_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x227C530)
#define UICAFECHARACTERCARD_GET_ISNOTOWNEDBLOCKERACTIVE_OFFSET UNITYSDK_OFFSET(0x227C540)
#define UICAFECHARACTERCARD_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x227C560)
#define UICAFECHARACTERCARD_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x227C570)
#define UICAFECHARACTERCARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x227C5E0)
#define UICAFECHARACTERCARD_SETACTIVETWEEN_OFFSET UNITYSDK_OFFSET(0x227C630)
#define UICAFECHARACTERCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x227C6B0)
#define UICAFECHARACTERCARD_GET_CHARACTERINVENTORY_OFFSET UNITYSDK_OFFSET(0x227C6C0)
#define UICAFECHARACTERCARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x227C740)

	inline static constexpr unsigned int UICafeCharacterCard_TypeDefinitionIndex = 4648;

	class UICafeCharacterCard : public Il2CppObject
	{
	public:
		UICafeCharacterFavor* cafeCharacterFavor; // 0x18
		UIWidget* selectedWidget; // 0x20
		::UnityEngine::GameObject* notOwnedBlocker; // 0x28
		TweenScale* tweenScale; // 0x30
		::System::Int64 _CharacterId_k__BackingField; // 0x38

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARD_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNotOwnedBlockerActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARD_GET_ISNOTOWNEDBLOCKERACTIVE_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARD_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void SetSelected(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARD_SETSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetActiveTween(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARD_SETACTIVETWEEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARD_.CTOR_OFFSET))(nullptr);
		}

		CharacterInventoryObject* get_characterInventory()
		{
			return ((CharacterInventoryObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARD_GET_CHARACTERINVENTORY_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERCARD_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

