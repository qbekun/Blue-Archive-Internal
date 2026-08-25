#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AreaHitIntervalProperty; }

#define MX_LOGIC_DATA_AREAHITINTERVALPROPERTY_EQUALS_OFFSET UNITYSDK_OFFSET(0x11FCE80)
#define MX_LOGIC_DATA_AREAHITINTERVALPROPERTY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11FCF20)
#define MX_LOGIC_DATA_AREAHITINTERVALPROPERTY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11FCF70)
#define MX_LOGIC_DATA_AREAHITINTERVALPROPERTY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11FCF90)
#define MX_LOGIC_DATA_AREAHITINTERVALPROPERTY_EQUALS_OFFSET UNITYSDK_OFFSET(0x11FCF00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AreaHitIntervalProperty_TypeDefinitionIndex = 13735;

	class AreaHitIntervalProperty : public Il2CppObject
	{
	public:
		::System::Int32 StartDelay; // 0x10
		::System::Int32 Count; // 0x14
		::System::Int32 Interval; // 0x18

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAHITINTERVALPROPERTY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAHITINTERVALPROPERTY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::AreaHitIntervalProperty* arg, ::MX::Logic::Data::AreaHitIntervalProperty* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::AreaHitIntervalProperty*, ::MX::Logic::Data::AreaHitIntervalProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAHITINTERVALPROPERTY_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::AreaHitIntervalProperty* arg, ::MX::Logic::Data::AreaHitIntervalProperty* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::AreaHitIntervalProperty*, ::MX::Logic::Data::AreaHitIntervalProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAHITINTERVALPROPERTY_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::AreaHitIntervalProperty* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::AreaHitIntervalProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREAHITINTERVALPROPERTY_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

