#pragma once
#include "unitysdk.h"

#define NATIVE_CREATE_OFFSET UNITYSDK_OFFSET(0x9D17680)
#define NATIVE_DESTROY_OFFSET UNITYSDK_OFFSET(0x9D177E0)
#define NATIVE_GETUSERCONSENTPOPUP_OFFSET UNITYSDK_OFFSET(0x9D19800)
#define NATIVE_GETUSERCONSENTSTATE_OFFSET UNITYSDK_OFFSET(0x9D19B50)
#define NATIVE_SAVEUSERCONSENTSTATE_OFFSET UNITYSDK_OFFSET(0x9D19F00)
#define NATIVE_USERMETAUPDATELASTLOGIN_OFFSET UNITYSDK_OFFSET(0x9D17B00)
#define NATIVE_USERMETAGETLASTLOGINBYGUID_OFFSET UNITYSDK_OFFSET(0x9D18080)
#define NATIVE_USERMETAGETLASTLOGINBYPLATFORMUSERID_OFFSET UNITYSDK_OFFSET(0x9D18620)
#define NATIVE_USERMETAGETCONTENTSOWNERSHIPLIST_OFFSET UNITYSDK_OFFSET(0x9D18E90)
#define NATIVE_USERMETAVALIDATECONTENTSOWNERSHIP_OFFSET UNITYSDK_OFFSET(0x9D19200)
#define NATIVE_TRUSTEDDEVICEGETREGISTEREDSTATUS_OFFSET UNITYSDK_OFFSET(0x9D1A250)
#define NATIVE_GETBASEPLATERECIPES_OFFSET UNITYSDK_OFFSET(0x9D1A580)
#define NATIVE_GETSDKKEYS_OFFSET UNITYSDK_OFFSET(0x9D1A800)
#define NATIVE_USERMETAUPDATEGAMEUSERINFO_OFFSET UNITYSDK_OFFSET(0x9D1A890)

	inline static constexpr unsigned int Native_TypeDefinitionIndex = 25912;

	class Native : public Il2CppObject
	{
	public:
		::System::Int32 Create(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void GetUserConsentPopup(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, CallbackIdHandledDelegate* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, CallbackIdHandledDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_GETUSERCONSENTPOPUP_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void GetUserConsentState(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, CallbackIdHandledDelegate* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, CallbackIdHandledDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_GETUSERCONSENTSTATE_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void SaveUserConsentState(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, CallbackIdHandledDelegate* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, CallbackIdHandledDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_SAVEUSERCONSENTSTATE_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void UserMetaUpdateLastLogin(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, CallbackIdHandledDelegate* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, CallbackIdHandledDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_USERMETAUPDATELASTLOGIN_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void UserMetaGetLastLoginByGuid(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, CallbackIdHandledDelegate* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, CallbackIdHandledDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_USERMETAGETLASTLOGINBYGUID_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void UserMetaGetLastLoginByPlatformUserId(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, CallbackIdHandledDelegate* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, CallbackIdHandledDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_USERMETAGETLASTLOGINBYPLATFORMUSERID_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void UserMetaGetContentsOwnershipList(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, CallbackIdHandledDelegate* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, CallbackIdHandledDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_USERMETAGETCONTENTSOWNERSHIPLIST_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void UserMetaValidateContentsOwnership(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, CallbackIdHandledDelegate* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, CallbackIdHandledDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_USERMETAVALIDATECONTENTSOWNERSHIP_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void TrustedDeviceGetRegisteredStatus(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, CallbackIdHandledDelegate* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, CallbackIdHandledDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_TRUSTEDDEVICEGETREGISTEREDSTATUS_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void GetBasePlateRecipes(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, CallbackIdHandledDelegate* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, CallbackIdHandledDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_GETBASEPLATERECIPES_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void GetSdkKeys(::System::Int32 arg, ::System::Int32 arg, CallbackIdHandledDelegate* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, CallbackIdHandledDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_GETSDKKEYS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UserMetaUpdateGameUserInfo(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, CallbackIdHandledDelegate* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, CallbackIdHandledDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVE_USERMETAUPDATEGAMEUSERINFO_OFFSET))(arg, arg, str, arg, nullptr);
		}

	};

