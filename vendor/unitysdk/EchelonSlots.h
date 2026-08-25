#pragma once
#include "unitysdk.h"

class CharacterObject;

#define ECHELONSLOTS_GET_ALLACTIVECHARACTERSSERVERID_OFFSET UNITYSDK_OFFSET(0x24DBA30)
#define ECHELONSLOTS_INIT_OFFSET UNITYSDK_OFFSET(0x24DBD70)
#define ECHELONSLOTS_GET_ACTIVEMAINCHARACTERSLOTS_OFFSET UNITYSDK_OFFSET(0x24DBE30)
#define ECHELONSLOTS_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x24DBF40)
#define ECHELONSLOTS_GET_SUPPORTCHARACTERS_OFFSET UNITYSDK_OFFSET(0x24DC100)
#define ECHELONSLOTS_GET_ACTIVEMAINCHARACTERS_OFFSET UNITYSDK_OFFSET(0x24DC210)
#define ECHELONSLOTS_GETSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x24D8E30)
#define ECHELONSLOTS_GET_ACTIVESUPPORTCHARACTERSLOTS_OFFSET UNITYSDK_OFFSET(0x24DC400)
#define ECHELONSLOTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DC510)
#define ECHELONSLOTS_GET_ISMAINSLOTSEMPTY_OFFSET UNITYSDK_OFFSET(0x24DC520)
#define ECHELONSLOTS_GET_ACTIVESUPPORTCHARACTERS_OFFSET UNITYSDK_OFFSET(0x24DC630)
#define ECHELONSLOTS_GET_MAINCHARACTERS_OFFSET UNITYSDK_OFFSET(0x24DC820)
#define ECHELONSLOTS_GET_ALLACTIVECHARACTERS_OFFSET UNITYSDK_OFFSET(0x24D88F0)
#define ECHELONSLOTS_GET_ALLCHARACTERSLOTS_OFFSET UNITYSDK_OFFSET(0x24DBCF0)

	inline static constexpr unsigned int EchelonSlots_TypeDefinitionIndex = 5983;

	class EchelonSlots : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* MainCharacterSlots; // 0x18
		::Il2CppArray<::System::Object*>* SupportCharacterSlots; // 0x20
		::Il2CppArray<::System::Object*>* allCharacterSlots; // 0x28

		Il2CppObject* get_AllActiveCharactersServerId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_GET_ALLACTIVECHARACTERSSERVERID_OFFSET))(nullptr);
		}

		::System::Void Init(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_INIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ActiveMainCharacterSlots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_GET_ACTIVEMAINCHARACTERSLOTS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_GET_ISEMPTY_OFFSET))(nullptr);
		}

		Il2CppObject* get_SupportCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_GET_SUPPORTCHARACTERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ActiveMainCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_GET_ACTIVEMAINCHARACTERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSlotType(CharacterObject* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_GETSLOTTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ActiveSupportCharacterSlots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_GET_ACTIVESUPPORTCHARACTERSLOTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMainSlotsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_GET_ISMAINSLOTSEMPTY_OFFSET))(nullptr);
		}

		Il2CppObject* get_ActiveSupportCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_GET_ACTIVESUPPORTCHARACTERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_MainCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_GET_MAINCHARACTERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AllActiveCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_GET_ALLACTIVECHARACTERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_AllCharacterSlots()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTS_GET_ALLCHARACTERSLOTS_OFFSET))(nullptr);
		}

	};

