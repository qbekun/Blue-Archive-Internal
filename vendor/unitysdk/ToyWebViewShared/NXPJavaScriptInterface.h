#pragma once
#include "../unitysdk.h"

#define TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_GET_OBJECTNAME_OFFSET UNITYSDK_OFFSET(0x9BA9440)
#define TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_SET_OBJECTNAME_OFFSET UNITYSDK_OFFSET(0x9BA9450)
#define TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_GET_OBJECTTPYE_OFFSET UNITYSDK_OFFSET(0x9BA9460)
#define TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_SET_OBJECTTPYE_OFFSET UNITYSDK_OFFSET(0x9BA9470)
#define TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_GET_METHODINFOS_OFFSET UNITYSDK_OFFSET(0x9BA9480)
#define TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_SET_METHODINFOS_OFFSET UNITYSDK_OFFSET(0x9BA9490)
#define TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA94A0)

namespace ToyWebViewShared
{
	inline static constexpr unsigned int NXPJavaScriptInterface_TypeDefinitionIndex = 25396;

	class NXPJavaScriptInterface : public Il2CppObject
	{
	public:
		::System::String* TOY_WEB_JS_EXECUTE_JAVA_SCRIPT; // 0x0
		::System::String* TOY_WEB_ON_FOCUSED_NODE_CHANGED; // 0x0
		::System::String* TOY_WEB_JS_SEND_EMITTED_EXECUTE_NATIVE_METHOD; // 0x0
		::System::String* TOY_WEB_JS_OBJECT; // 0x0
		::System::String* TOY_WEB_JS_EXECUTE_METHOD; // 0x0
		::System::String* _ObjectName_k__BackingField; // 0x10
		::System::Type* _ObjectTpye_k__BackingField; // 0x18
		Il2CppObject* _MethodInfos_k__BackingField; // 0x20

		::System::String* get_ObjectName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_GET_OBJECTNAME_OFFSET))(nullptr);
		}

		::System::Void set_ObjectName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_SET_OBJECTNAME_OFFSET))(str, nullptr);
		}

		::System::Type* get_ObjectTpye()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_GET_OBJECTTPYE_OFFSET))(nullptr);
		}

		::System::Void set_ObjectTpye(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_SET_OBJECTTPYE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MethodInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_GET_METHODINFOS_OFFSET))(nullptr);
		}

		::System::Void set_MethodInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_SET_METHODINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

