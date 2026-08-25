#pragma once
#include "../../unitysdk.h"

#define NPA_SECURITY_NXPTOYNGSINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC62F0)
#define NPA_SECURITY_NXPTOYNGSINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC6340)
#define NPA_SECURITY_NXPTOYNGSINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC63C0)

namespace NPA::Security
{
	inline static constexpr unsigned int NXPToyNgsInfo_TypeDefinitionIndex = 27327;

	class NXPToyNgsInfo : public Il2CppObject
	{
	public:
		::System::Boolean isOK; // 0x10
		::System::Int32 code; // 0x14
		::System::String* message; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SECURITY_NXPTOYNGSINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SECURITY_NXPTOYNGSINFO_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SECURITY_NXPTOYNGSINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

