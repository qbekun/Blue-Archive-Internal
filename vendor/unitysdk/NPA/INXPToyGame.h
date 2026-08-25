#pragma once
#include "../unitysdk.h"

#define NPA_INXPTOYGAME_SETCHANNELID_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPTOYGAME_SETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPTOYGAME_SETNXCMDSERVERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPTOYGAME_SETWORLDID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INXPToyGame_TypeDefinitionIndex = 25598;

	class INXPToyGame : public Il2CppObject
	{
	public:
		::System::Void SetChannelID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPTOYGAME_SETCHANNELID_OFFSET))(str, nullptr);
		}

		::System::Void SetCharacterID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPTOYGAME_SETCHARACTERID_OFFSET))(str, nullptr);
		}

		::System::Void SetNXCMDServerID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPTOYGAME_SETNXCMDSERVERID_OFFSET))(str, nullptr);
		}

		::System::Void SetWorldID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPTOYGAME_SETWORLDID_OFFSET))(str, nullptr);
		}

	};
}

