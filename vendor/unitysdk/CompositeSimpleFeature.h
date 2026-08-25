#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define COMPOSITESIMPLEFEATURE_CREATE_OFFSET UNITYSDK_OFFSET(0x9FF47E0)
#define COMPOSITESIMPLEFEATURE_ADDRENDERPASSES_OFFSET UNITYSDK_OFFSET(0x9FF4B80)
#define COMPOSITESIMPLEFEATURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF4E80)

	inline static constexpr unsigned int CompositeSimpleFeature_TypeDefinitionIndex = 32413;

	class CompositeSimpleFeature : public Il2CppObject
	{
	public:
		Settings* settings; // 0x20
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _tempHandle; // 0x28
		::Il2CppArray<::System::Object*>* _tagIds; // 0x58
		RenderToCompositePass* _renderToCompositePass; // 0x60
		CompositePass* _compositePass; // 0x68

		::System::Void Create()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPOSITESIMPLEFEATURE_CREATE_OFFSET))(nullptr);
		}

		::System::Void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + COMPOSITESIMPLEFEATURE_ADDRENDERPASSES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPOSITESIMPLEFEATURE_.CTOR_OFFSET))(nullptr);
		}

	};

