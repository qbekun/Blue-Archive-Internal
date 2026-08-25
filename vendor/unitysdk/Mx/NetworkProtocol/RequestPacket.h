#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_REQUESTPACKET_GET_HASH_OFFSET UNITYSDK_OFFSET(0xF11890)
#define MX_NETWORKPROTOCOL_REQUESTPACKET_SET_RESENDABLE_OFFSET UNITYSDK_OFFSET(0xF118A0)
#define MX_NETWORKPROTOCOL_REQUESTPACKET_GET_MODIFIEDSERVERTIME__DEBUGONLY_OFFSET UNITYSDK_OFFSET(0xF118B0)
#define MX_NETWORKPROTOCOL_REQUESTPACKET_GET_ISTEST_OFFSET UNITYSDK_OFFSET(0xF118C0)
#define MX_NETWORKPROTOCOL_REQUESTPACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0EA80)
#define MX_NETWORKPROTOCOL_REQUESTPACKET_SET_MODIFIEDSERVERTIME__DEBUGONLY_OFFSET UNITYSDK_OFFSET(0xF118D0)
#define MX_NETWORKPROTOCOL_REQUESTPACKET_GET_RESENDABLE_OFFSET UNITYSDK_OFFSET(0xF118E0)
#define MX_NETWORKPROTOCOL_REQUESTPACKET_SET_HASH_OFFSET UNITYSDK_OFFSET(0xF118F0)
#define MX_NETWORKPROTOCOL_REQUESTPACKET_SHOULDSERIALIZEMODIFIEDSERVERTIME__DEBUGONLY_OFFSET UNITYSDK_OFFSET(0xF11900)
#define MX_NETWORKPROTOCOL_REQUESTPACKET_SET_ISTEST_OFFSET UNITYSDK_OFFSET(0xF11930)
#define MX_NETWORKPROTOCOL_REQUESTPACKET_CREATEHASH_OFFSET UNITYSDK_OFFSET(0xF11940)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RequestPacket_TypeDefinitionIndex = 11324;

	class RequestPacket : public ::TriInspector::TriDropdownItem
	{
	public:
		::System::Boolean _Resendable_k__BackingField; // 0x18
		::System::Int64 _Hash_k__BackingField; // 0x20
		::System::Boolean _IsTest_k__BackingField; // 0x28
		Il2CppObject* _ModifiedServerTime__DebugOnly_k__BackingField; // 0x30
		::System::Int32 _counter; // 0x0

		::System::Int64 get_Hash()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_REQUESTPACKET_GET_HASH_OFFSET))(nullptr);
		}

		::System::Void set_Resendable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_REQUESTPACKET_SET_RESENDABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ModifiedServerTime__DebugOnly()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_REQUESTPACKET_GET_MODIFIEDSERVERTIME__DEBUGONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_REQUESTPACKET_GET_ISTEST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_REQUESTPACKET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ModifiedServerTime__DebugOnly(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_REQUESTPACKET_SET_MODIFIEDSERVERTIME__DEBUGONLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Resendable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_REQUESTPACKET_GET_RESENDABLE_OFFSET))(nullptr);
		}

		::System::Void set_Hash(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_REQUESTPACKET_SET_HASH_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeModifiedServerTime__DebugOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_REQUESTPACKET_SHOULDSERIALIZEMODIFIEDSERVERTIME__DEBUGONLY_OFFSET))(nullptr);
		}

		::System::Void set_IsTest(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_REQUESTPACKET_SET_ISTEST_OFFSET))(arg, nullptr);
		}

		::System::Int64 CreateHash(::MX::NetworkProtocol::Protocol* arg)
		{
			return ((::System::Int64(*)(::MX::NetworkProtocol::Protocol*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_REQUESTPACKET_CREATEHASH_OFFSET))(arg, nullptr);
		}

	};
}

