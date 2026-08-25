#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class ClipperRegistry; }
namespace UnityEngine::UI { class IClipper; }

#define UNITYENGINE_UI_CLIPPERREGISTRY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA2EC2A0)
#define UNITYENGINE_UI_CLIPPERREGISTRY_UNREGISTER_OFFSET UNITYSDK_OFFSET(0xA2ED420)
#define UNITYENGINE_UI_CLIPPERREGISTRY_REGISTER_OFFSET UNITYSDK_OFFSET(0xA2ED4F0)
#define UNITYENGINE_UI_CLIPPERREGISTRY_DISABLE_OFFSET UNITYSDK_OFFSET(0xA2ED5E0)
#define UNITYENGINE_UI_CLIPPERREGISTRY_CULL_OFFSET UNITYSDK_OFFSET(0xA2EC340)
#define UNITYENGINE_UI_CLIPPERREGISTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2ED3A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ClipperRegistry_TypeDefinitionIndex = 34749;

	class ClipperRegistry : public Il2CppObject
	{
	public:
		::UnityEngine::UI::ClipperRegistry* s_Instance; // 0x0
		Il2CppObject* m_Clippers; // 0x10

		::UnityEngine::UI::ClipperRegistry* get_instance()
		{
			return (return (::UnityEngine::UI::ClipperRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void Unregister(::UnityEngine::UI::IClipper* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::IClipper*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY_UNREGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void Register(::UnityEngine::UI::IClipper* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::IClipper*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::UnityEngine::UI::IClipper* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::IClipper*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Cull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY_CULL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY_.CTOR_OFFSET))(nullptr);
		}

	};
}

