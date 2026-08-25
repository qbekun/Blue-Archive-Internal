#pragma once
#include "../../unitysdk.h"

namespace NPA { class NPCSInfo; }
namespace NPA::Service { class NXPWebInfo; }
namespace NPA { class NXPFieldFilterType; }
namespace NPA { class NXPToyRedeemCouponInfo; }
namespace NPA { class NXPToyWebRedeemCouponInfo; }
namespace NPA::Support { class NXPToyUploadScreenshotInfo; }

#define NPA_EDITOR_NPACCOUNTEDITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D63880)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9D63AC0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWHELPCENTER_OFFSET UNITYSDK_OFFSET(0x9D63AD0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWHELPCENTER_OFFSET UNITYSDK_OFFSET(0x9D63B30)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWNEXONCUSTOMERCENTER_OFFSET UNITYSDK_OFFSET(0x9D63BB0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWNEXONCUSTOMERCENTER_OFFSET UNITYSDK_OFFSET(0x9D63C10)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9D63C90)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9D63CF0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9D63D50)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9D63DB0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9D63E30)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9D63EB0)
#define NPA_EDITOR_NPACCOUNTEDITOR_CLOSEPLATE_OFFSET UNITYSDK_OFFSET(0x9D63F30)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWTODAY_OFFSET UNITYSDK_OFFSET(0x9D63F90)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWBATCHNOTICE_OFFSET UNITYSDK_OFFSET(0x9D64010)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x9D64090)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x9D640F0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWFAQ_OFFSET UNITYSDK_OFFSET(0x9D64170)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWITEMPROBABILITY_OFFSET UNITYSDK_OFFSET(0x9D641D0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9D64230)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9D64290)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9D642F0)
#define NPA_EDITOR_NPACCOUNTEDITOR_CLOSEWEB_OFFSET UNITYSDK_OFFSET(0x9D64370)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDFUNNEL_OFFSET UNITYSDK_OFFSET(0x9D643D0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDFUNNEL_OFFSET UNITYSDK_OFFSET(0x9D64430)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDNXLOG_OFFSET UNITYSDK_OFFSET(0x9D64490)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETNEXONANALYTICSUSERINFO_OFFSET UNITYSDK_OFFSET(0x9D644F0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETNEXONANALYTICSUSEREXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9D64550)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDSTAGELOG_OFFSET UNITYSDK_OFFSET(0x9D645B0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDERRORLOG_OFFSET UNITYSDK_OFFSET(0x9D64610)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDLOG_OFFSET UNITYSDK_OFFSET(0x9D64670)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDONLYONCELOG_OFFSET UNITYSDK_OFFSET(0x9D646D0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETNEXONANALYTICSDEVLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x9D64730)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDDEVLOG_OFFSET UNITYSDK_OFFSET(0x9D64790)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDSYSTEMINFOLOG_OFFSET UNITYSDK_OFFSET(0x9D647F0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDASSIGNINFOUSER_OFFSET UNITYSDK_OFFSET(0x9D64850)
#define NPA_EDITOR_NPACCOUNTEDITOR_REMOVEINFOUSERLOGBODY_OFFSET UNITYSDK_OFFSET(0x9D648B0)
#define NPA_EDITOR_NPACCOUNTEDITOR_PRESETCOMMONFIELDFILTER_OFFSET UNITYSDK_OFFSET(0x9D64910)
#define NPA_EDITOR_NPACCOUNTEDITOR_PRESETBACKUPFILELIMIT_OFFSET UNITYSDK_OFFSET(0x9D64970)
#define NPA_EDITOR_NPACCOUNTEDITOR_PRESETLOGQUEUEMAXSIZE_OFFSET UNITYSDK_OFFSET(0x9D649D0)
#define NPA_EDITOR_NPACCOUNTEDITOR_PRESETMESSAGEBULKCOUNT_OFFSET UNITYSDK_OFFSET(0x9D64A30)
#define NPA_EDITOR_NPACCOUNTEDITOR_PRESETMESSAGEBULKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9D64A90)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETCURRENTGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9D64AF0)
#define NPA_EDITOR_NPACCOUNTEDITOR_GETCOMMONFIELD_OFFSET UNITYSDK_OFFSET(0x9D64B50)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETEXTRACOMMONFIELD_OFFSET UNITYSDK_OFFSET(0x9D64BC0)
#define NPA_EDITOR_NPACCOUNTEDITOR_REMOVEEXTRACOMMONFIELD_OFFSET UNITYSDK_OFFSET(0x9D64C20)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETINPUTLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x9D64C80)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETINPUTLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x9D64CE0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETINPUTLOGOPTION_OFFSET UNITYSDK_OFFSET(0x9D64D60)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETINPUTLOGOPTION_OFFSET UNITYSDK_OFFSET(0x9D64DC0)
#define NPA_EDITOR_NPACCOUNTEDITOR_GETINPUTLOGOPTION_OFFSET UNITYSDK_OFFSET(0x9D64E40)
#define NPA_EDITOR_NPACCOUNTEDITOR_REGISTERKEYMAPINFO_OFFSET UNITYSDK_OFFSET(0x9D64EA0)
#define NPA_EDITOR_NPACCOUNTEDITOR_REGISTERKEYMAPINFO_OFFSET UNITYSDK_OFFSET(0x9D64F00)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDINPUTACTION_OFFSET UNITYSDK_OFFSET(0x9D64F80)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDINPUTACTION_OFFSET UNITYSDK_OFFSET(0x9D64FE0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDFUNNEL_OFFSET UNITYSDK_OFFSET(0x9D65060)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDFUNNEL_OFFSET UNITYSDK_OFFSET(0x9D650E0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDNXLOG_OFFSET UNITYSDK_OFFSET(0x9D65160)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETNEXONANALYTICSUSEREXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9D651E0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDSTAGELOG_OFFSET UNITYSDK_OFFSET(0x9D65260)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDERRORLOG_OFFSET UNITYSDK_OFFSET(0x9D652E0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDLOG_OFFSET UNITYSDK_OFFSET(0x9D65360)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDONLYONCELOG_OFFSET UNITYSDK_OFFSET(0x9D653E0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETNEXONANALYTICSDEVLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x9D65460)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDDEVLOG_OFFSET UNITYSDK_OFFSET(0x9D654E0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDSYSTEMINFOLOG_OFFSET UNITYSDK_OFFSET(0x9D65560)
#define NPA_EDITOR_NPACCOUNTEDITOR_SENDASSIGNINFOUSER_OFFSET UNITYSDK_OFFSET(0x9D655E0)
#define NPA_EDITOR_NPACCOUNTEDITOR_REMOVEINFOUSERLOGBODY_OFFSET UNITYSDK_OFFSET(0x9D65660)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETCURRENTGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9D656E0)
#define NPA_EDITOR_NPACCOUNTEDITOR_SETEXTRACOMMONFIELD_OFFSET UNITYSDK_OFFSET(0x9D65760)
#define NPA_EDITOR_NPACCOUNTEDITOR_REMOVEEXTRACOMMONFIELD_OFFSET UNITYSDK_OFFSET(0x9D657E0)
#define NPA_EDITOR_NPACCOUNTEDITOR_REDEEMCOUPON_OFFSET UNITYSDK_OFFSET(0x9D65860)
#define NPA_EDITOR_NPACCOUNTEDITOR_SHOWCOUPONREDEMPTIONWEB_OFFSET UNITYSDK_OFFSET(0x9D658A0)
#define NPA_EDITOR_NPACCOUNTEDITOR_UPLOADSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x9D658E0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NPAccountEditor_TypeDefinitionIndex = 26193;

	class NPAccountEditor : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShutDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void ShowHelpCenter(::NPA::NPCSInfo* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWHELPCENTER_OFFSET))(arg, nullptr);
		}

		::System::Void ShowHelpCenter(::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWHELPCENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowNexonCustomerCenter(::NPA::NPCSInfo* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWNEXONCUSTOMERCENTER_OFFSET))(arg, nullptr);
		}

		::System::Void ShowNexonCustomerCenter(::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWNEXONCUSTOMERCENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowTermsList(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWTERMSLIST_OFFSET))(str, nullptr);
		}

		::System::Void ShowPlate(::NPA::NPCSInfo* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWPLATE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWPLATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWPLATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWPLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWPLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ClosePlate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_CLOSEPLATE_OFFSET))(nullptr);
		}

		::System::Void ShowToday(::System::Int32 arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWTODAY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowBatchNotice(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWBATCHNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowNotice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWNOTICE_OFFSET))(nullptr);
		}

		::System::Void ShowNotice(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowFAQ()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWFAQ_OFFSET))(nullptr);
		}

		::System::Void ShowItemProbability()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWITEMPROBABILITY_OFFSET))(nullptr);
		}

		::System::Void ShowWeb(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWWEB_OFFSET))(str, str, nullptr);
		}

		::System::Void ShowWeb(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWWEB_OFFSET))(str, str, str, nullptr);
		}

		::System::Void ShowWeb(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWWEB_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CloseWeb()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_CLOSEWEB_OFFSET))(nullptr);
		}

		::System::Boolean SendFunnel(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDFUNNEL_OFFSET))(str, nullptr);
		}

		::System::Boolean SendFunnel(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDFUNNEL_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SendNXLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDNXLOG_OFFSET))(str, str, nullptr);
		}

		::System::Void SetNexonAnalyticsUserInfo(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETNEXONANALYTICSUSERINFO_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SetNexonAnalyticsUserExtraInfo(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETNEXONANALYTICSUSEREXTRAINFO_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SendStageLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDSTAGELOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SendErrorLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDERRORLOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SendLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDLOG_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SendOnlyOnceLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDONLYONCELOG_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SetNexonAnalyticsDevLogLevel(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETNEXONANALYTICSDEVLOGLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean SendDevLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDDEVLOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SendSystemInfoLog(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDSYSTEMINFOLOG_OFFSET))(str, nullptr);
		}

		::System::Boolean SendAssignInfoUser(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDASSIGNINFOUSER_OFFSET))(str, str, nullptr);
		}

		::System::Boolean RemoveInfoUserLogBody()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_REMOVEINFOUSERLOGBODY_OFFSET))(nullptr);
		}

		::System::Boolean PresetCommonFieldFilter(::System::String* str, ::NPA::NXPFieldFilterType* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::NPA::NXPFieldFilterType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_PRESETCOMMONFIELDFILTER_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean PresetBackupFileLimit(::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_PRESETBACKUPFILELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean PresetLogQueueMaxSize(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_PRESETLOGQUEUEMAXSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean PresetMessageBulkCount(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_PRESETMESSAGEBULKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean PresetMessageBulkTimeout(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_PRESETMESSAGEBULKTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetCurrentGameState(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETCURRENTGAMESTATE_OFFSET))(str, nullptr);
		}

		::System::String* GetCommonField(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_GETCOMMONFIELD_OFFSET))(str, nullptr);
		}

		::System::Boolean SetExtraCommonField(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETEXTRACOMMONFIELD_OFFSET))(str, str, nullptr);
		}

		::System::Boolean RemoveExtraCommonField(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_REMOVEEXTRACOMMONFIELD_OFFSET))(str, nullptr);
		}

		::System::Boolean SetInputLogLevel(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETINPUTLOGLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetInputLogLevel(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETINPUTLOGLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetInputLogOption(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETINPUTLOGOPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetInputLogOption(::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETINPUTLOGOPTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetInputLogOption(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_GETINPUTLOGOPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean RegisterKeymapInfo(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_REGISTERKEYMAPINFO_OFFSET))(str, arg, arg, str, nullptr);
		}

		::System::Void RegisterKeymapInfo(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_REGISTERKEYMAPINFO_OFFSET))(str, arg, arg, str, arg, nullptr);
		}

		::System::Boolean SendInputAction(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDINPUTACTION_OFFSET))(str, str, nullptr);
		}

		::System::Void SendInputAction(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDINPUTACTION_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void SendFunnel(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDFUNNEL_OFFSET))(str, arg, nullptr);
		}

		::System::Void SendFunnel(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDFUNNEL_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void SendNXLog(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDNXLOG_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void SetNexonAnalyticsUserExtraInfo(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETNEXONANALYTICSUSEREXTRAINFO_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void SendStageLog(::System::Int32 arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDSTAGELOG_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SendErrorLog(::System::Int32 arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDERRORLOG_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SendLog(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDLOG_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void SendOnlyOnceLog(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDONLYONCELOG_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void SetNexonAnalyticsDevLogLevel(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETNEXONANALYTICSDEVLOGLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendDevLog(::System::Int32 arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDDEVLOG_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SendSystemInfoLog(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDSYSTEMINFOLOG_OFFSET))(str, arg, nullptr);
		}

		::System::Void SendAssignInfoUser(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SENDASSIGNINFOUSER_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void RemoveInfoUserLogBody(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_REMOVEINFOUSERLOGBODY_OFFSET))(arg, nullptr);
		}

		::System::Void SetCurrentGameState(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETCURRENTGAMESTATE_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetExtraCommonField(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SETEXTRACOMMONFIELD_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void RemoveExtraCommonField(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_REMOVEEXTRACOMMONFIELD_OFFSET))(str, arg, nullptr);
		}

		::System::Void RedeemCoupon(::NPA::NXPToyRedeemCouponInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPToyRedeemCouponInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_REDEEMCOUPON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowCouponRedemptionWeb(::NPA::NXPToyWebRedeemCouponInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPToyWebRedeemCouponInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_SHOWCOUPONREDEMPTIONWEB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UploadScreenshot(::NPA::Support::NXPToyUploadScreenshotInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Support::NXPToyUploadScreenshotInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTEDITOR_UPLOADSCREENSHOT_OFFSET))(arg, arg, nullptr);
		}

	};
}

