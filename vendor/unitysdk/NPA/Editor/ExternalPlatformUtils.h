#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_EXTERNALPLATFORMUTILS_CONVERTTOMARKETTYPE_OFFSET UNITYSDK_OFFSET(0x9D44A20)
#define NPA_EDITOR_EXTERNALPLATFORMUTILS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D44B40)

namespace NPA::Editor
{
	inline static constexpr unsigned int ExternalPlatformUtils_TypeDefinitionIndex = 26144;

	class ExternalPlatformUtils : public Il2CppObject
	{
	public:
		::System::String* ConvertToMarketType(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORMUTILS_CONVERTTOMARKETTYPE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORMUTILS_.CTOR_OFFSET))(nullptr);
		}

	};
}

