#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Data { class DebuffDescription; }
namespace MX::Logic::BattleEntities { class DebuffEventArgs; }

#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x11DB530)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x11DB540)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_LOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x11DB550)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_LOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x11DB560)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x11DB570)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x11DB580)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_LOGICEFFECTLEVEL_OFFSET UNITYSDK_OFFSET(0x11DB590)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_LOGICEFFECTLEVEL_OFFSET UNITYSDK_OFFSET(0x11DB5A0)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x11DB5B0)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x11DB5C0)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x11DB5D0)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x11DB5E0)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_ISSUEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x11DB5F0)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_ISSUEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x11DB600)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_ISVALID_OFFSET UNITYSDK_OFFSET(0x11DB610)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DB640)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DB6A0)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DB710)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DB770)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11DB830)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11DB8B0)
#define MX_LOGIC_DATA_DEBUFFDESCRIPTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11DB920)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DebuffDescription_TypeDefinitionIndex = 13426;

	class DebuffDescription : public Il2CppObject
	{
	public:
		::System::Int64 _AccountId_k__BackingField; // 0x10
		::System::String* _LogicEffectTemplateId_k__BackingField; // 0x18
		::System::String* _LogicEffectGroupId_k__BackingField; // 0x20
		::System::Int32 _LogicEffectLevel_k__BackingField; // 0x28
		::System::Int32 _DurationFrame_k__BackingField; // 0x2C
		::MX::Logic::BattleEntities::SkillSlot* _SkillSlot_k__BackingField; // 0x30
		::System::Int32 _IssuedTimestamp_k__BackingField; // 0x34

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::String* get_LogicEffectTemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_LOGICEFFECTTEMPLATEID_OFFSET))(nullptr);
		}

		::System::Void set_LogicEffectTemplateId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_LOGICEFFECTTEMPLATEID_OFFSET))(str, nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_LogicEffectGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_LOGICEFFECTGROUPID_OFFSET))(str, nullptr);
		}

		::System::Int32 get_LogicEffectLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_LOGICEFFECTLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_LogicEffectLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_LOGICEFFECTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Void set_DurationFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_DURATIONFRAME_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_SkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_SKILLSLOT_OFFSET))(nullptr);
		}

		::System::Void set_SkillSlot(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_SKILLSLOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IssuedTimestamp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_GET_ISSUEDTIMESTAMP_OFFSET))(nullptr);
		}

		::System::Void set_IssuedTimestamp(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_SET_ISSUEDTIMESTAMP_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::DebuffDescription* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::Data::DebuffDescription*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::Logic::BattleEntities::DebuffEventArgs* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Int64, ::MX::Logic::BattleEntities::DebuffEventArgs*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::DebuffDescription* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::DebuffDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::DebuffDescription* arg, ::MX::Logic::Data::DebuffDescription* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::DebuffDescription*, ::MX::Logic::Data::DebuffDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::DebuffDescription* arg, ::MX::Logic::Data::DebuffDescription* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::DebuffDescription*, ::MX::Logic::Data::DebuffDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEBUFFDESCRIPTION_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

