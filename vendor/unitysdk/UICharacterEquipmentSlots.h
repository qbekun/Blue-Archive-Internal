#pragma once
#include "unitysdk.h"

class CharacterObject;

#define UICHARACTEREQUIPMENTSLOTS_SETDATA_OFFSET UNITYSDK_OFFSET(0x2313440)
#define UICHARACTEREQUIPMENTSLOTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x2314650)
#define UICHARACTEREQUIPMENTSLOTS_SETMYCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x23135C0)
#define UICHARACTEREQUIPMENTSLOTS_ENABLEINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x2314660)
#define UICHARACTEREQUIPMENTSLOTS_INITSLOTS_OFFSET UNITYSDK_OFFSET(0x2313490)
#define UICHARACTEREQUIPMENTSLOTS_SETASSISTCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x2313DE0)
#define UICHARACTEREQUIPMENTSLOTS_ISCANBOUNDEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x23146E0)

	inline static constexpr unsigned int UICharacterEquipmentSlots_TypeDefinitionIndex = 4901;

	class UICharacterEquipmentSlots : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* equipCardSlots; // 0x18
		::Il2CppArray<::System::Object*>* dots; // 0x20
		::Il2CppArray<::System::Object*>* TooltipButtons; // 0x28
		::System::Boolean showTooltipOnLocked; // 0x30
		::System::Boolean showRedDotAndPlayDim; // 0x31

		::System::Void SetData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTEREQUIPMENTSLOTS_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTEREQUIPMENTSLOTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMyCharacterData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTEREQUIPMENTSLOTS_SETMYCHARACTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void EnableInteractions(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTEREQUIPMENTSLOTS_ENABLEINTERACTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void InitSlots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTEREQUIPMENTSLOTS_INITSLOTS_OFFSET))(nullptr);
		}

		::System::Void SetAssistCharacterData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTEREQUIPMENTSLOTS_SETASSISTCHARACTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCanBoundEquipment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTEREQUIPMENTSLOTS_ISCANBOUNDEQUIPMENT_OFFSET))(nullptr);
		}

	};

