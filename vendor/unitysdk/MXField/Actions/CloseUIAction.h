#pragma once
#include "../../unitysdk.h"

namespace MXField::Actions { class CloseUIAction; }
class UIBase;

#define MXFIELD_ACTIONS_CLOSEUIACTION_CREATE_OFFSET UNITYSDK_OFFSET(0xEE8100)
#define MXFIELD_ACTIONS_CLOSEUIACTION_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_ACTIONS_CLOSEUIACTION_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_ACTIONS_CLOSEUIACTION_CLOSE_OFFSET UNITYSDK_OFFSET(0xEE81B0)
#define MXFIELD_ACTIONS_CLOSEUIACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE8320)
#define MXFIELD_ACTIONS_CLOSEUIACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE8170)
#define MXFIELD_ACTIONS_CLOSEUIACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEE8340)
#define MXFIELD_ACTIONS_CLOSEUIACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xEE8440)
#define MXFIELD_ACTIONS_CLOSEUIACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xEE8460)
#define MXFIELD_ACTIONS_CLOSEUIACTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEE8560)

namespace MXField::Actions
{
	inline static constexpr unsigned int CloseUIAction_TypeDefinitionIndex = 11031;

	class CloseUIAction : public Il2CppObject
	{
	public:
		::System::String* uiName; // 0x30

		::MXField::Actions::CloseUIAction* Create(::System::String* str)
		{
			return ((::MXField::Actions::CloseUIAction*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_CLOSEUIACTION_CREATE_OFFSET))(str, nullptr);
		}

		::MXField::Actions::CloseUIAction* Create()
		{
			return ((::MXField::Actions::CloseUIAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_CLOSEUIACTION_CREATE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_CLOSEUIACTION_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Close(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_CLOSEUIACTION_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_CLOSEUIACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_CLOSEUIACTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_CLOSEUIACTION_EXECUTE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MXField::Actions::CloseUIAction* arg)
		{
			return ((::System::Boolean(*)(::MXField::Actions::CloseUIAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_CLOSEUIACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_CLOSEUIACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_CLOSEUIACTION_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

