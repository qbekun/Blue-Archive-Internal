#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_GENERICCONDITION_PROPERTYREFERENCETO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x108E7D0)
#define MX_LOGIC_GENERICCONDITION_PROPERTYREFERENCETO_.CTOR_OFFSET UNITYSDK_OFFSET(0x108E8C0)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int PropertyReferenceTo_TypeDefinitionIndex = 12958;

	class PropertyReferenceTo : public Il2CppObject
	{
	public:
		::System::Void Initialize(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_PROPERTYREFERENCETO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_PROPERTYREFERENCETO_.CTOR_OFFSET))(nullptr);
		}

	};
}

