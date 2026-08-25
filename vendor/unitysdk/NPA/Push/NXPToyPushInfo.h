#pragma once
#include "../../unitysdk.h"

namespace NPA::Push { class NXPToyPushContentType; }
namespace NPA::Push { class NXPToyPushVideoUrlType; }
namespace NPA::Push { class NXPToyPushPolicy; }
namespace NPA::Push { class NXPToyPushSound; }
namespace NPA::Push { class NXPToyPushForeground; }
namespace NPA::Push { class NXPToyPushButtonActionType; }
namespace NPA::Push { class NXPToyPushDeepLinkUrls; }
namespace NPA::Push { class NXPToyPushInfo; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_PUSH_NXPTOYPUSHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC6BB0)
#define NPA_PUSH_NXPTOYPUSHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC6D90)
#define NPA_PUSH_NXPTOYPUSHINFO_SETSVCID_OFFSET UNITYSDK_OFFSET(0x9CC6F50)
#define NPA_PUSH_NXPTOYPUSHINFO_SETEXTENDEDTITLE_OFFSET UNITYSDK_OFFSET(0x9CC6F60)
#define NPA_PUSH_NXPTOYPUSHINFO_SETEXTENDEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x9CC6F70)
#define NPA_PUSH_NXPTOYPUSHINFO_SETRECEIVERS_OFFSET UNITYSDK_OFFSET(0x9CC6F90)
#define NPA_PUSH_NXPTOYPUSHINFO_ADDRECEIVER_OFFSET UNITYSDK_OFFSET(0x9CC7010)
#define NPA_PUSH_NXPTOYPUSHINFO_SETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x9CC70F0)
#define NPA_PUSH_NXPTOYPUSHINFO_SETURL_OFFSET UNITYSDK_OFFSET(0x9CC7100)
#define NPA_PUSH_NXPTOYPUSHINFO_SETICONURL_OFFSET UNITYSDK_OFFSET(0x9CC7110)
#define NPA_PUSH_NXPTOYPUSHINFO_SETVIDEOURLTYPE_OFFSET UNITYSDK_OFFSET(0x9CC7120)
#define NPA_PUSH_NXPTOYPUSHINFO_SETTHUMBNAIL_OFFSET UNITYSDK_OFFSET(0x9CC7130)
#define NPA_PUSH_NXPTOYPUSHINFO_SETPUSHPOLICY_OFFSET UNITYSDK_OFFSET(0x9CC7140)
#define NPA_PUSH_NXPTOYPUSHINFO_SETRESERVEDAT_OFFSET UNITYSDK_OFFSET(0x9CC7150)
#define NPA_PUSH_NXPTOYPUSHINFO_SETMETA_OFFSET UNITYSDK_OFFSET(0x9CC7250)
#define NPA_PUSH_NXPTOYPUSHINFO_SETBADGE_OFFSET UNITYSDK_OFFSET(0x9CC7270)
#define NPA_PUSH_NXPTOYPUSHINFO_SETSOUND_OFFSET UNITYSDK_OFFSET(0x9CC7280)
#define NPA_PUSH_NXPTOYPUSHINFO_SETCHANNEL_OFFSET UNITYSDK_OFFSET(0x9CC72A0)
#define NPA_PUSH_NXPTOYPUSHINFO_SETFOREGROUND_OFFSET UNITYSDK_OFFSET(0x9CC72C0)
#define NPA_PUSH_NXPTOYPUSHINFO_ADDWEBLINKBUTTON_OFFSET UNITYSDK_OFFSET(0x9CC72D0)
#define NPA_PUSH_NXPTOYPUSHINFO_ADDDEEPLINKBUTTON_OFFSET UNITYSDK_OFFSET(0x9CC7430)
#define NPA_PUSH_NXPTOYPUSHINFO_ADDAPPLINKBUTTON_OFFSET UNITYSDK_OFFSET(0x9CC75C0)
#define NPA_PUSH_NXPTOYPUSHINFO_ADDAPPLAUNCHBUTTON_OFFSET UNITYSDK_OFFSET(0x9CC7730)
#define NPA_PUSH_NXPTOYPUSHINFO_ADDUPSTREAMBUTTON_OFFSET UNITYSDK_OFFSET(0x9CC7860)
#define NPA_PUSH_NXPTOYPUSHINFO_GETSVCID_OFFSET UNITYSDK_OFFSET(0x9CC79C0)
#define NPA_PUSH_NXPTOYPUSHINFO_GETRECEIVERS_OFFSET UNITYSDK_OFFSET(0x9CC79D0)
#define NPA_PUSH_NXPTOYPUSHINFO_GETFOREGROUND_OFFSET UNITYSDK_OFFSET(0x9CC79E0)
#define NPA_PUSH_NXPTOYPUSHINFO_GETMETA_OFFSET UNITYSDK_OFFSET(0x9CC79F0)
#define NPA_PUSH_NXPTOYPUSHINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x9CC7A00)
#define NPA_PUSH_NXPTOYPUSHINFO_TOJSONSTRING_OFFSET UNITYSDK_OFFSET(0x9CC7A60)
#define NPA_PUSH_NXPTOYPUSHINFO_TOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x9CC8A00)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPToyPushInfo_TypeDefinitionIndex = 27345;

	class NXPToyPushInfo : public Il2CppObject
	{
	public:
		::System::String* _serviceId; // 0x10
		::System::String* _title; // 0x18
		::System::String* _message; // 0x20
		::System::String* _extendedTitle; // 0x28
		::System::String* _extendedMessage; // 0x30
		Il2CppObject* _receivers; // 0x38
		::NPA::Push::NXPToyPushContentType* _contentType; // 0x40
		::System::String* _url; // 0x48
		::System::String* _iconUrl; // 0x50
		::NPA::Push::NXPToyPushVideoUrlType* _videoUrlType; // 0x58
		::System::String* _thumbnail; // 0x60
		::System::Boolean _localized; // 0x68
		Il2CppObject* _localizedParams; // 0x70
		::System::String* _gamePolicy; // 0x78
		::NPA::Push::NXPToyPushPolicy* _pushPolicy; // 0x80
		::System::String* _reservedAt; // 0x88
		::System::String* _meta; // 0x90
		::System::Int32 _badge; // 0x98
		::NPA::Push::NXPToyPushSound* _sound; // 0xA0
		::System::String* _channel; // 0xB0
		::NPA::Push::NXPToyPushForeground* _foreground; // 0xB8
		Il2CppObject* _buttons; // 0xC0

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetSvcId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETSVCID_OFFSET))(str, nullptr);
		}

		::System::Void SetExtendedTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETEXTENDEDTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetExtendedMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETEXTENDEDMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void SetReceivers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETRECEIVERS_OFFSET))(arg, nullptr);
		}

		::System::Void AddReceiver(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_ADDRECEIVER_OFFSET))(str, nullptr);
		}

		::System::Void SetContentType(::NPA::Push::NXPToyPushContentType* arg)
		{
			((::System::Void(*)(::NPA::Push::NXPToyPushContentType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETCONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETURL_OFFSET))(str, nullptr);
		}

		::System::Void SetIconUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETICONURL_OFFSET))(str, nullptr);
		}

		::System::Void SetVideoUrlType(::NPA::Push::NXPToyPushVideoUrlType* arg)
		{
			((::System::Void(*)(::NPA::Push::NXPToyPushVideoUrlType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETVIDEOURLTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetThumbnail(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETTHUMBNAIL_OFFSET))(str, nullptr);
		}

		::System::Void SetPushPolicy(::NPA::Push::NXPToyPushPolicy* arg)
		{
			((::System::Void(*)(::NPA::Push::NXPToyPushPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETPUSHPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetReservedAt(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETRESERVEDAT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetMeta(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETMETA_OFFSET))(str, nullptr);
		}

		::System::Void SetBadge(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETBADGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSound(::NPA::Push::NXPToyPushSound* arg)
		{
			((::System::Void(*)(::NPA::Push::NXPToyPushSound*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETSOUND_OFFSET))(arg, nullptr);
		}

		::System::Void SetChannel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETCHANNEL_OFFSET))(str, nullptr);
		}

		::System::Void SetForeground(::NPA::Push::NXPToyPushForeground* arg)
		{
			((::System::Void(*)(::NPA::Push::NXPToyPushForeground*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_SETFOREGROUND_OFFSET))(arg, nullptr);
		}

		::System::Void AddWebLinkButton(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_ADDWEBLINKBUTTON_OFFSET))(str, str, nullptr);
		}

		::System::Void AddDeepLinkButton(::System::String* str, ::NPA::Push::NXPToyPushButtonActionType* arg, ::NPA::Push::NXPToyPushDeepLinkUrls* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Push::NXPToyPushButtonActionType*, ::NPA::Push::NXPToyPushDeepLinkUrls*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_ADDDEEPLINKBUTTON_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddAppLinkButton(::System::String* str, ::NPA::Push::NXPToyPushDeepLinkUrls* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Push::NXPToyPushDeepLinkUrls*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_ADDAPPLINKBUTTON_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddAppLaunchButton(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_ADDAPPLAUNCHBUTTON_OFFSET))(str, nullptr);
		}

		::System::Void AddUpStreamButton(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_ADDUPSTREAMBUTTON_OFFSET))(str, str, nullptr);
		}

		::System::String* GetSvcId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_GETSVCID_OFFSET))(nullptr);
		}

		Il2CppObject* GetReceivers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_GETRECEIVERS_OFFSET))(nullptr);
		}

		::NPA::Push::NXPToyPushForeground* GetForeground()
		{
			return (return (::NPA::Push::NXPToyPushForeground*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_GETFOREGROUND_OFFSET))(nullptr);
		}

		::System::String* GetMeta()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_GETMETA_OFFSET))(nullptr);
		}

		::NPA::Push::NXPToyPushInfo* Clone()
		{
			return (return (::NPA::Push::NXPToyPushInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_CLONE_OFFSET))(nullptr);
		}

		::System::String* ToJsonString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_TOJSONSTRING_OFFSET))(nullptr);
		}

		::NPA::SimpleJSON::JSONNode* ToJsonObject()
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINFO_TOJSONOBJECT_OFFSET))(nullptr);
		}

	};
}

