#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class CardStatus; }
namespace MX::Logic::Battles::Summary { class CardSummary; }

#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13AA5E0)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13AA5F0)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_ID_OFFSET UNITYSDK_OFFSET(0x13AA6C0)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_ID_OFFSET UNITYSDK_OFFSET(0x13AA6D0)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_USEDFRAME_OFFSET UNITYSDK_OFFSET(0x13AA6E0)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_USEDFRAME_OFFSET UNITYSDK_OFFSET(0x13AA6F0)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_NOTUSED_OFFSET UNITYSDK_OFFSET(0x13AA700)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_TRIGGEREDLOG_OFFSET UNITYSDK_OFFSET(0x13AA710)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_TRIGGEREDLOG_OFFSET UNITYSDK_OFFSET(0x13AA720)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SHOULDSERIALIZETRIGGEREDLOG_OFFSET UNITYSDK_OFFSET(0x13AA730)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x13AA750)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x13AA760)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_HEAL_OFFSET UNITYSDK_OFFSET(0x13AA770)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_HEAL_OFFSET UNITYSDK_OFFSET(0x13AA780)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_CARDSTATUS_OFFSET UNITYSDK_OFFSET(0x13AA790)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_CARDSTATUS_OFFSET UNITYSDK_OFFSET(0x13AA7A0)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_APPLIEDHEROS_OFFSET UNITYSDK_OFFSET(0x13AA7B0)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_APPLIEDHEROS_OFFSET UNITYSDK_OFFSET(0x13AA7C0)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SHOULDSERIALIZEAPPLIEDHEROS_OFFSET UNITYSDK_OFFSET(0x13AA7D0)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_EQUALS_OFFSET UNITYSDK_OFFSET(0x13AA870)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int CardSummary_TypeDefinitionIndex = 14466;

	class CardSummary : public Il2CppObject
	{
	public:
		::System::Int32 _Id_k__BackingField; // 0x10
		::System::Int32 _UsedFrame_k__BackingField; // 0x14
		::System::String* _TriggeredLog_k__BackingField; // 0x18
		::System::Int64 _Damage_k__BackingField; // 0x20
		::System::Int64 _Heal_k__BackingField; // 0x28
		::MX::Logic::Battles::Summary::CardStatus* _CardStatus_k__BackingField; // 0x30
		Il2CppObject* _AppliedHeros_k__BackingField; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UsedFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_USEDFRAME_OFFSET))(nullptr);
		}

		::System::Void set_UsedFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_USEDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NotUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_NOTUSED_OFFSET))(nullptr);
		}

		::System::String* get_TriggeredLog()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_TRIGGEREDLOG_OFFSET))(nullptr);
		}

		::System::Void set_TriggeredLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_TRIGGEREDLOG_OFFSET))(str, nullptr);
		}

		::System::Boolean ShouldSerializeTriggeredLog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SHOULDSERIALIZETRIGGEREDLOG_OFFSET))(nullptr);
		}

		::System::Int64 get_Damage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_DAMAGE_OFFSET))(nullptr);
		}

		::System::Void set_Damage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_DAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Heal()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_HEAL_OFFSET))(nullptr);
		}

		::System::Void set_Heal(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_HEAL_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::CardStatus* get_CardStatus()
		{
			return ((::MX::Logic::Battles::Summary::CardStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_CARDSTATUS_OFFSET))(nullptr);
		}

		::System::Void set_CardStatus(::MX::Logic::Battles::Summary::CardStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::CardStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_CARDSTATUS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AppliedHeros()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_GET_APPLIEDHEROS_OFFSET))(nullptr);
		}

		::System::Void set_AppliedHeros(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SET_APPLIEDHEROS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeAppliedHeros()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_SHOULDSERIALIZEAPPLIEDHEROS_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::Summary::CardSummary* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::CardSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARY_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

