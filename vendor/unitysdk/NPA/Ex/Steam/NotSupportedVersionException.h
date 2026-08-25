#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_STEAM_NOTSUPPORTEDVERSIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1FF50)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NotSupportedVersionException_TypeDefinitionIndex = 26011;

	class NotSupportedVersionException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NOTSUPPORTEDVERSIONEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

