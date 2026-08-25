#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class RaidDeckInfo;

#define RAIDDECKLISTSCROLLVIEWELEMENT_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x2785830)
#define RAIDDECKLISTSCROLLVIEWELEMENT_SET_TRYNUMBER_OFFSET UNITYSDK_OFFSET(0x2785840)
#define RAIDDECKLISTSCROLLVIEWELEMENT_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x2785850)
#define RAIDDECKLISTSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2785860)
#define RAIDDECKLISTSCROLLVIEWELEMENT_GET_TRYNUMBER_OFFSET UNITYSDK_OFFSET(0x27858A0)
#define RAIDDECKLISTSCROLLVIEWELEMENT_ONCLICKOPENPRESET_OFFSET UNITYSDK_OFFSET(0x27858B0)
#define RAIDDECKLISTSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2785940)
#define RAIDDECKLISTSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2785AC0)

	inline static constexpr unsigned int RaidDeckListScrollViewElement_TypeDefinitionIndex = 7397;

	class RaidDeckListScrollViewElement : public ::System::Xml::Serialization::UnreferencedObjectEventArgs
	{
	public:
		UILabel* isFinalRound; // 0x28
		UILabel* round; // 0x30
		::Il2CppArray<::System::Object*>* mainCards; // 0x38
		::Il2CppArray<::System::Object*>* supporterCards; // 0x40
		MXButton* openPreset; // 0x48
		::System::Int64 _AccountId_k__BackingField; // 0x50
		::System::Int64 _TryNumber_k__BackingField; // 0x58

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDDECKLISTSCROLLVIEWELEMENT_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TryNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDDECKLISTSCROLLVIEWELEMENT_SET_TRYNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDECKLISTSCROLLVIEWELEMENT_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDECKLISTSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TryNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDECKLISTSCROLLVIEWELEMENT_GET_TRYNUMBER_OFFSET))(nullptr);
		}

		::System::Void OnClickOpenPreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDECKLISTSCROLLVIEWELEMENT_ONCLICKOPENPRESET_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDECKLISTSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(RaidDeckInfo* arg)
		{
			((::System::Void(*)(RaidDeckInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDDECKLISTSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

