#pragma once
#include "../../unitysdk.h"

namespace NPA::Store { class NXPToyBillingTransactionError; }

#define NPA_STORE_NXPTOYBILLINGTRANSACTION_GETSTATEFROMVALUE_OFFSET UNITYSDK_OFFSET(0x9CC3150)
#define NPA_STORE_NXPTOYBILLINGTRANSACTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC31C0)
#define NPA_STORE_NXPTOYBILLINGTRANSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC34D0)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyBillingTransaction_TypeDefinitionIndex = 27236;

	class NXPToyBillingTransaction : public Il2CppObject
	{
	public:
		State* state; // 0x10
		Il2CppObject* products; // 0x18
		::System::String* stampId; // 0x20
		::System::String* stampToken; // 0x28
		::System::String* servicePayload; // 0x30
		Type* type; // 0x38
		::NPA::Store::NXPToyBillingTransactionError* error; // 0x40
		::System::String* stampUUID; // 0x48
		::System::String* appAccountToken; // 0x50

		State* getStateFromValue(::System::Int32 arg)
		{
			return (return (State*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGTRANSACTION_GETSTATEFROMVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGTRANSACTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGTRANSACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

