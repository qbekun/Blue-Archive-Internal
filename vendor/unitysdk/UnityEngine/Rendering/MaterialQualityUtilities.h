#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class MaterialQuality; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_GETHIGHESTQUALITY_OFFSET UNITYSDK_OFFSET(0x9FDC810)
#define UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_GETCLOSESTQUALITY_OFFSET UNITYSDK_OFFSET(0x9FDC8C0)
#define UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_SETGLOBALSHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0x9FDCB10)
#define UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_SETGLOBALSHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0x9FDCC10)
#define UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_TOFIRSTINDEX_OFFSET UNITYSDK_OFFSET(0x9FDCA20)
#define UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_FROMINDEX_OFFSET UNITYSDK_OFFSET(0x9FDCB00)
#define UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FDCD30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MaterialQualityUtilities_TypeDefinitionIndex = 34071;

	class MaterialQualityUtilities : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* KeywordNames; // 0x0
		::Il2CppArray<::System::Object*>* EnumNames; // 0x8
		::Il2CppArray<::System::Object*>* Keywords; // 0x10

		::UnityEngine::Rendering::MaterialQuality* GetHighestQuality(::UnityEngine::Rendering::MaterialQuality* arg)
		{
			return (return (::UnityEngine::Rendering::MaterialQuality*(*)(::UnityEngine::Rendering::MaterialQuality*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_GETHIGHESTQUALITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::MaterialQuality* GetClosestQuality(::UnityEngine::Rendering::MaterialQuality* arg, ::UnityEngine::Rendering::MaterialQuality* arg)
		{
			return (return (::UnityEngine::Rendering::MaterialQuality*(*)(::UnityEngine::Rendering::MaterialQuality*, ::UnityEngine::Rendering::MaterialQuality*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_GETCLOSESTQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalShaderKeywords(::UnityEngine::Rendering::MaterialQuality* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::MaterialQuality*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_SETGLOBALSHADERKEYWORDS_OFFSET))(arg, nullptr);
		}

		::System::Void SetGlobalShaderKeywords(::UnityEngine::Rendering::MaterialQuality* arg, ::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::MaterialQuality*, ::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_SETGLOBALSHADERKEYWORDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ToFirstIndex(::UnityEngine::Rendering::MaterialQuality* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::MaterialQuality*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_TOFIRSTINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::MaterialQuality* FromIndex(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::MaterialQuality*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_FROMINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALQUALITYUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

