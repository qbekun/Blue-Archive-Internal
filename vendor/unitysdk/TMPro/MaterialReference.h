#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace UnityEngine { class Material; }

#define TMPRO_MATERIALREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA10ADE0)
#define TMPRO_MATERIALREFERENCE_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA10AEA0)
#define TMPRO_MATERIALREFERENCE_ADDMATERIALREFERENCE_OFFSET UNITYSDK_OFFSET(0xA10AFB0)
#define TMPRO_MATERIALREFERENCE_ADDMATERIALREFERENCE_OFFSET UNITYSDK_OFFSET(0xA10B1E0)

namespace TMPro
{
	inline static constexpr unsigned int MaterialReference_TypeDefinitionIndex = 33606;

	class MaterialReference : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10
		::TMPro::TMP_FontAsset* fontAsset; // 0x18
		::TMPro::TMP_SpriteAsset* spriteAsset; // 0x20
		::UnityEngine::Material* material; // 0x28
		::System::Boolean isDefaultMaterial; // 0x30
		::System::Boolean isFallbackMaterial; // 0x31
		::UnityEngine::Material* fallbackMaterial; // 0x38
		::System::Single padding; // 0x40
		::System::Int32 referenceCount; // 0x44

		::System::Void .ctor(::System::Int32 arg, ::TMPro::TMP_FontAsset* arg, ::TMPro::TMP_SpriteAsset* arg, ::UnityEngine::Material* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::TMPro::TMP_FontAsset*, ::TMPro::TMP_SpriteAsset*, ::UnityEngine::Material*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Contains(::Il2CppArray<::System::Object*>* arg, ::TMPro::TMP_FontAsset* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::TMPro::TMP_FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCE_CONTAINS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 AddMaterialReference(::UnityEngine::Material* arg, ::TMPro::TMP_FontAsset* arg, ::System::Object[]&* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Material*, ::TMPro::TMP_FontAsset*, ::System::Object[]&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCE_ADDMATERIALREFERENCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 AddMaterialReference(::UnityEngine::Material* arg, ::TMPro::TMP_SpriteAsset* arg, ::System::Object[]&* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Material*, ::TMPro::TMP_SpriteAsset*, ::System::Object[]&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCE_ADDMATERIALREFERENCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

