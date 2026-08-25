#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcUserList; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcUser; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5A640)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5A780)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_ADD_OFFSET UNITYSDK_OFFSET(0xE5A6E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0xE57F20)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0xE61F70)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0xE61FC0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_ASSETS._MX.PROGRAM.SCRIPTS.NETWORK.IRC.IRCUSER_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE62020)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE620A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0xE62120)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_INSERT_OFFSET UNITYSDK_OFFSET(0xE62170)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0xE621D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xE62220)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xE62230)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0xE62240)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_SET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0xE62250)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0xE62260)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xE622B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xE62300)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE62360)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int IrcUserList_TypeDefinitionIndex = 10474;

	class IrcUserList : public Il2CppObject
	{
	public:
		Il2CppObject* _users; // 0x10
		::System::Int32 _Count_k__BackingField; // 0x18
		::System::Boolean _IsReadOnly_k__BackingField; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Assets::_MX::Program::Scripts::Network::IRC::IrcUserList* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUserList*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_COPYTO_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_Assets._MX.Program.Scripts.Network.IRC.IrcUser_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_ASSETS._MX.PROGRAM.SCRIPTS.NETWORK.IRC.IRCUSER_.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg)
		{
			return ((::System::Int32(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg2)
		{
			((::System::Void(*)(::System::Int32, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_INSERT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Remove(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void set_IsReadOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_SET_ISREADONLY_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* get_Item(::System::Int32 arg)
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg2)
		{
			((::System::Void(*)(::System::Int32, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_SET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSERLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

