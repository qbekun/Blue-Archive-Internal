#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class StencilState; }
namespace UnityEngine::Rendering { class CompareFunction; }
namespace UnityEngine::Rendering { class StencilOp; }

#define UNITYENGINE_RENDERING_STENCILSTATE_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xA2652C0)
#define UNITYENGINE_RENDERING_STENCILSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA265330)
#define UNITYENGINE_RENDERING_STENCILSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2653F0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA2654C0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA265510)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_READMASK_OFFSET UNITYSDK_OFFSET(0xA265560)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_READMASK_OFFSET UNITYSDK_OFFSET(0xA265570)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0xA265580)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0xA265590)
#define UNITYENGINE_RENDERING_STENCILSTATE_SETCOMPAREFUNCTION_OFFSET UNITYSDK_OFFSET(0xA2655A0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SETPASSOPERATION_OFFSET UNITYSDK_OFFSET(0xA2655D0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SETFAILOPERATION_OFFSET UNITYSDK_OFFSET(0xA265600)
#define UNITYENGINE_RENDERING_STENCILSTATE_SETZFAILOPERATION_OFFSET UNITYSDK_OFFSET(0xA265630)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_COMPAREFUNCTIONFRONT_OFFSET UNITYSDK_OFFSET(0xA265660)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONFRONT_OFFSET UNITYSDK_OFFSET(0xA2655B0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_PASSOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0xA265670)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0xA2655E0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_FAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0xA265680)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0xA265610)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_ZFAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0xA265690)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0xA265640)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_COMPAREFUNCTIONBACK_OFFSET UNITYSDK_OFFSET(0xA2656A0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONBACK_OFFSET UNITYSDK_OFFSET(0xA2655C0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_PASSOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0xA2656B0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0xA2655F0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_FAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0xA2656C0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0xA265620)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_ZFAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0xA2656D0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0xA265650)
#define UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2656E0)
#define UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA265790)
#define UNITYENGINE_RENDERING_STENCILSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2658A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int StencilState_TypeDefinitionIndex = 31577;

	class StencilState : public Il2CppObject
	{
	public:
		::System::Byte m_Enabled; // 0x10
		::System::Byte m_ReadMask; // 0x11
		::System::Byte m_WriteMask; // 0x12
		::System::Byte m_Padding; // 0x13
		::System::Byte m_CompareFunctionFront; // 0x14
		::System::Byte m_PassOperationFront; // 0x15
		::System::Byte m_FailOperationFront; // 0x16
		::System::Byte m_ZFailOperationFront; // 0x17
		::System::Byte m_CompareFunctionBack; // 0x18
		::System::Byte m_PassOperationBack; // 0x19
		::System::Byte m_FailOperationBack; // 0x1A
		::System::Byte m_ZFailOperationBack; // 0x1B

		::UnityEngine::Rendering::StencilState* get_defaultValue()
		{
			return (return (::UnityEngine::Rendering::StencilState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Byte arg, ::System::Byte arg, ::UnityEngine::Rendering::CompareFunction* arg, ::UnityEngine::Rendering::StencilOp* arg, ::UnityEngine::Rendering::StencilOp* arg, ::UnityEngine::Rendering::StencilOp* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Byte, ::System::Byte, ::UnityEngine::Rendering::CompareFunction*, ::UnityEngine::Rendering::StencilOp*, ::UnityEngine::Rendering::StencilOp*, ::UnityEngine::Rendering::StencilOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Byte arg, ::System::Byte arg, ::UnityEngine::Rendering::CompareFunction* arg, ::UnityEngine::Rendering::StencilOp* arg, ::UnityEngine::Rendering::StencilOp* arg, ::UnityEngine::Rendering::StencilOp* arg, ::UnityEngine::Rendering::CompareFunction* arg, ::UnityEngine::Rendering::StencilOp* arg, ::UnityEngine::Rendering::StencilOp* arg, ::UnityEngine::Rendering::StencilOp* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Byte, ::System::Byte, ::UnityEngine::Rendering::CompareFunction*, ::UnityEngine::Rendering::StencilOp*, ::UnityEngine::Rendering::StencilOp*, ::UnityEngine::Rendering::StencilOp*, ::UnityEngine::Rendering::CompareFunction*, ::UnityEngine::Rendering::StencilOp*, ::UnityEngine::Rendering::StencilOp*, ::UnityEngine::Rendering::StencilOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Byte get_readMask()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_READMASK_OFFSET))(nullptr);
		}

		::System::Void set_readMask(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_READMASK_OFFSET))(arg, nullptr);
		}

		::System::Byte get_writeMask()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_WRITEMASK_OFFSET))(nullptr);
		}

		::System::Void set_writeMask(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_WRITEMASK_OFFSET))(arg, nullptr);
		}

		::System::Void SetCompareFunction(::UnityEngine::Rendering::CompareFunction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CompareFunction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SETCOMPAREFUNCTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetPassOperation(::UnityEngine::Rendering::StencilOp* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::StencilOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SETPASSOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetFailOperation(::UnityEngine::Rendering::StencilOp* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::StencilOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SETFAILOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetZFailOperation(::UnityEngine::Rendering::StencilOp* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::StencilOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SETZFAILOPERATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::CompareFunction* get_compareFunctionFront()
		{
			return (return (::UnityEngine::Rendering::CompareFunction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_COMPAREFUNCTIONFRONT_OFFSET))(nullptr);
		}

		::System::Void set_compareFunctionFront(::UnityEngine::Rendering::CompareFunction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CompareFunction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONFRONT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::StencilOp* get_passOperationFront()
		{
			return (return (::UnityEngine::Rendering::StencilOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_PASSOPERATIONFRONT_OFFSET))(nullptr);
		}

		::System::Void set_passOperationFront(::UnityEngine::Rendering::StencilOp* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::StencilOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONFRONT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::StencilOp* get_failOperationFront()
		{
			return (return (::UnityEngine::Rendering::StencilOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_FAILOPERATIONFRONT_OFFSET))(nullptr);
		}

		::System::Void set_failOperationFront(::UnityEngine::Rendering::StencilOp* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::StencilOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONFRONT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::StencilOp* get_zFailOperationFront()
		{
			return (return (::UnityEngine::Rendering::StencilOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_ZFAILOPERATIONFRONT_OFFSET))(nullptr);
		}

		::System::Void set_zFailOperationFront(::UnityEngine::Rendering::StencilOp* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::StencilOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONFRONT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::CompareFunction* get_compareFunctionBack()
		{
			return (return (::UnityEngine::Rendering::CompareFunction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_COMPAREFUNCTIONBACK_OFFSET))(nullptr);
		}

		::System::Void set_compareFunctionBack(::UnityEngine::Rendering::CompareFunction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CompareFunction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONBACK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::StencilOp* get_passOperationBack()
		{
			return (return (::UnityEngine::Rendering::StencilOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_PASSOPERATIONBACK_OFFSET))(nullptr);
		}

		::System::Void set_passOperationBack(::UnityEngine::Rendering::StencilOp* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::StencilOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONBACK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::StencilOp* get_failOperationBack()
		{
			return (return (::UnityEngine::Rendering::StencilOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_FAILOPERATIONBACK_OFFSET))(nullptr);
		}

		::System::Void set_failOperationBack(::UnityEngine::Rendering::StencilOp* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::StencilOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONBACK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::StencilOp* get_zFailOperationBack()
		{
			return (return (::UnityEngine::Rendering::StencilOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_ZFAILOPERATIONBACK_OFFSET))(nullptr);
		}

		::System::Void set_zFailOperationBack(::UnityEngine::Rendering::StencilOp* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::StencilOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::StencilState* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::StencilState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

