#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class CanvasUpdate; }
namespace UnityEngine { class Material; }

#define TMPRO_ITEXTELEMENT_REBUILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_ITEXTELEMENT_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_ITEXTELEMENT_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TMPro
{
	inline static constexpr unsigned int ITextElement_TypeDefinitionIndex = 33730;

	class ITextElement : public Il2CppObject
	{
	public:
		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::CanvasUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_ITEXTELEMENT_REBUILD_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetInstanceID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_ITEXTELEMENT_GETINSTANCEID_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_sharedMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_ITEXTELEMENT_GET_SHAREDMATERIAL_OFFSET))(nullptr);
		}

	};
}

