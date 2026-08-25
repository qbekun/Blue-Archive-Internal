#pragma once
#include "../unitysdk.h"

#define NPA_NXPGAME_SETCHANNELID_OFFSET UNITYSDK_OFFSET(0x9BD6840)
#define NPA_NXPGAME_SETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x9BD6990)
#define NPA_NXPGAME_SETNXCMDSERVERID_OFFSET UNITYSDK_OFFSET(0x9BD6AE0)
#define NPA_NXPGAME_SETWORLDID_OFFSET UNITYSDK_OFFSET(0x9BD6C30)
#define NPA_NXPGAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BD6D80)

namespace NPA
{
	inline static constexpr unsigned int NXPGame_TypeDefinitionIndex = 25746;

	class NXPGame : public Il2CppObject
	{
	public:
		::System::Void SetChannelID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGAME_SETCHANNELID_OFFSET))(str, nullptr);
		}

		::System::Void SetCharacterID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGAME_SETCHARACTERID_OFFSET))(str, nullptr);
		}

		::System::Void SetNXCMDServerID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGAME_SETNXCMDSERVERID_OFFSET))(str, nullptr);
		}

		::System::Void SetWorldID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGAME_SETWORLDID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGAME_.CTOR_OFFSET))(nullptr);
		}

	};
}

