#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class DummyEffectDAO; }
namespace MX::GameData::DAO::Battle { class HideCharacterEffectDAO; }
namespace FlatData { class LogicEffectCategory; }

#define MX_LOGIC_DATA_DUMMYEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x12394E0)
#define MX_LOGIC_DATA_DUMMYEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x12394F0)
#define MX_LOGIC_DATA_DUMMYEFFECTVALUE_GET_STACKSAMEEFFECTAPPLIED_OFFSET UNITYSDK_OFFSET(0x1239500)
#define MX_LOGIC_DATA_DUMMYEFFECTVALUE_GET_STACKSAMEEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1239510)
#define MX_LOGIC_DATA_DUMMYEFFECTVALUE_SET_STACKSAMEEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1239520)
#define MX_LOGIC_DATA_DUMMYEFFECTVALUE_GET_EXPIREOLDIFSTACKCOUNTOVER_OFFSET UNITYSDK_OFFSET(0x1239530)
#define MX_LOGIC_DATA_DUMMYEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1239540)
#define MX_LOGIC_DATA_DUMMYEFFECTVALUE_SETSTACKSAMEEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1239550)
#define MX_LOGIC_DATA_DUMMYEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1239560)
#define MX_LOGIC_DATA_DUMMYEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12396A0)
#define MX_LOGIC_DATA_DUMMYEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12397C0)
#define MX_LOGIC_DATA_DUMMYEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1239960)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DummyEffectValue_TypeDefinitionIndex = 13883;

	class DummyEffectValue : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x48
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x4C
		::System::Boolean _StackSameEffectApplied_k__BackingField; // 0x50
		::System::Int32 _StackSameEffectCount_k__BackingField; // 0x54
		::System::Boolean _ExpireOldIfStackCountOver_k__BackingField; // 0x58
		::System::Boolean _IsDispellable_k__BackingField; // 0x59

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_StackSameEffectApplied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTVALUE_GET_STACKSAMEEFFECTAPPLIED_OFFSET))(nullptr);
		}

		::System::Int32 get_StackSameEffectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTVALUE_GET_STACKSAMEEFFECTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_StackSameEffectCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTVALUE_SET_STACKSAMEEFFECTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ExpireOldIfStackCountOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTVALUE_GET_EXPIREOLDIFSTACKCOUNTOVER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void SetStackSameEffectCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTVALUE_SETSTACKSAMEEFFECTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::DummyEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DummyEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::HideCharacterEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::HideCharacterEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg2, ::System::Int32 arg3, ::System::String* str, ::System::String* str2, ::FlatData::LogicEffectCategory* arg4, ::System::Int32 arg5, ::System::UInt32 arg6)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Int32, ::System::String*, ::System::String*, ::FlatData::LogicEffectCategory*, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTVALUE_.CTOR_OFFSET))(arg, arg2, arg3, str, str2, arg4, arg5, arg6, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg2, ::FlatData::EndCondition* arg3, ::System::Int32 arg4, ::System::String* str, ::System::String* str2, ::FlatData::LogicEffectCategory* arg5, ::System::Int32 arg6, ::System::UInt32 arg7)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::FlatData::EndCondition*, ::System::Int32, ::System::String*, ::System::String*, ::FlatData::LogicEffectCategory*, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, str, str2, arg5, arg6, arg7, nullptr);
		}

	};
}

