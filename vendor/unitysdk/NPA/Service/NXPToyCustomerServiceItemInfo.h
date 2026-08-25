#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPTOYCUSTOMERSERVICEITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC57D0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyCustomerServiceItemInfo_TypeDefinitionIndex = 27301;

	class NXPToyCustomerServiceItemInfo : public Il2CppObject
	{
	public:
		::System::String* code; // 0x10
		::System::String* title; // 0x18
		::System::String* type; // 0x20
		::System::String* meta; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYCUSTOMERSERVICEITEMINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

