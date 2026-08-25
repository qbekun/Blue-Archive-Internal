#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth::JavaScriptInterface { class InsignJavaScriptInterface; }
namespace NPA::Service { class NXPWebInfo; }
namespace NPA::SimpleJSON { class JSONClass; }

#define NPA_EDITOR_AUTH_NXPINSIGNDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA3E00)
#define NPA_EDITOR_AUTH_NXPINSIGNDIALOG_SETSCREENNAME_OFFSET UNITYSDK_OFFSET(0x9CAA7B0)
#define NPA_EDITOR_AUTH_NXPINSIGNDIALOG_GETSCREENNAME_OFFSET UNITYSDK_OFFSET(0x9CAA7D0)
#define NPA_EDITOR_AUTH_NXPINSIGNDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9CAA7E0)
#define NPA_EDITOR_AUTH_NXPINSIGNDIALOG_ONLOADWEBSERVER_OFFSET UNITYSDK_OFFSET(0x9CAA890)
#define NPA_EDITOR_AUTH_NXPINSIGNDIALOG_ONLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9CAA8C0)
#define NPA_EDITOR_AUTH_NXPINSIGNDIALOG_ONEXECUTENATIVEMETHOD_OFFSET UNITYSDK_OFFSET(0x9CAA900)
#define NPA_EDITOR_AUTH_NXPINSIGNDIALOG_INVOKESUCCESSRESULT_OFFSET UNITYSDK_OFFSET(0x9CAAA10)
#define NPA_EDITOR_AUTH_NXPINSIGNDIALOG_INVOKEFAILRESULT_OFFSET UNITYSDK_OFFSET(0x9CAAA50)
#define NPA_EDITOR_AUTH_NXPINSIGNDIALOG_EXECUTEJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9CAAAA0)
#define NPA_EDITOR_AUTH_NXPINSIGNDIALOG_EXECUTEJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9CAAB10)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPInsignDialog_TypeDefinitionIndex = 27161;

	class NXPInsignDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::JavaScriptInterface::InsignJavaScriptInterface* insignJS; // 0x98
		Il2CppObject* successCallback; // 0xA0
		Il2CppObject* failureCallback; // 0xA8
		::System::String* screenName; // 0xB0

		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPINSIGNDIALOG_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetScreenName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPINSIGNDIALOG_SETSCREENNAME_OFFSET))(str, nullptr);
		}

		::System::String* GetScreenName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPINSIGNDIALOG_GETSCREENNAME_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPINSIGNDIALOG_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnLoadWebServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPINSIGNDIALOG_ONLOADWEBSERVER_OFFSET))(nullptr);
		}

		::System::Void OnLoadProgressChanged(::System::Object* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPINSIGNDIALOG_ONLOADPROGRESSCHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnExecuteNativeMethod(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPINSIGNDIALOG_ONEXECUTENATIVEMETHOD_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void InvokeSuccessResult(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPINSIGNDIALOG_INVOKESUCCESSRESULT_OFFSET))(str, nullptr);
		}

		::System::Void InvokeFailResult(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPINSIGNDIALOG_INVOKEFAILRESULT_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void ExecuteJavaScript(::System::String* str, ::NPA::SimpleJSON::JSONClass* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONClass*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPINSIGNDIALOG_EXECUTEJAVASCRIPT_OFFSET))(str, arg, nullptr);
		}

		::System::Void ExecuteJavaScript(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPINSIGNDIALOG_EXECUTEJAVASCRIPT_OFFSET))(str, str, nullptr);
		}

	};
}

