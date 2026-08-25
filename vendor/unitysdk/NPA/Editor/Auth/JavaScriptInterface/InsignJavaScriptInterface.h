#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Auth { class NXPInsignDialog; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_AUTH_JAVASCRIPTINTERFACE_INSIGNJAVASCRIPTINTERFACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CBBC90)
#define NPA_EDITOR_AUTH_JAVASCRIPTINTERFACE_INSIGNJAVASCRIPTINTERFACE_SUCCESSINSIGNSERVICE_OFFSET UNITYSDK_OFFSET(0x9CBBEE0)
#define NPA_EDITOR_AUTH_JAVASCRIPTINTERFACE_INSIGNJAVASCRIPTINTERFACE_FAILINSIGNSERVICE_OFFSET UNITYSDK_OFFSET(0x9CBC130)
#define NPA_EDITOR_AUTH_JAVASCRIPTINTERFACE_INSIGNJAVASCRIPTINTERFACE_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9CBC050)
#define NPA_EDITOR_AUTH_JAVASCRIPTINTERFACE_INSIGNJAVASCRIPTINTERFACE_GETCALLBACKMETHODNAME_OFFSET UNITYSDK_OFFSET(0x9CBCAB0)

namespace NPA::Editor::Auth::JavaScriptInterface
{
	inline static constexpr unsigned int InsignJavaScriptInterface_TypeDefinitionIndex = 27203;

	class InsignJavaScriptInterface : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::NXPInsignDialog* insignDialog; // 0x28

		::System::Void .ctor(::NPA::Editor::Auth::NXPInsignDialog* arg)
		{
			((::System::Void(*)(::NPA::Editor::Auth::NXPInsignDialog*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_JAVASCRIPTINTERFACE_INSIGNJAVASCRIPTINTERFACE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SuccessInsignService(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_JAVASCRIPTINTERFACE_INSIGNJAVASCRIPTINTERFACE_SUCCESSINSIGNSERVICE_OFFSET))(str, nullptr);
		}

		::System::Void FailInsignService(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_JAVASCRIPTINTERFACE_INSIGNJAVASCRIPTINTERFACE_FAILINSIGNSERVICE_OFFSET))(str, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* GetParameters(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_JAVASCRIPTINTERFACE_INSIGNJAVASCRIPTINTERFACE_GETPARAMETERS_OFFSET))(str, nullptr);
		}

		::System::String* GetCallBackMethodName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_JAVASCRIPTINTERFACE_INSIGNJAVASCRIPTINTERFACE_GETCALLBACKMETHODNAME_OFFSET))(str, nullptr);
		}

	};
}

