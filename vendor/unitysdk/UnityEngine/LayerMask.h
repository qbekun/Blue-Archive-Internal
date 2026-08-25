#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LayerMask; }

#define UNITYENGINE_LAYERMASK_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA230C00)
#define UNITYENGINE_LAYERMASK_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA230C10)
#define UNITYENGINE_LAYERMASK_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA230C20)
#define UNITYENGINE_LAYERMASK_NAMETOLAYER_OFFSET UNITYSDK_OFFSET(0xA230C30)
#define UNITYENGINE_LAYERMASK_GETMASK_OFFSET UNITYSDK_OFFSET(0xA230C70)

namespace UnityEngine
{
	inline static constexpr unsigned int LayerMask_TypeDefinitionIndex = 31155;

	class LayerMask : public Il2CppObject
	{
	public:
		::System::Int32 m_Mask; // 0x10

		::System::Int32 op_Implicit(::UnityEngine::LayerMask* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LayerMask* op_Implicit(::System::Int32 arg)
		{
			return (return (::UnityEngine::LayerMask*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Int32 NameToLayer(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_NAMETOLAYER_OFFSET))(str, nullptr);
		}

		::System::Int32 GetMask(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_GETMASK_OFFSET))(arg, nullptr);
		}

	};
}

