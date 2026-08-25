#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPToyCryptType; }
namespace NPA::Editor::Network { class IBodyArgument; }
namespace NPA { class NXPResult; }
namespace NPA::Editor::Network { class INXPResponse; }

#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ISLIVEENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x9C1D000)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ISPREENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x9C1D050)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ISSTAGEENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x9C1D0A0)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETNEWENVFORINFACE_OFFSET UNITYSDK_OFFSET(0x9C1D0F0)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETENVFORINFACE_OFFSET UNITYSDK_OFFSET(0x9C1D1B0)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETSIGNINURL_OFFSET UNITYSDK_OFFSET(0x9C1D280)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETSIGNINURLFORINSIGN_OFFSET UNITYSDK_OFFSET(0x9C1D320)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETREDIRECTURLFORINSIGN_OFFSET UNITYSDK_OFFSET(0x9C1D3C0)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORBOLTSERVER_OFFSET UNITYSDK_OFFSET(0x9C1D460)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORCOMMUNITYSERVER_OFFSET UNITYSDK_OFFSET(0x9C1D640)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORPAGESERVER_OFFSET UNITYSDK_OFFSET(0x9C1D700)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORPAGESERVER2_OFFSET UNITYSDK_OFFSET(0x9C1D7C0)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORTOYPAGESERVER_OFFSET UNITYSDK_OFFSET(0x9C1D880)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORSTORESERVER_OFFSET UNITYSDK_OFFSET(0x9C1D910)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORPUSHSERVER_OFFSET UNITYSDK_OFFSET(0x9C1D9B0)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETTOYSAMPLESERVERURL_OFFSET UNITYSDK_OFFSET(0x9C1DA70)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETNCSBASEURL_OFFSET UNITYSDK_OFFSET(0x9C1DB50)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORBOARASERVER_OFFSET UNITYSDK_OFFSET(0x9C1DBF0)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORSAFETYDEVICE_OFFSET UNITYSDK_OFFSET(0x9C1DC90)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORSECURITY_OFFSET UNITYSDK_OFFSET(0x9C1DD20)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFOREVENTBUILDER_OFFSET UNITYSDK_OFFSET(0x9C1DDB0)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETDEFAULTHEADERFORBOLTREQUEST_OFFSET UNITYSDK_OFFSET(0x9C1DE50)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETCOMMONHEADERFORREQUEST_OFFSET UNITYSDK_OFFSET(0x9C1E570)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ENCRYPTBODYARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9C1E970)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ENCRYPTBODYARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9C1EB20)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ENCRYPTBODYARGUMENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9C1EA70)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_MAKESUCCESSRESULT_OFFSET UNITYSDK_OFFSET(0x9C1EB60)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_MAKEERRORRESULT_OFFSET UNITYSDK_OFFSET(0x9C1F570)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ISNETWORKLIKELYAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9C1F620)
#define NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBYTESRAWSTRING_OFFSET UNITYSDK_OFFSET(0x9C1F460)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyNetworkUtil_TypeDefinitionIndex = 26650;

	class NXPToyNetworkUtil : public Il2CppObject
	{
	public:
		::System::Boolean IsLiveEnvironment()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ISLIVEENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Boolean IsPreEnvironment()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ISPREENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Boolean IsStageEnvironment()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ISSTAGEENVIRONMENT_OFFSET))(nullptr);
		}

		::System::String* GetNewEnvForInface()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETNEWENVFORINFACE_OFFSET))(nullptr);
		}

		::System::String* GetEnvForInface(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETENVFORINFACE_OFFSET))(arg, nullptr);
		}

		::System::String* GetSignInUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETSIGNINURL_OFFSET))(nullptr);
		}

		::System::String* GetSignInUrlForInsign()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETSIGNINURLFORINSIGN_OFFSET))(nullptr);
		}

		::System::String* GetRedirectUrlForInsign()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETREDIRECTURLFORINSIGN_OFFSET))(nullptr);
		}

		::System::String* GetBaseUrlForBoltServer(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORBOLTSERVER_OFFSET))(str, nullptr);
		}

		::System::String* GetBaseUrlForCommunityServer(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORCOMMUNITYSERVER_OFFSET))(str, nullptr);
		}

		::System::String* GetBaseUrlForPageServer(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORPAGESERVER_OFFSET))(str, nullptr);
		}

		::System::String* GetBaseUrlForPageServer2(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORPAGESERVER2_OFFSET))(str, nullptr);
		}

		::System::String* GetBaseUrlForToyPageServer(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORTOYPAGESERVER_OFFSET))(str, nullptr);
		}

		::System::String* GetBaseUrlForStoreServer(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORSTORESERVER_OFFSET))(str, nullptr);
		}

		::System::String* GetBaseUrlForPushServer(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORPUSHSERVER_OFFSET))(str, nullptr);
		}

		::System::String* GetToySampleServerUrl(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETTOYSAMPLESERVERURL_OFFSET))(str, nullptr);
		}

		::System::String* GetNCSBaseUrl(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETNCSBASEURL_OFFSET))(str, nullptr);
		}

		::System::String* GetBaseUrlForBoaraServer(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORBOARASERVER_OFFSET))(str, nullptr);
		}

		::System::String* GetBaseUrlForSafetyDevice(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORSAFETYDEVICE_OFFSET))(str, nullptr);
		}

		::System::String* GetBaseUrlForSecurity(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFORSECURITY_OFFSET))(str, nullptr);
		}

		::System::String* GetBaseUrlForEventBuilder(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBASEURLFOREVENTBUILDER_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetDefaultHeaderForBoltRequest(::NPA::Editor::Network::NXPToyCryptType* arg)
		{
			return (return (Il2CppObject*(*)(::NPA::Editor::Network::NXPToyCryptType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETDEFAULTHEADERFORBOLTREQUEST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCommonHeaderForRequest()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETCOMMONHEADERFORREQUEST_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptBodyArguments(::NPA::Editor::Network::NXPToyCryptType* arg, ::NPA::Editor::Network::IBodyArgument* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::NPA::Editor::Network::NXPToyCryptType*, ::NPA::Editor::Network::IBodyArgument*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ENCRYPTBODYARGUMENTS_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptBodyArguments(::NPA::Editor::Network::NXPToyCryptType* arg, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::NPA::Editor::Network::NXPToyCryptType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ENCRYPTBODYARGUMENTS_OFFSET))(arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptBodyArgumentInternal(::NPA::Editor::Network::NXPToyCryptType* arg, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::NPA::Editor::Network::NXPToyCryptType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ENCRYPTBODYARGUMENTINTERNAL_OFFSET))(arg, str, nullptr);
		}

		::NPA::NXPResult* MakeSuccessResult(::NPA::Editor::Network::NXPToyCryptType* arg, ::System::String* str, ::System::Type* arg, ::NPA::Editor::Network::INXPResponse* arg)
		{
			return (return (::NPA::NXPResult*(*)(::NPA::Editor::Network::NXPToyCryptType*, ::System::String*, ::System::Type*, ::NPA::Editor::Network::INXPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_MAKESUCCESSRESULT_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::NPA::NXPResult* MakeErrorResult(::System::Type* arg, ::System::String* str)
		{
			return (return (::NPA::NXPResult*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_MAKEERRORRESULT_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean IsNetworkLikelyAvailable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_ISNETWORKLIKELYAVAILABLE_OFFSET))(nullptr);
		}

		::System::String* GetBytesRawString(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYNETWORKUTIL_GETBYTESRAWSTRING_OFFSET))(arg, nullptr);
		}

	};
}

