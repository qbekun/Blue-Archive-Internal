#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TextureId; }

#define UNITYENGINE_UIELEMENTS_TEXTUREID_.CTOR_OFFSET UNITYSDK_OFFSET(0xA40CEF0)
#define UNITYENGINE_UIELEMENTS_TEXTUREID_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xA40CF00)
#define UNITYENGINE_UIELEMENTS_TEXTUREID_CONVERTTOGPU_OFFSET UNITYSDK_OFFSET(0xA40CF10)
#define UNITYENGINE_UIELEMENTS_TEXTUREID_EQUALS_OFFSET UNITYSDK_OFFSET(0xA40CF60)
#define UNITYENGINE_UIELEMENTS_TEXTUREID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA40CFF0)
#define UNITYENGINE_UIELEMENTS_TEXTUREID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA40D010)
#define UNITYENGINE_UIELEMENTS_TEXTUREID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA40D020)
#define UNITYENGINE_UIELEMENTS_TEXTUREID_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA40D070)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextureId_TypeDefinitionIndex = 30585;

	class TextureId : public Il2CppObject
	{
	public:
		::System::Int32 m_Index; // 0x10
		::UnityEngine::UIElements::TextureId* invalid; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREID_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Single ConvertToGpu()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREID_CONVERTTOGPU_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREID_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::TextureId* arg, ::UnityEngine::UIElements::TextureId* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TextureId*, ::UnityEngine::UIElements::TextureId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREID_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::UIElements::TextureId* arg, ::UnityEngine::UIElements::TextureId* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TextureId*, ::UnityEngine::UIElements::TextureId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREID_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREID_.CCTOR_OFFSET))(nullptr);
		}

	};
}

