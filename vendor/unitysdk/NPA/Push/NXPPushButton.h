#pragma once
#include "../../unitysdk.h"

namespace NPA::Push { class PushButtonAction; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_PUSH_NXPPUSHBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCA540)
#define NPA_PUSH_NXPPUSHBUTTON_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9CCA870)
#define NPA_PUSH_NXPPUSHBUTTON_SETACTION_OFFSET UNITYSDK_OFFSET(0x9CCA880)
#define NPA_PUSH_NXPPUSHBUTTON_GETTITLE_OFFSET UNITYSDK_OFFSET(0x9CCA890)
#define NPA_PUSH_NXPPUSHBUTTON_GETACTION_OFFSET UNITYSDK_OFFSET(0x9CCA8A0)
#define NPA_PUSH_NXPPUSHBUTTON_TOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x9CCA6E0)
#define NPA_PUSH_NXPPUSHBUTTON_APPENDJSONTO_OFFSET UNITYSDK_OFFSET(0x9CCA5B0)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPPushButton_TypeDefinitionIndex = 27350;

	class NXPPushButton : public Il2CppObject
	{
	public:
		::System::String* _title; // 0x10
		::NPA::Push::PushButtonAction* _action; // 0x18

		::System::Void .ctor(::System::String* str, ::NPA::Push::PushButtonAction* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Push::PushButtonAction*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHBUTTON_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHBUTTON_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetAction(::NPA::Push::PushButtonAction* arg)
		{
			((::System::Void(*)(::NPA::Push::PushButtonAction*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHBUTTON_SETACTION_OFFSET))(arg, nullptr);
		}

		::System::String* GetTitle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHBUTTON_GETTITLE_OFFSET))(nullptr);
		}

		::NPA::Push::PushButtonAction* GetAction()
		{
			return (return (::NPA::Push::PushButtonAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHBUTTON_GETACTION_OFFSET))(nullptr);
		}

		::NPA::SimpleJSON::JSONNode* ToJsonObject()
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHBUTTON_TOJSONOBJECT_OFFSET))(nullptr);
		}

		::System::Void AppendJsonTo(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHBUTTON_APPENDJSONTO_OFFSET))(arg, nullptr);
		}

	};
}

