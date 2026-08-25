#pragma once
#include "unitysdk.h"

class AutoUseRuleDAO;
namespace MX::Logic::Skills { class AutoUseConditionType; }
namespace MX::Logic::Data { class ModifierCheckTarget; }

#define AUTOUSERULEDAO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x21532C0)
#define AUTOUSERULEDAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x21534C0)
#define AUTOUSERULEDAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2153570)
#define AUTOUSERULEDAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x21535B0)
#define AUTOUSERULEDAO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x2153610)
#define AUTOUSERULEDAO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x21533E0)
#define AUTOUSERULEDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x21536A0)
#define AUTOUSERULEDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x2153710)
#define AUTOUSERULEDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2153AE0)
#define AUTOUSERULEDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x21542D0)

	inline static constexpr unsigned int AutoUseRuleDAO_TypeDefinitionIndex = 3970;

	class AutoUseRuleDAO : public Il2CppObject
	{
	public:
		AutoUseRuleDAO* Empty; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* ConditionType; // 0x10
		::System::String* ConditionArgument; // 0x18
		::MX::Logic::Data::ModifierCheckTarget* ConditionCheckTarget; // 0x20
		::System::Int64 CoolTimeNotTrigger; // 0x28
		::System::Int32 TryCount; // 0x30
		::System::Boolean ResetTryCountUseSkill; // 0x34
		::System::Int32 TriggerRate; // 0x38
		::System::Int32 MaxTriggerCount; // 0x3C
		::System::Boolean CheckMountStatus; // 0x40
		Il2CppObject* TryToUseSkillModifiers; // 0x48

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAO_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(AutoUseRuleDAO* arg)
		{
			return ((::System::Boolean(*)(AutoUseRuleDAO*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(AutoUseRuleDAO* arg, AutoUseRuleDAO* arg2)
		{
			return ((::System::Boolean(*)(AutoUseRuleDAO*, AutoUseRuleDAO*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAO_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(AutoUseRuleDAO* arg, AutoUseRuleDAO* arg2)
		{
			return ((::System::Boolean(*)(AutoUseRuleDAO*, AutoUseRuleDAO*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAO_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, AutoUseRuleDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, AutoUseRuleDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, AutoUseRuleDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, AutoUseRuleDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOUSERULEDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

