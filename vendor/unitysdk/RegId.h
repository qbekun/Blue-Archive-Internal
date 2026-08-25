#pragma once
#include "unitysdk.h"

#define REGID_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x9F8BC70)
#define REGID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F8BC80)
#define REGID_ISVALID_OFFSET UNITYSDK_OFFSET(0x9F8BC90)
#define REGID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9F80C80)
#define REGID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9F8BCA0)
#define REGID_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F8BCB0)

	inline static constexpr unsigned int RegId_TypeDefinitionIndex = 33801;

	class RegId : public Il2CppObject
	{
	public:
		::System::Int32 id; // 0x10

		::System::Void Invalidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REGID_INVALIDATE_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + REGID_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REGID_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(RegId* arg, RegId* arg)
		{
			return (return (::System::Boolean(*)(RegId*, RegId*, ::PVOID))((::PBYTE)hIl2Cpp + REGID_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(RegId* arg, RegId* arg)
		{
			return (return (::System::Boolean(*)(RegId*, RegId*, ::PVOID))((::PBYTE)hIl2Cpp + REGID_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REGID_EQUALS_OFFSET))(arg, nullptr);
		}

	};

