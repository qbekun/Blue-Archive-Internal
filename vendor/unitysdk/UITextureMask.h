#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Material; }

#define UITEXTUREMASK_ONRENDER_OFFSET UNITYSDK_OFFSET(0x2594A00)
#define UITEXTUREMASK_ONGEOMETRYUPDATED_OFFSET UNITYSDK_OFFSET(0x2594A60)
#define UITEXTUREMASK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x25954E0)
#define UITEXTUREMASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2595670)
#define UITEXTUREMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25956F0)
#define UITEXTUREMASK_AWAKE_OFFSET UNITYSDK_OFFSET(0x2595AB0)

	inline static constexpr unsigned int UITextureMask_TypeDefinitionIndex = 269;

	class UITextureMask : public Il2CppObject
	{
	public:
		::UnityEngine::Texture2D* ClipTexture; // 0x190
		::Il2CppArray<::System::Object*>* clipRange; // 0x198
		::UnityEngine::Vector4* drawCallClipRange; // 0x1A0
		::UnityEngine::Material* MaskMat; // 0x1B0
		Il2CppObject* widgets; // 0x1B8

		::System::Void OnRender(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTUREMASK_ONRENDER_OFFSET))(arg, nullptr);
		}

		::System::Void OnGeometryUpdated()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTUREMASK_ONGEOMETRYUPDATED_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTUREMASK_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTUREMASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTUREMASK_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTUREMASK_AWAKE_OFFSET))(nullptr);
		}

	};

