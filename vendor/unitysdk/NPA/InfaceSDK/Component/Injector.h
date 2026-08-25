#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_INJECTOR_BINDFUNCTIONS_OFFSET UNITYSDK_OFFSET(0x9D0F540)
#define NPA_INFACESDK_COMPONENT_INJECTOR_UNBINDFUNCTIONS_OFFSET UNITYSDK_OFFSET(0x9D0F990)
#define NPA_INFACESDK_COMPONENT_INJECTOR_SENDWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x9D0F410)
#define NPA_INFACESDK_COMPONENT_INJECTOR_OPENURL_OFFSET UNITYSDK_OFFSET(0x9D0F4E0)
#define NPA_INFACESDK_COMPONENT_INJECTOR_SETSHOWWEBPAGEDELEGATE_OFFSET UNITYSDK_OFFSET(0x9D0FA70)
#define NPA_INFACESDK_COMPONENT_INJECTOR_SENDWEBREQUESTASYNC_OFFSET UNITYSDK_OFFSET(0x9D0F9A0)
#define NPA_INFACESDK_COMPONENT_INJECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D0FAC0)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Injector_TypeDefinitionIndex = 25886;

	class Injector : public Il2CppObject
	{
	public:
		Il2CppObject* showWebPageDelegate; // 0x0

		::System::Void BindFunctions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INJECTOR_BINDFUNCTIONS_OFFSET))(nullptr);
		}

		::System::Void UnbindFunctions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INJECTOR_UNBINDFUNCTIONS_OFFSET))(nullptr);
		}

		::System::Void SendWebRequest(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INJECTOR_SENDWEBREQUEST_OFFSET))(arg, str, nullptr);
		}

		::System::Void OpenURL(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INJECTOR_OPENURL_OFFSET))(str, nullptr);
		}

		::System::Void SetShowWebPageDelegate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INJECTOR_SETSHOWWEBPAGEDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void SendWebRequestAsync(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INJECTOR_SENDWEBREQUESTASYNC_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INJECTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

