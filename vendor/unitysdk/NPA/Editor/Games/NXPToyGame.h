#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Games { class NXPToyGame; }

#define NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGENXCMDSERVERID_OFFSET UNITYSDK_OFFSET(0x9C3D4B0)
#define NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGENXCMDSERVERID_OFFSET UNITYSDK_OFFSET(0x9C3D550)
#define NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGECHARACTERID_OFFSET UNITYSDK_OFFSET(0x9C3D5F0)
#define NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGECHARACTERID_OFFSET UNITYSDK_OFFSET(0x9C3D690)
#define NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGECHANNELID_OFFSET UNITYSDK_OFFSET(0x9C3D730)
#define NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGECHANNELID_OFFSET UNITYSDK_OFFSET(0x9C3D7D0)
#define NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGEWORLDID_OFFSET UNITYSDK_OFFSET(0x9C3D870)
#define NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGEWORLDID_OFFSET UNITYSDK_OFFSET(0x9C3D910)
#define NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGENXCMDSERVERID_OFFSET UNITYSDK_OFFSET(0x9C38990)
#define NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGENXCMDSERVERID_OFFSET UNITYSDK_OFFSET(0x9C3D9B0)
#define NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGECHARACTERID_OFFSET UNITYSDK_OFFSET(0x9C38AA0)
#define NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGECHARACTERID_OFFSET UNITYSDK_OFFSET(0x9C3DA50)
#define NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGECHANNELID_OFFSET UNITYSDK_OFFSET(0x9C38BB0)
#define NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGECHANNELID_OFFSET UNITYSDK_OFFSET(0x9C3DAF0)
#define NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGEWORLDID_OFFSET UNITYSDK_OFFSET(0x9C38CC0)
#define NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGEWORLDID_OFFSET UNITYSDK_OFFSET(0x9C3DB90)
#define NPA_EDITOR_GAMES_NXPTOYGAME_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C38770)
#define NPA_EDITOR_GAMES_NXPTOYGAME_SETCHANNELID_OFFSET UNITYSDK_OFFSET(0x9C3DC40)
#define NPA_EDITOR_GAMES_NXPTOYGAME_SETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x9C3DD30)
#define NPA_EDITOR_GAMES_NXPTOYGAME_SETNXCMDSERVERID_OFFSET UNITYSDK_OFFSET(0x9C3DE20)
#define NPA_EDITOR_GAMES_NXPTOYGAME_SETWORLDID_OFFSET UNITYSDK_OFFSET(0x9C3DF10)
#define NPA_EDITOR_GAMES_NXPTOYGAME_GETNXCMDSERVERID_OFFSET UNITYSDK_OFFSET(0x9C3E000)
#define NPA_EDITOR_GAMES_NXPTOYGAME_GETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x9C3E010)
#define NPA_EDITOR_GAMES_NXPTOYGAME_GETCHANNELID_OFFSET UNITYSDK_OFFSET(0x9C3E020)
#define NPA_EDITOR_GAMES_NXPTOYGAME_GETWORLDID_OFFSET UNITYSDK_OFFSET(0x9C3E030)
#define NPA_EDITOR_GAMES_NXPTOYGAME_CLEARCACHEDATA_OFFSET UNITYSDK_OFFSET(0x9C3E040)
#define NPA_EDITOR_GAMES_NXPTOYGAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3DC30)
#define NPA_EDITOR_GAMES_NXPTOYGAME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C3E0A0)

namespace NPA::Editor::Games
{
	inline static constexpr unsigned int NXPToyGame_TypeDefinitionIndex = 26812;

	class NXPToyGame : public Il2CppObject
	{
	public:
		::System::Object* syncObject; // 0x0
		::NPA::Editor::Games::NXPToyGame* instance; // 0x8
		::System::String* nxCommandServerID; // 0x10
		::System::String* characterID; // 0x18
		::System::String* channelID; // 0x20
		::System::String* worldID; // 0x28
		Il2CppObject* onChangeNXCMDServerID; // 0x30
		Il2CppObject* onChangeCharacterID; // 0x38
		Il2CppObject* onChangeChannelID; // 0x40
		Il2CppObject* onChangeWorldID; // 0x48

		::System::Void add_onChangeNXCMDServerID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGENXCMDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onChangeNXCMDServerID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGENXCMDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void add_onChangeCharacterID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGECHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onChangeCharacterID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGECHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void add_onChangeChannelID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGECHANNELID_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onChangeChannelID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGECHANNELID_OFFSET))(arg, nullptr);
		}

		::System::Void add_onChangeWorldID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGEWORLDID_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onChangeWorldID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGEWORLDID_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnChangeNXCMDServerID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGENXCMDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnChangeNXCMDServerID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGENXCMDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnChangeCharacterID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGECHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnChangeCharacterID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGECHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnChangeChannelID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGECHANNELID_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnChangeChannelID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGECHANNELID_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnChangeWorldID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_ADD_ONCHANGEWORLDID_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnChangeWorldID(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_REMOVE_ONCHANGEWORLDID_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Games::NXPToyGame* get_Instance()
		{
			return (return (::NPA::Editor::Games::NXPToyGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void SetChannelID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_SETCHANNELID_OFFSET))(str, nullptr);
		}

		::System::Void SetCharacterID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_SETCHARACTERID_OFFSET))(str, nullptr);
		}

		::System::Void SetNXCMDServerID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_SETNXCMDSERVERID_OFFSET))(str, nullptr);
		}

		::System::Void SetWorldID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_SETWORLDID_OFFSET))(str, nullptr);
		}

		::System::String* GetNXCMDServerID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_GETNXCMDSERVERID_OFFSET))(nullptr);
		}

		::System::String* GetCharacterID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_GETCHARACTERID_OFFSET))(nullptr);
		}

		::System::String* GetChannelID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_GETCHANNELID_OFFSET))(nullptr);
		}

		::System::String* GetWorldID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_GETWORLDID_OFFSET))(nullptr);
		}

		::System::Void ClearCacheData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_CLEARCACHEDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_NXPTOYGAME_.CCTOR_OFFSET))(nullptr);
		}

	};
}

