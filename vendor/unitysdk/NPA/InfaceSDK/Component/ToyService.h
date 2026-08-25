#pragma once
#include "../../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONArray; }

#define NPA_INFACESDK_COMPONENT_TOYSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D175C0)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D17700)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_USERMETAUPDATELASTLOGIN_OFFSET UNITYSDK_OFFSET(0x9D17860)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_USERMETAGETLASTLOGINBYGUID_OFFSET UNITYSDK_OFFSET(0x9D17BB0)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_USERMETAGETLASTLOGINBYPLATFORMUSERID_OFFSET UNITYSDK_OFFSET(0x9D18130)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_USERMETAGETLASTLOGINBYPLATFORMUSERID_OFFSET UNITYSDK_OFFSET(0x9D186D0)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_USERMETAGETCONTENTSOWNERSHIPLIST_OFFSET UNITYSDK_OFFSET(0x9D18C00)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_USERMETAVALIDATECONTENTSOWNERSHIP_OFFSET UNITYSDK_OFFSET(0x9D18F40)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_SENDLASTLOGINUSERMETA_OFFSET UNITYSDK_OFFSET(0x9D192B0)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_USERCONSENTGETUSERCONSENTPOPUP_OFFSET UNITYSDK_OFFSET(0x9D19560)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_USERCONSENTGETUSERCONSENTSTATE_OFFSET UNITYSDK_OFFSET(0x9D198B0)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_USERCONSENTSAVEUSERCONSENTSTATE_OFFSET UNITYSDK_OFFSET(0x9D19C00)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_TRUSTEDDEVICEGETREGISTEREDSTATUS_OFFSET UNITYSDK_OFFSET(0x9D19FB0)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_GETBASEPLATERECIPES_OFFSET UNITYSDK_OFFSET(0x9D1A300)
#define NPA_INFACESDK_COMPONENT_TOYSERVICE_GETSDKKEYS_OFFSET UNITYSDK_OFFSET(0x9D1A630)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int ToyService_TypeDefinitionIndex = 25920;

	class ToyService : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void UserMetaUpdateLastLogin(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_USERMETAUPDATELASTLOGIN_OFFSET))(str, str, str, str, arg, nullptr);
		}

		::System::Void UserMetaGetLastLoginByGuid(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_USERMETAGETLASTLOGINBYGUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UserMetaGetLastLoginByPlatformUserId(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_USERMETAGETLASTLOGINBYPLATFORMUSERID_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void UserMetaGetLastLoginByPlatformUserId(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_USERMETAGETLASTLOGINBYPLATFORMUSERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UserMetaGetContentsOwnershipList(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_USERMETAGETCONTENTSOWNERSHIPLIST_OFFSET))(str, str, str, str, arg, nullptr);
		}

		::System::Void UserMetaValidateContentsOwnership(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::NPA::SimpleJSON::JSONArray* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::NPA::SimpleJSON::JSONArray*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_USERMETAVALIDATECONTENTSOWNERSHIP_OFFSET))(str, str, str, str, arg, arg, nullptr);
		}

		::System::Void SendLastLoginUserMeta(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_SENDLASTLOGINUSERMETA_OFFSET))(str, str, str, str, arg, nullptr);
		}

		::System::Void UserConsentGetUserConsentPopup(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_USERCONSENTGETUSERCONSENTPOPUP_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void UserConsentGetUserConsentState(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_USERCONSENTGETUSERCONSENTSTATE_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void UserConsentSaveUserConsentState(::System::String* str, ::System::Boolean arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_USERCONSENTSAVEUSERCONSENTSTATE_OFFSET))(str, arg, str, arg, nullptr);
		}

		::System::Void TrustedDeviceGetRegisteredStatus(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_TRUSTEDDEVICEGETREGISTEREDSTATUS_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void GetBasePlateRecipes(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_GETBASEPLATERECIPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetSdkKeys(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TOYSERVICE_GETSDKKEYS_OFFSET))(arg, nullptr);
		}

	};
}

