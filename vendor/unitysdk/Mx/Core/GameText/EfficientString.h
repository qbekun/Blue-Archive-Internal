#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_GAMETEXT_EFFICIENTSTRING_GETLOCALPATH_OFFSET UNITYSDK_OFFSET(0x1040530)
#define MX_CORE_GAMETEXT_EFFICIENTSTRING_GETHOST_OFFSET UNITYSDK_OFFSET(0x10408B0)

namespace MX::Core::GameText
{
	inline static constexpr unsigned int EfficientString_TypeDefinitionIndex = 12861;

	class EfficientString : public Il2CppObject
	{
	public:
		::System::String* GetLocalPath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_EFFICIENTSTRING_GETLOCALPATH_OFFSET))(str, nullptr);
		}

		::System::String* GetHost(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_EFFICIENTSTRING_GETHOST_OFFSET))(str, nullptr);
		}

	};
}

