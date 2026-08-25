#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SkillLogicData; }

#define MX_LOGIC_DATA_SKILLLOGICDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x11FA020)
#define MX_LOGIC_DATA_SKILLLOGICDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11FA050)
#define MX_LOGIC_DATA_SKILLLOGICDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x11FA070)
#define MX_LOGIC_DATA_SKILLLOGICDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x11FA130)
#define MX_LOGIC_DATA_SKILLLOGICDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11FA180)
#define MX_LOGIC_DATA_SKILLLOGICDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11FA1E0)
#define MX_LOGIC_DATA_SKILLLOGICDATA_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x11FA240)
#define MX_LOGIC_DATA_SKILLLOGICDATA_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x11FA280)
#define MX_LOGIC_DATA_SKILLLOGICDATA_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x11FA2C0)
#define MX_LOGIC_DATA_SKILLLOGICDATA_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x11FA300)
#define MX_LOGIC_DATA_SKILLLOGICDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x11F7010)
#define MX_LOGIC_DATA_SKILLLOGICDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11FA340)
#define MX_LOGIC_DATA_SKILLLOGICDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F6480)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillLogicData_TypeDefinitionIndex = 13664;

	class SkillLogicData : public Il2CppObject
	{
	public:
		::System::String* SkillDataKey; // 0x10

		::System::Int32 CompareTo(::MX::Logic::Data::SkillLogicData* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::Data::SkillLogicData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::SkillLogicData* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SkillLogicData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::SkillLogicData* arg, ::MX::Logic::Data::SkillLogicData* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SkillLogicData*, ::MX::Logic::Data::SkillLogicData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::SkillLogicData* arg, ::MX::Logic::Data::SkillLogicData* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SkillLogicData*, ::MX::Logic::Data::SkillLogicData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThan(::MX::Logic::Data::SkillLogicData* arg, ::MX::Logic::Data::SkillLogicData* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SkillLogicData*, ::MX::Logic::Data::SkillLogicData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::MX::Logic::Data::SkillLogicData* arg, ::MX::Logic::Data::SkillLogicData* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SkillLogicData*, ::MX::Logic::Data::SkillLogicData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_OP_LESSTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(::MX::Logic::Data::SkillLogicData* arg, ::MX::Logic::Data::SkillLogicData* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SkillLogicData*, ::MX::Logic::Data::SkillLogicData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::MX::Logic::Data::SkillLogicData* arg, ::MX::Logic::Data::SkillLogicData* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SkillLogicData*, ::MX::Logic::Data::SkillLogicData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Validate(::System::String&* arg)
		{
			return ((::System::Boolean(*)(::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_VALIDATE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLOGICDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

