#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_UNITS_UNITSATTRIBUTE_GET_RULE_OFFSET UNITYSDK_OFFSET(0x4C1D10)
#define ANIMANCER_UNITS_UNITSATTRIBUTE_SET_RULE_OFFSET UNITYSDK_OFFSET(0x4C1D20)
#define ANIMANCER_UNITS_UNITSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1B20)
#define ANIMANCER_UNITS_UNITSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1B80)
#define ANIMANCER_UNITS_UNITSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1D30)

namespace Animancer::Units
{
	inline static constexpr unsigned int UnitsAttribute_TypeDefinitionIndex = 35261;

	class UnitsAttribute : public Il2CppObject
	{
	public:
		Value* _Rule_k__BackingField; // 0x18

		Value* get_Rule()
		{
			return (return (Value*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_UNITSATTRIBUTE_GET_RULE_OFFSET))(nullptr);
		}

		::System::Void set_Rule(Value* arg)
		{
			((::System::Void(*)(Value*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_UNITSATTRIBUTE_SET_RULE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_UNITSATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_UNITSATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_UNITSATTRIBUTE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

