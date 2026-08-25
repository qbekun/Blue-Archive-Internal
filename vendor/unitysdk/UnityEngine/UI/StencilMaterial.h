#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class StencilOp; }
namespace UnityEngine::Rendering { class CompareFunction; }
namespace UnityEngine::Rendering { class ColorWriteMask; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_UI_STENCILMATERIAL_ADD_OFFSET UNITYSDK_OFFSET(0xA4816C0)
#define UNITYENGINE_UI_STENCILMATERIAL_ADD_OFFSET UNITYSDK_OFFSET(0xA4816D0)
#define UNITYENGINE_UI_STENCILMATERIAL_LOGWARNINGWHENNOTINBATCHMODE_OFFSET UNITYSDK_OFFSET(0xA4820B0)
#define UNITYENGINE_UI_STENCILMATERIAL_ADD_OFFSET UNITYSDK_OFFSET(0xA481750)
#define UNITYENGINE_UI_STENCILMATERIAL_REMOVE_OFFSET UNITYSDK_OFFSET(0xA482130)
#define UNITYENGINE_UI_STENCILMATERIAL_CLEARALL_OFFSET UNITYSDK_OFFSET(0xA482300)
#define UNITYENGINE_UI_STENCILMATERIAL_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA482480)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int StencilMaterial_TypeDefinitionIndex = 34852;

	class StencilMaterial : public Il2CppObject
	{
	public:
		Il2CppObject* m_List; // 0x0

		::UnityEngine::Material* Add(::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_ADD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Material* Add(::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::Rendering::StencilOp* arg, ::UnityEngine::Rendering::CompareFunction* arg, ::UnityEngine::Rendering::ColorWriteMask* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Rendering::StencilOp*, ::UnityEngine::Rendering::CompareFunction*, ::UnityEngine::Rendering::ColorWriteMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_ADD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void LogWarningWhenNotInBatchmode(::System::String* str, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_LOGWARNINGWHENNOTINBATCHMODE_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Material* Add(::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::Rendering::StencilOp* arg, ::UnityEngine::Rendering::CompareFunction* arg, ::UnityEngine::Rendering::ColorWriteMask* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Rendering::StencilOp*, ::UnityEngine::Rendering::CompareFunction*, ::UnityEngine::Rendering::ColorWriteMask*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_ADD_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Remove(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_CLEARALL_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

