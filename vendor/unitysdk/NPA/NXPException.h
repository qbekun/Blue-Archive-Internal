#pragma once
#include "../unitysdk.h"

#define NPA_NXPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBD110)
#define NPA_NXPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBD170)
#define NPA_NXPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBD1D0)

namespace NPA
{
	inline static constexpr unsigned int NXPException_TypeDefinitionIndex = 25528;

	class NXPException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

