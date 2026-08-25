#pragma once
#include "../../unitysdk.h"

namespace NPA::Support { class NXPToyMediaType; }

#define NPA_SUPPORT_NXPTOYMEDIATYPEEXTENSIONS_GETMIMETYPE_OFFSET UNITYSDK_OFFSET(0x9CC2740)

namespace NPA::Support
{
	inline static constexpr unsigned int NXPToyMediaTypeExtensions_TypeDefinitionIndex = 27220;

	class NXPToyMediaTypeExtensions : public Il2CppObject
	{
	public:
		::System::String* GetMimeType(::NPA::Support::NXPToyMediaType* arg)
		{
			return (return (::System::String*(*)(::NPA::Support::NXPToyMediaType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SUPPORT_NXPTOYMEDIATYPEEXTENSIONS_GETMIMETYPE_OFFSET))(arg, nullptr);
		}

	};
}

