#pragma once
#include "unitysdk.h"

#define UICHARACTERSELECTCLICKCHARACTERMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x266D1E0)
#define UICHARACTERSELECTCLICKCHARACTERMESSAGE_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x266D200)
#define UICHARACTERSELECTCLICKCHARACTERMESSAGE_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x266D210)

	inline static constexpr unsigned int UICharacterSelectClickCharacterMessage_TypeDefinitionIndex = 6691;

	class UICharacterSelectClickCharacterMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTCLICKCHARACTERMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTCLICKCHARACTERMESSAGE_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTCLICKCHARACTERMESSAGE_GET_CHARACTERID_OFFSET))(nullptr);
		}

	};

