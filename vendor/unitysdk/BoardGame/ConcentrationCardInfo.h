#pragma once
#include "../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentConcentrationCardDB; }

#define BOARDGAME_CONCENTRATIONCARDINFO_SET_BACKIMAGEADDRESSKEY_OFFSET UNITYSDK_OFFSET(0xE07030)
#define BOARDGAME_CONCENTRATIONCARDINFO_SET_CARDDB_OFFSET UNITYSDK_OFFSET(0xE07040)
#define BOARDGAME_CONCENTRATIONCARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE07050)
#define BOARDGAME_CONCENTRATIONCARDINFO_SET_FRONTIMAGEADDRESSKEY_OFFSET UNITYSDK_OFFSET(0xE070A0)
#define BOARDGAME_CONCENTRATIONCARDINFO_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xE070B0)
#define BOARDGAME_CONCENTRATIONCARDINFO_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xE070C0)
#define BOARDGAME_CONCENTRATIONCARDINFO_GET_FRONTIMAGEADDRESSKEY_OFFSET UNITYSDK_OFFSET(0xE070D0)
#define BOARDGAME_CONCENTRATIONCARDINFO_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xE070E0)
#define BOARDGAME_CONCENTRATIONCARDINFO_GET_BACKIMAGEADDRESSKEY_OFFSET UNITYSDK_OFFSET(0xE070F0)
#define BOARDGAME_CONCENTRATIONCARDINFO_GET_ISMATCHED_OFFSET UNITYSDK_OFFSET(0xE07100)
#define BOARDGAME_CONCENTRATIONCARDINFO_GET_CARDDB_OFFSET UNITYSDK_OFFSET(0xE07120)

namespace BoardGame
{
	inline static constexpr unsigned int ConcentrationCardInfo_TypeDefinitionIndex = 10256;

	class ConcentrationCardInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentConcentrationCardDB* _CardDB_k__BackingField; // 0x10
		::System::Boolean _IsSelected_k__BackingField; // 0x18
		::System::String* _FrontImageAddressKey_k__BackingField; // 0x20
		::System::String* _BackImageAddressKey_k__BackingField; // 0x28

		::System::Void set_BackImageAddressKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONCARDINFO_SET_BACKIMAGEADDRESSKEY_OFFSET))(str, nullptr);
		}

		::System::Void set_CardDB(::MX::GameLogic::DBModel::EventContentConcentrationCardDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentConcentrationCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONCARDINFO_SET_CARDDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::EventContentConcentrationCardDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentConcentrationCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONCARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_FrontImageAddressKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONCARDINFO_SET_FRONTIMAGEADDRESSKEY_OFFSET))(str, nullptr);
		}

		::System::Void set_IsSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONCARDINFO_SET_ISSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONCARDINFO_SETSELECTED_OFFSET))(arg, nullptr);
		}

		::System::String* get_FrontImageAddressKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONCARDINFO_GET_FRONTIMAGEADDRESSKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONCARDINFO_GET_ISSELECTED_OFFSET))(nullptr);
		}

		::System::String* get_BackImageAddressKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONCARDINFO_GET_BACKIMAGEADDRESSKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMatched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONCARDINFO_GET_ISMATCHED_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentConcentrationCardDB* get_CardDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentConcentrationCardDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONCARDINFO_GET_CARDDB_OFFSET))(nullptr);
		}

	};
}

