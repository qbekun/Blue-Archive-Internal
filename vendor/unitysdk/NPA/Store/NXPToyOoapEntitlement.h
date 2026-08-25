#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYOOAPENTITLEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3740)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyOoapEntitlement_TypeDefinitionIndex = 27238;

	class NXPToyOoapEntitlement : public Il2CppObject
	{
	public:
		::System::String* stampId; // 0x10
		::System::String* stampToken; // 0x18
		Il2CppObject* products; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYOOAPENTITLEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

