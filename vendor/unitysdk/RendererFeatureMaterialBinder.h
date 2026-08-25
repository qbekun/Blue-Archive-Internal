#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class ScriptableRendererData; }

#define RENDERERFEATUREMATERIALBINDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20C1ED0)
#define RENDERERFEATUREMATERIALBINDER_FINDFEATUREMATERIAL_OFFSET UNITYSDK_OFFSET(0x20C2250)
#define RENDERERFEATUREMATERIALBINDER_REBIND_OFFSET UNITYSDK_OFFSET(0x20C1FE0)
#define RENDERERFEATUREMATERIALBINDER_GETCURRENTCAMERARENDERERDATA_OFFSET UNITYSDK_OFFSET(0x20C2660)
#define RENDERERFEATUREMATERIALBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C2780)
#define RENDERERFEATUREMATERIALBINDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20C2800)

	inline static constexpr unsigned int RendererFeatureMaterialBinder_TypeDefinitionIndex = 3649;

	class RendererFeatureMaterialBinder : public Il2CppObject
	{
	public:
		::System::String* FeatureName; // 0x18
		Il2CppObject* Targets; // 0x20

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERERFEATUREMATERIALBINDER_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Material* FindFeatureMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERERFEATUREMATERIALBINDER_FINDFEATUREMATERIAL_OFFSET))(nullptr);
		}

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERERFEATUREMATERIALBINDER_REBIND_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::ScriptableRendererData* GetCurrentCameraRendererData(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::UnityEngine::Rendering::Universal::ScriptableRendererData*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERERFEATUREMATERIALBINDER_GETCURRENTCAMERARENDERERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERERFEATUREMATERIALBINDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERERFEATUREMATERIALBINDER_ONDISABLE_OFFSET))(nullptr);
		}

	};

