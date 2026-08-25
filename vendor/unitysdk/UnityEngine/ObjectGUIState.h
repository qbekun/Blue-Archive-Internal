#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_OBJECTGUISTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA289DD0)
#define UNITYENGINE_OBJECTGUISTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA289E50)
#define UNITYENGINE_OBJECTGUISTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA289FB0)
#define UNITYENGINE_OBJECTGUISTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0xA289F20)
#define UNITYENGINE_OBJECTGUISTATE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA289E10)
#define UNITYENGINE_OBJECTGUISTATE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0xA28A100)

namespace UnityEngine
{
	inline static constexpr unsigned int ObjectGUIState_TypeDefinitionIndex = 36555;

	class ObjectGUIState : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTGUISTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTGUISTATE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTGUISTATE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTGUISTATE_DESTROY_OFFSET))(nullptr);
		}

		::System::Int32 Internal_Create()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTGUISTATE_INTERNAL_CREATE_OFFSET))(nullptr);
		}

		::System::Void Internal_Destroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTGUISTATE_INTERNAL_DESTROY_OFFSET))(arg, nullptr);
		}

	};
}

