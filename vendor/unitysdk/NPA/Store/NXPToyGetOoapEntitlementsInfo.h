#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYGETOOAPENTITLEMENTSINFO_GET_FILTERMARKET_OFFSET UNITYSDK_OFFSET(0x9CC2E70)
#define NPA_STORE_NXPTOYGETOOAPENTITLEMENTSINFO_SET_FILTERMARKET_OFFSET UNITYSDK_OFFSET(0x9CC2E80)
#define NPA_STORE_NXPTOYGETOOAPENTITLEMENTSINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC2E90)
#define NPA_STORE_NXPTOYGETOOAPENTITLEMENTSINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC2EA0)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyGetOoapEntitlementsInfo_TypeDefinitionIndex = 27226;

	class NXPToyGetOoapEntitlementsInfo : public Il2CppObject
	{
	public:
		::System::Boolean filterMarket; // 0x10

		::System::Boolean get_FilterMarket()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYGETOOAPENTITLEMENTSINFO_GET_FILTERMARKET_OFFSET))(nullptr);
		}

		::System::Void set_FilterMarket(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYGETOOAPENTITLEMENTSINFO_SET_FILTERMARKET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYGETOOAPENTITLEMENTSINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYGETOOAPENTITLEMENTSINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

