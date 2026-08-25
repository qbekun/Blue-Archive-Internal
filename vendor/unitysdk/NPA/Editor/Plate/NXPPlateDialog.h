#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class INXPAuthEx; }
namespace NPA::Editor::Plate::View { class NXPPlateView; }
namespace NPA::Editor::Network { class NXPBasePlateInfo; }
namespace NPA { class NPCSInfo; }
namespace NPA::Editor::Contents { class NXPToyPlateManager; }
namespace NPA::Editor::Board { class NXPBoardManager; }
namespace NPA::Editor::Network { class NXPBasePlateRecipeInfo; }
namespace NPA { class NXPResult; }
namespace NPA::Auth { class NXPToyAccountSettingsResult; }

#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DC0800)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DC0DE0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_GETCONTENTSESSIONID_OFFSET UNITYSDK_OFFSET(0x9DC0A10)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x9DC0ED0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLENOTICE_OFFSET UNITYSDK_OFFSET(0x9DC1540)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEFAQ_OFFSET UNITYSDK_OFFSET(0x9DC1650)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEUSERINFO_OFFSET UNITYSDK_OFFSET(0x9DC1670)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEGAMEINFO_OFFSET UNITYSDK_OFFSET(0x9DC17F0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEADINFO_OFFSET UNITYSDK_OFFSET(0x9DC1FB0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEURL_OFFSET UNITYSDK_OFFSET(0x9DC23F0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEURLEXTERN_OFFSET UNITYSDK_OFFSET(0x9DC25D0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEPROBABILITY_OFFSET UNITYSDK_OFFSET(0x9DC2680)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLECUSTOMERCENTER_OFFSET UNITYSDK_OFFSET(0x9DC26A0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLENEXONCUSTOMERCENTER_OFFSET UNITYSDK_OFFSET(0x9DC26D0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEMETA_OFFSET UNITYSDK_OFFSET(0x9DC2710)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLETERMS_OFFSET UNITYSDK_OFFSET(0x9DC2860)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLETODAY_OFFSET UNITYSDK_OFFSET(0x9DC29E0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEDELETEKRPCACCOUNT_OFFSET UNITYSDK_OFFSET(0x9DC2C00)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEDELETEGLOBALACCOUNT_OFFSET UNITYSDK_OFFSET(0x9DC2DE0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEBATCHNOTICE_OFFSET UNITYSDK_OFFSET(0x9DC2EE0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEUSERCONSENT_OFFSET UNITYSDK_OFFSET(0x9DC3090)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEOPENAPIPOLICY_OFFSET UNITYSDK_OFFSET(0x9DC3360)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEMYACCOUNTIAL_OFFSET UNITYSDK_OFFSET(0x9DC34E0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_SENDPLATENXLOG_OFFSET UNITYSDK_OFFSET(0x9DC0BB0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_MAKENEXONCUSTOMERCENTERURL_OFFSET UNITYSDK_OFFSET(0x9DC39C0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_MAKEWEBURLFROMMETA_OFFSET UNITYSDK_OFFSET(0x9DC3710)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_GETMETAFORRECOVERBACKSLASH_OFFSET UNITYSDK_OFFSET(0x9DC3C00)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9DC3F60)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9DC4050)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG__SETCALLBACK_B__10_0_OFFSET UNITYSDK_OFFSET(0x9DC4060)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLEUSERINFO_B__15_1_OFFSET UNITYSDK_OFFSET(0x9DC4070)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLEGAMEINFO_B__16_1_OFFSET UNITYSDK_OFFSET(0x9DC4080)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLETERMS_B__24_1_OFFSET UNITYSDK_OFFSET(0x9DC4090)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLEUSERCONSENT_B__29_1_OFFSET UNITYSDK_OFFSET(0x9DC40A0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLEOPENAPIPOLICY_B__30_1_OFFSET UNITYSDK_OFFSET(0x9DC40B0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLEMYACCOUNTIAL_B__31_1_OFFSET UNITYSDK_OFFSET(0x9DC40C0)
#define NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLEMYACCOUNTIAL_B__31_0_OFFSET UNITYSDK_OFFSET(0x9DC41A0)

namespace NPA::Editor::Plate
{
	inline static constexpr unsigned int NXPPlateDialog_TypeDefinitionIndex = 26441;

