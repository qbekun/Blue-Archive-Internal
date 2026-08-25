#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class ComponentBase; }
namespace NPA::InfaceSDK { class InfaceDelegateHandle; }

#define NPA_INFACESDK_COMPONENT_COMPONENTBASE_GET_INNERHANDLE_OFFSET UNITYSDK_OFFSET(0x9D1C160)
#define NPA_INFACESDK_COMPONENT_COMPONENTBASE_SET_INNERHANDLE_OFFSET UNITYSDK_OFFSET(0x9D1C170)
#define NPA_INFACESDK_COMPONENT_COMPONENTBASE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9D1C180)
#define NPA_INFACESDK_COMPONENT_COMPONENTBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INFACESDK_COMPONENT_COMPONENTBASE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9D06740)
#define NPA_INFACESDK_COMPONENT_COMPONENTBASE_ONINFACECALLBACKIMPL_OFFSET UNITYSDK_OFFSET(0x9D1BFC0)
#define NPA_INFACESDK_COMPONENT_COMPONENTBASE_GETCALLBACKPTR_OFFSET UNITYSDK_OFFSET(0x9CFED60)
#define NPA_INFACESDK_COMPONENT_COMPONENTBASE_GETREQUESTHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INFACESDK_COMPONENT_COMPONENTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFE250)
#define NPA_INFACESDK_COMPONENT_COMPONENTBASE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D1C2B0)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int ComponentBase_TypeDefinitionIndex = 25969;

	class ComponentBase : public Il2CppObject
	{
	public:
		::System::Int32 _InnerHandle_k__BackingField; // 0x10
		Il2CppObject* CallbackMap; // 0x0

		::System::Int32 get_InnerHandle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COMPONENTBASE_GET_INNERHANDLE_OFFSET))(nullptr);
		}

		::System::Void set_InnerHandle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COMPONENTBASE_SET_INNERHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Implicit(::NPA::InfaceSDK::Component::ComponentBase* arg)
		{
			return (return (::System::Boolean(*)(::NPA::InfaceSDK::Component::ComponentBase*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COMPONENTBASE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COMPONENTBASE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 op_Implicit(::NPA::InfaceSDK::Component::ComponentBase* arg)
		{
			return (return (::System::Int32(*)(::NPA::InfaceSDK::Component::ComponentBase*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COMPONENTBASE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnInfaceCallbackImpl(::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COMPONENTBASE_ONINFACECALLBACKIMPL_OFFSET))(arg, arg, str, nullptr);
		}

		CallbackIdHandledDelegate* GetCallbackPtr()
		{
			return (return (CallbackIdHandledDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COMPONENTBASE_GETCALLBACKPTR_OFFSET))(nullptr);
		}

		::NPA::InfaceSDK::InfaceDelegateHandle* GetRequestHandle(Il2CppObject* arg)
		{
			return (return (::NPA::InfaceSDK::InfaceDelegateHandle*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COMPONENTBASE_GETREQUESTHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COMPONENTBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COMPONENTBASE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

