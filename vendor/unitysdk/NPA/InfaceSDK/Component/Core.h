#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_CORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFE640)
#define NPA_INFACESDK_COMPONENT_CORE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9CFE820)
#define NPA_INFACESDK_COMPONENT_CORE_GETVERSION_OFFSET UNITYSDK_OFFSET(0x9CFE980)
#define NPA_INFACESDK_COMPONENT_CORE_COREINITIALIZE_OFFSET UNITYSDK_OFFSET(0x9CFEB50)
#define NPA_INFACESDK_COMPONENT_CORE_PREFINALIZE_OFFSET UNITYSDK_OFFSET(0x9CFEE60)
#define NPA_INFACESDK_COMPONENT_CORE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9CFEFA0)
#define NPA_INFACESDK_COMPONENT_CORE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9CFF120)
#define NPA_INFACESDK_COMPONENT_CORE_SETCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9CFF280)
#define NPA_INFACESDK_COMPONENT_CORE_SETLOCALE_OFFSET UNITYSDK_OFFSET(0x9CFF3C0)
#define NPA_INFACESDK_COMPONENT_CORE_SETOS_OFFSET UNITYSDK_OFFSET(0x9CFF500)
#define NPA_INFACESDK_COMPONENT_CORE_SETOE_OFFSET UNITYSDK_OFFSET(0x9CFF640)
#define NPA_INFACESDK_COMPONENT_CORE_SETUUID_OFFSET UNITYSDK_OFFSET(0x9CFF780)
#define NPA_INFACESDK_COMPONENT_CORE_SETUUID2_OFFSET UNITYSDK_OFFSET(0x9CFF8C0)
#define NPA_INFACESDK_COMPONENT_CORE_GETHWID_OFFSET UNITYSDK_OFFSET(0x9CFFA00)
#define NPA_INFACESDK_COMPONENT_CORE_GETNXHWID_OFFSET UNITYSDK_OFFSET(0x9CFFBF0)
#define NPA_INFACESDK_COMPONENT_CORE_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x9CFFDE0)
#define NPA_INFACESDK_COMPONENT_CORE_GENERATEUUID_OFFSET UNITYSDK_OFFSET(0x9CFFFD0)
#define NPA_INFACESDK_COMPONENT_CORE_GETOBFUSCATEDGUID_OFFSET UNITYSDK_OFFSET(0x9D001C0)
#define NPA_INFACESDK_COMPONENT_CORE_USEREMOTELOG_OFFSET UNITYSDK_OFFSET(0x9D003B0)
#define NPA_INFACESDK_COMPONENT_CORE_ADDLOG_OFFSET UNITYSDK_OFFSET(0x9D00580)
#define NPA_INFACESDK_COMPONENT_CORE_SETPRIVATELOGPRINTENABLED_OFFSET UNITYSDK_OFFSET(0x9D006C0)
#define NPA_INFACESDK_COMPONENT_CORE_SETUSERDATASAVEENABLED_OFFSET UNITYSDK_OFFSET(0x9D00870)
#define NPA_INFACESDK_COMPONENT_CORE_HASCONNECTEDNETWORKADAPTER_OFFSET UNITYSDK_OFFSET(0x9D00970)
#define NPA_INFACESDK_COMPONENT_CORE_LAUNCHURL_OFFSET UNITYSDK_OFFSET(0x9D00A70)
#define NPA_INFACESDK_COMPONENT_CORE_BINDONLOG_OFFSET UNITYSDK_OFFSET(0x9D00BB0)
#define NPA_INFACESDK_COMPONENT_CORE_BINDONRAWLOG_OFFSET UNITYSDK_OFFSET(0x9D00CB0)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Core_TypeDefinitionIndex = 25842;

	class Core : public Il2CppObject
	{
	public:
		::System::Int32 DefaultBufferSize; // 0x0

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_.CTOR_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_DISPOSE_OFFSET))(nullptr);
		}

		::System::String* GetVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_GETVERSION_OFFSET))(nullptr);
		}

		::System::Void CoreInitialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_COREINITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void PreFinalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_PREFINALIZE_OFFSET))(nullptr);
		}

		::System::String* GetValue(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_GETVALUE_OFFSET))(str, nullptr);
		}

		::System::Void SetValue(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_SETVALUE_OFFSET))(str, str, nullptr);
		}

		::System::Void SetCountry(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_SETCOUNTRY_OFFSET))(str, nullptr);
		}

		::System::Void SetLocale(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_SETLOCALE_OFFSET))(str, nullptr);
		}

		::System::Void SetOs(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_SETOS_OFFSET))(str, nullptr);
		}

		::System::Void SetOe(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_SETOE_OFFSET))(str, nullptr);
		}

		::System::Void SetUUID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_SETUUID_OFFSET))(str, nullptr);
		}

		::System::Void SetUUID2(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_SETUUID2_OFFSET))(str, nullptr);
		}

		::System::String* GetHWID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_GETHWID_OFFSET))(nullptr);
		}

		::System::String* GetNxHwid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_GETNXHWID_OFFSET))(nullptr);
		}

		::System::String* GetInstanceID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_GETINSTANCEID_OFFSET))(nullptr);
		}

		::System::String* GenerateUUID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_GENERATEUUID_OFFSET))(nullptr);
		}

		::System::String* GetObfuscatedGuid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_GETOBFUSCATEDGUID_OFFSET))(nullptr);
		}

		::System::Void UseRemoteLog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_USEREMOTELOG_OFFSET))(arg, nullptr);
		}

		::System::Void AddLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_ADDLOG_OFFSET))(str, nullptr);
		}

		::System::Void SetPrivateLogPrintEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_SETPRIVATELOGPRINTENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void SetUserDataSaveEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_SETUSERDATASAVEENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasConnectedNetworkAdapter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_HASCONNECTEDNETWORKADAPTER_OFFSET))(nullptr);
		}

		::System::Void LaunchURL(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_LAUNCHURL_OFFSET))(str, nullptr);
		}

		::System::Void BindOnLog(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_BINDONLOG_OFFSET))(arg, nullptr);
		}

		::System::Void BindOnRawLog(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CORE_BINDONRAWLOG_OFFSET))(arg, nullptr);
		}

	};
}