	class NXPPlateDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::INXPAuthEx* auth; // 0x30
		::NPA::Editor::Plate::View::NXPPlateView* plateView; // 0x38
		::NPA::Editor::Network::NXPBasePlateInfo* basePlateInfo; // 0x40
		::NPA::NPCSInfo* csInfo; // 0x48
		Il2CppObject* callback; // 0x50
		Il2CppObject* _onAccountSettingsComplete; // 0x58
		::NPA::Editor::Contents::NXPToyPlateManager* plateManager; // 0x60
		::NPA::Editor::Board::NXPBoardManager* boardManager; // 0x68
		::System::String* contentSessionId; // 0x70

		::System::Void .ctor(::NPA::Editor::Auth::INXPAuthEx* arg, ::NPA::Editor::Network::NXPBasePlateInfo* arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Auth::INXPAuthEx*, ::NPA::Editor::Network::NXPBasePlateInfo*, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::String* GetContentSessionId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_GETCONTENTSESSIONID_OFFSET))(nullptr);
		}

		::System::Void OnClickItem(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_ONCLICKITEM_OFFSET))(arg, nullptr);
		}

		::System::Void HandleNotice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLENOTICE_OFFSET))(nullptr);
		}

		::System::Void HandleFAQ()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEFAQ_OFFSET))(nullptr);
		}

		::System::Void HandleUserInfo(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEUSERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void HandleGameInfo(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEGAMEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void HandleAdInfo(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEADINFO_OFFSET))(arg, nullptr);
		}

		::System::Void HandleURL(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEURL_OFFSET))(arg, nullptr);
		}

		::System::Void HandleURLExtern(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEURLEXTERN_OFFSET))(arg, nullptr);
		}

		::System::Void HandleProbability()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEPROBABILITY_OFFSET))(nullptr);
		}

		::System::Void HandleCustomerCenter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLECUSTOMERCENTER_OFFSET))(nullptr);
		}

		::System::Void HandleNexonCustomerCenter(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLENEXONCUSTOMERCENTER_OFFSET))(arg, str, nullptr);
		}

		::System::Void HandleMeta(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEMETA_OFFSET))(arg, nullptr);
		}

		::System::Void HandleTerms(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLETERMS_OFFSET))(arg, nullptr);
		}

		::System::Void HandleToday()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLETODAY_OFFSET))(nullptr);
		}

		::System::Void HandleDeleteKRPCAccount(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEDELETEKRPCACCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void HandleDeleteGlobalAccount(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEDELETEGLOBALACCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void HandleBatchNotice(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEBATCHNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void HandleUserConsent(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEUSERCONSENT_OFFSET))(arg, nullptr);
		}

		::System::Void HandleOpenApiPolicy(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEOPENAPIPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void HandleMyAccountIAL()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_HANDLEMYACCOUNTIAL_OFFSET))(nullptr);
		}

		::System::Void SendPlateNXLog(::System::String* str, ::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_SENDPLATENXLOG_OFFSET))(str, arg, nullptr);
		}

		::System::String* MakeNexonCustomerCenterUrl(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_MAKENEXONCUSTOMERCENTERURL_OFFSET))(str, nullptr);
		}

		::System::String* MakeWebUrlFromMeta(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_MAKEWEBURLFROMMETA_OFFSET))(arg, nullptr);
		}

		::System::String* GetMetaForRecoverBackSlash(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_GETMETAFORRECOVERBACKSLASH_OFFSET))(str, nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG_CLOSE_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__10_0(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG__SETCALLBACK_B__10_0_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleUserInfo_b__15_1(::NPA::NXPResult* arg)
		{
			((::System::Void(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLEUSERINFO_B__15_1_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleGameInfo_b__16_1(::NPA::NXPResult* arg)
		{
			((::System::Void(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLEGAMEINFO_B__16_1_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleTerms_b__24_1(::NPA::NXPResult* arg)
		{
			((::System::Void(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLETERMS_B__24_1_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleUserConsent_b__29_1(::NPA::NXPResult* arg)
		{
			((::System::Void(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLEUSERCONSENT_B__29_1_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleOpenApiPolicy_b__30_1(::NPA::NXPResult* arg)
		{
			((::System::Void(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLEOPENAPIPOLICY_B__30_1_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleMyAccountIAL_b__31_1(::NPA::Auth::NXPToyAccountSettingsResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyAccountSettingsResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLEMYACCOUNTIAL_B__31_1_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleMyAccountIAL_b__31_0(::NPA::Auth::NXPToyAccountSettingsResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyAccountSettingsResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPPLATEDIALOG__HANDLEMYACCOUNTIAL_B__31_0_OFFSET))(arg, nullptr);
		}

	};
}

